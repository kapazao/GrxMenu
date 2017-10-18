#include "tunel.h"

Tunel::Tunel(){

}
Tunel::~Tunel(){

}

int Tunel::puerto_libre(){
    QTcpServer server;
    if(server.listen(QHostAddress::Any, 0))
           return server.serverPort();

 return 0;
}

char* Tunel::convierte(QString dato){
    char *c = dato.toStdString().c_str();
    return c;
}

void Tunel::crea_fordwarding(){
        fprintf(stderr, "Ha entrado\n");
        rc = libssh2_init (0);
        if (rc != 0) {
            fprintf (stderr, "libssh2 initialization failed (%d)\n", rc);

        }
        sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
        if (sock == -1) {
            fprintf(stderr, "socket pollas\n");
            perror("socket");

        }
        fprintf(stderr, "Ha creado el socket\n");
        sin.sin_family = AF_INET;
        if (INADDR_NONE == (sin.sin_addr.s_addr = inet_addr(server_ip))) {
            perror("inet_addr");

        }
        sin.sin_port = htons(remote_port);
        fprintf(stderr, "conecta\n");
        if (conectado(sock, (struct sockaddr*)(&sin),sizeof(struct sockaddr_in)) != 0) {
            fprintf(stderr, "failed to connect!\n");
        }
        fprintf(stderr, "ya not\n");
        /* Create a session instance */
        session = libssh2_session_init();

        if(!session) {
            fprintf(stderr, "Could not initialize SSH session!\n");
        }

        rc = libssh2_session_handshake(session, sock);

        if(rc) {
            fprintf(stderr, "Error when starting up SSH session: %d\n", rc);
        }

        fingerprint = libssh2_hostkey_hash(session, LIBSSH2_HOSTKEY_HASH_SHA1);

        fprintf(stderr, "Fingerprint: ");
        for(i = 0; i < 20; i++)
            fprintf(stderr, "%02X ", (unsigned char)fingerprint[i]);
        fprintf(stderr, "\n");

        userauthlist = libssh2_userauth_list(session, username, strlen(username));
        fprintf(stderr, "Hautenocket\n");
        fprintf(stderr, "Authentication methods: %s\n", userauthlist);
        if (strstr(userauthlist, "password"))
            auth |= AUTH_PASSWORD;
        if (strstr(userauthlist, "publickey"))
            auth |= AUTH_PUBLICKEY;

        if (auth & AUTH_PASSWORD) {
            if (libssh2_userauth_password(session, username, password)) {

                fprintf(stderr, "Authentication by password failed.\n");
                cierra_conexion();
            }
        } else if (auth & AUTH_PUBLICKEY) {
            if (libssh2_userauth_publickey_fromfile(session, username, keyfile1,

                                                    keyfile2, password)) {
                fprintf(stderr, "\tAuthentication by public key failed!\n");
                cierra_conexion();
            }
            fprintf(stderr, "\tAuthentication by public key succeeded.\n");
        } else {
            fprintf(stderr, "No supported authentication methods found!\n");
            cierra_conexion();
        }

        listensock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
        if (listensock == -1) {
            perror("socket");
            cierra_conexion();
        }

        sin.sin_family = AF_INET;
        sin.sin_port = htons(local_listenport);
        if (INADDR_NONE == (sin.sin_addr.s_addr = inet_addr(local_listenip))) {
            perror("inet_addr");
            cierra_conexion();
        }
        sockopt = 1;
        setsockopt(listensock, SOL_SOCKET, SO_REUSEADDR, &sockopt, sizeof(sockopt));
        sinlen=sizeof(sin);
        if (-1 == bind(listensock, (struct sockaddr *)&sin, sinlen)) {
            perror("bind");
            cierra_conexion();
        }
        if (-1 == listen(listensock, 2)) {
            perror("listen");
            cierra_conexion();
        }

        fprintf(stderr, "Waiting for TCP connection on %s:%d...\n",
            inet_ntoa(sin.sin_addr), ntohs(sin.sin_port));

        forwardsock = accept(listensock, (struct sockaddr *)&sin, &sinlen);
        if (forwardsock == -1) {
            perror("accept");
          cierra_conexion();
        }


        shost = inet_ntoa(sin.sin_addr);
        sport = ntohs(sin.sin_port);

        fprintf(stderr, "Forwarding connection from %s:%d here to remote %s:%d\n",
            shost, sport, remote_desthost, remote_destport);

        channel = libssh2_channel_direct_tcpip_ex(session, remote_desthost,

            remote_destport, shost, sport);
        if (!channel) {
            fprintf(stderr, "Could not open the direct-tcpip channel!\n"
                    "(Note that this can be a problem at the server!"
                    " Please review the server logs.)\n");
            cierra_conexion();
        }

        /* Must use non-blocking IO hereafter due to the current libssh2 API */
        libssh2_session_set_blocking(session, 0);
fprintf(stderr, "while");

        while (1) {
            FD_ZERO(&fds);
            FD_SET(forwardsock, &fds);
            tv.tv_sec = 0;
            tv.tv_usec = 100000;
            rc = select(forwardsock + 1, &fds, NULL, NULL, &tv);
            if (-1 == rc) {
                perror("select");
                cierra_conexion();
            }
            if (rc && FD_ISSET(forwardsock, &fds)) {
                len = recv(forwardsock, buf, sizeof(buf), 0);
                if (len < 0) {
                    perror("read");
                    cierra_conexion();
                } else if (0 == len) {
                    fprintf(stderr, "The client at %s:%d disconnected!\n", shost,sport);
                    cierra_conexion();
                }
                wr = 0;
                while(wr < len) {
                    i = libssh2_channel_write(channel, buf + wr, len - wr);

                    if (LIBSSH2_ERROR_EAGAIN == i) {
                        continue;
                    }
                    if (i < 0) {
                        fprintf(stderr, "libssh2_channel_write: %d\n", i);
                        cierra_conexion();
                    }
                    wr += i;
                }
            }
            while (1) {
                len = libssh2_channel_read(channel, buf, sizeof(buf));

                if (LIBSSH2_ERROR_EAGAIN == len)
                    break;
                else if (len < 0) {
                    fprintf(stderr, "libssh2_channel_read: %d", (int)len);
                    cierra_conexion();
                }
                wr = 0;
                while (wr < len) {
                    i = send(forwardsock, buf + wr, len - wr, 0);
                    if (i <= 0) {
                        perror("write");
                        cierra_conexion();
                    }
                    wr += i;
                }
                if (libssh2_channel_eof(channel)) {

                    fprintf(stderr, "The server at %s:%d disconnected!\n",
                        remote_desthost, remote_destport);
                    cierra_conexion();
                }
            }
        }

}

int Tunel::creatunelDB(int puerto_remoto,char *usuario,char *servidor, int puerto_libre){
    Tunel *ssh = new Tunel;
    QThread *hilo= new QThread;

    ssh->keyfile1="";
    ssh->keyfile2="";
    ssh->username="gorgojo";
    qDebug()<<"usuario"<< usuario;
    ssh->password="C*nstelac10n";
    ssh->server_ip=servidor;
    qDebug()<<"servidor"<< servidor;
    ssh->local_listenip="127.0.0.1";
    ssh->remote_port=22;
    ssh->local_listenport=puerto_libre;
    ssh->remote_desthost="localhost";
    ssh->remote_destport=3306;
    //ssh->crea_fordwarding();
    ssh->moveToThread(hilo);
    connect(hilo, &QThread::started, this, &Tunel::crea_fordwarding);
    /*connect(ssh, SIGNAL (error(QString)), this, SLOT (errorString(QString)));
    connect(ssh, &Tunel::destroyed, hilo, &QThread::quit);
    connect(ssh, &Tunel::destroyed, ssh, &Tunel::deleteLater);

    connect(hilo, SIGNAL (started()), this ,SLOT (crea_fordwarding()));
    connect(ssh, SIGNAL (destroyed()), this, SLOT (crea_fordwarding()));

   // connect(ssh, SIGNAL (destroyed()), hilo, SLOT (quit()));
   // connect(ssh, SIGNAL::destroyed, ssh, &Tunel::deleteLater);
    //ssh->connect(hilo, &QThread::finished, hilo, &Tunel::cierra_conexion);
*/
    hilo->start();

/*
    if (ssh->inicia_libssh2())
         fprintf (stderr, "No he podido inicializar libssh2 (%d)\n");
    else{
            fprintf (stderr, "SI he podido inicializar libssh2 (%d)\n");
            if ((ssh->crea_socket(servidor,puerto_remoto)))
             fprintf (stderr, "No he podido crear un socket (%d)\n");
            else{
                fprintf (stderr, "SI he podido crear un socket (%d)\n");
                if (ssh->crea_sesion())
                    fprintf (stderr, "No he podido crear un socket (%d)\n");
                else{
                     fprintf (stderr, "SI he podido mostrar el fingerprint (%d)\n");
                    if (ssh->muestra_fingerprint())
                            fprintf (stderr, "No he podido mostrar el fingerprint (%d)\n");
                    else
                        if (ssh->autenticacion(usuario,"password"))
                            fprintf (stderr, "No he podido autenticarme (%d)\n");
                        else
                             if (ssh->escucha(puerto_libre,"127.0.0.1",3306));
                                 fprintf (stderr, "No he podido ejecutar escucha (%d)\n");
                    }

               }
        }

*/
    //ssh->cierra_conexion();
}

bool Tunel::createConnection()
{
    Configuracion *configuracion = new Configuracion;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

    int puerto_local,contador;

    puerto_local=puerto_libre();
    if (configuracion->es_usarSSH()){ //creamos tunel ssh
        //creatunelDB(configuracion->cual_es_puerto_remoto_ssh(), convierte(configuracion->cual_es_usuarioSSH()), "10.7.15.193",puerto_local);
        creatunelDB(configuracion->cual_es_puerto_remoto_ssh(), convierte(configuracion->cual_es_usuarioSSH()), "10.7.15.193",puerto_local);
        db.setPort(puerto_local);
        qDebug()<<"con tunel";

    }else{
        db.setPort(configuracion->cual_es_PuertoDB().toInt());
        qDebug()<<"sin tunel";
    }

    db.setDatabaseName(configuracion->cual_es_DataBaseName());
    db.setHostName(configuracion->cual_es_HostName());
    db.setUserName(configuracion->cual_es_UserName());
    db.setPassword(configuracion->cual_es_PaswordDB());
    contador=0;
    bool DB;
    do{

           DB = db.open();
           contador++;
           if (contador>4){
               delete configuracion;
               return false;
           }
           else
               return true;
    }while (true);
   return true;
   delete configuracion;
};

/*
     * Inicializa la libreria libssh2
     * Devuelve -1 en caso de error();
     * Es el primer paso para conectar por ssh
    */
int Tunel::inicia_libssh2()
    {
        rc = libssh2_init (0);
        if (rc != 0)
               return -1;
    return 0;
    }

/*
     * Crea un socket con la ip y el puerto como parametro
     * Devuelve -1 en caso de error();
     * Es el segundo paso para conectar por ssh
    */
int Tunel::crea_socket(char *server_ip, unsigned int remote_port)//segundo paso,
    {
        sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
        if (sock == -1)
             return -1;
        sin.sin_family = AF_INET;
        if (INADDR_NONE == (sin.sin_addr.s_addr = inet_addr(server_ip)))
             return -1;

        sin.sin_port = htons(remote_port);
        fprintf (stderr, "paso por aqui");
         if (::connect(sock, (struct sockaddr*)(&sin),sizeof(struct sockaddr_in)) != 0){
             fprintf (stderr, "y por aqui");
             return -1;
         }
    return 0;
    }

/*
     * Crea una sesion con el socket creado en crea_socket
     * Devuelve -1 en caso de error();
     * Es el tercer paso para conectar por ssh
    */
int Tunel::crea_sesion(){
        session = libssh2_session_init();
        if(!session) {
            fprintf(stderr, "No puedo inicializar una sesion\n");
            return -1;
        }
        rc = libssh2_session_handshake(session, sock);
        if(rc) {
            fprintf(stderr, "Error mientras comenzaba una sesion SSH: %d\n", rc);
            return -1;
        }
    return 0;
    }

/*
     * Muestra el fingerprint (hostkey hash) de la conexion
     * Devuelve -1 en caso de error();
     * Este paso es el cuarto (*?no es obligatorio)
    */
int Tunel::muestra_fingerprint(){

        fingerprint = libssh2_hostkey_hash(session, LIBSSH2_HOSTKEY_HASH_SHA1);

        fprintf(stderr, "Fingerprint: ");
        for(i = 0; i < 20; i++)
            fprintf(stderr, "%02X ", (unsigned char)fingerprint[i]);
        fprintf(stderr, "\n");
    return 0;
    }

/*
     * Muestra los metodos de autentificacion del servidor y nos autentifica
     * Devuelve -1 en caso de error();
     * Paso quinto
     */
int Tunel::autenticacion(char *username,char *password){

        /* chequea los metodos de autenticacion*/
        userauthlist = libssh2_userauth_list(session, username, strlen(username));

        fprintf(stderr, "Metodos de autentificacion: %s\n", userauthlist);
        if (strstr(userauthlist, "password"))
            auth |= AUTH_PASSWORD;
        if (strstr(userauthlist, "publickey"))
            auth |= AUTH_PUBLICKEY;

        if (auth & AUTH_PASSWORD) {
            if (libssh2_userauth_password(session, username, password)) {
                fprintf(stderr, "Autentificacion por password fallida.\n");
                return -1;
            }
        } else if (auth & AUTH_PUBLICKEY) {
            if (libssh2_userauth_publickey_fromfile(session, username, keyfile1,keyfile2, password)) {
                fprintf(stderr, "\tAutentificacion por clave publica fallida.\n");
                return -1;
            }
            fprintf(stderr, "\tAutentificacion por clave publica correcta.\n");
        } else {
            fprintf(stderr, "No se han encontrado metodos de autenticacion soportados\n");
            return -1;
        }
    return 0;
    }

/*
     * Muestra los metodos de autentificacion del servidor y nos autentifica
     * Devuelve -1 en caso de error();
     * Paso sexto
     */
int Tunel::escucha(unsigned int local_listenport,char *local_listenip,unsigned int remote_destport){
        listensock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
        if (listensock == -1)
            return -1;

        sin.sin_family = AF_INET;
        sin.sin_port = htons(local_listenport);
        if (INADDR_NONE == (sin.sin_addr.s_addr = inet_addr(local_listenip)))
            return -1;
        sockopt = 1;
        setsockopt(listensock, SOL_SOCKET, SO_REUSEADDR, &sockopt, sizeof(sockopt));
        sinlen=sizeof(sin);
        if (-1 == bind(listensock, (struct sockaddr *)&sin, sinlen))
            return -1;
        if (-1 == listen(listensock, 2))
            return -1;
        fprintf(stderr, "Esperando conexiones TCP en %s:%d...\n",
            inet_ntoa(sin.sin_addr), ntohs(sin.sin_port));

        forwardsock = accept(listensock, (struct sockaddr *)&sin, &sinlen);

        if (forwardsock == -1)
            return -1;
        shost = inet_ntoa(sin.sin_addr);
        sport = ntohs(sin.sin_port);
        fprintf(stderr, "Se ha creado un tunel desde desde %s:%d a %s:%d\n",
            shost, sport, remote_desthost, remote_destport);

        channel = libssh2_channel_direct_tcpip_ex(session, remote_desthost,remote_destport, shost, sport);
        if (!channel)
            return -1;

        libssh2_session_set_blocking(session, 0);

        while (1) {
            FD_ZERO(&fds);
            FD_SET(forwardsock, &fds);
            tv.tv_sec = 0;
            tv.tv_usec = 100000;
            rc = select(forwardsock + 1, &fds, NULL, NULL, &tv);
            if (-1 == rc)  return -1;
            if (rc && FD_ISSET(forwardsock, &fds)) {
                len = recv(forwardsock, buf, sizeof(buf), 0);
                if (len < 0) {
                    return -1;
                } else if (0 == len) {
                    fprintf(stderr, "El cliente en %s:%d se ha desconectado\n", shost,
                        sport);
                     return -1;
                }
                wr = 0;
                while(wr < len) {
                    i = libssh2_channel_write(channel, buf + wr, len - wr);

                    if (LIBSSH2_ERROR_EAGAIN == i) {
                        continue;
                    }
                    if (i < 0) {
                         return -1;
                    }
                    wr += i;
                }
            }
            while (1) {
                len = libssh2_channel_read(channel, buf, sizeof(buf));

                if (LIBSSH2_ERROR_EAGAIN == len)
                    break;
                else if (len < 0) {
                    fprintf(stderr, "libssh2_channel_leido: %d", (int)len);
                     return -1;
                }
                wr = 0;
                while (wr < len) {
                    i = send(forwardsock, buf + wr, len - wr, 0);
                    if (i <= 0) {
                         return -1;
                    }
                    wr += i;
                }
                if (libssh2_channel_eof(channel)) {

                    fprintf(stderr, "El servidor %s:%d se ha desconectado\n",
                        remote_desthost, remote_destport);
                     return -1;
                }
            }
        }
    }

/*
 *
 *
 *
 */
int Tunel::cierra_conexion(){

        if (forwardsock != -1)
            close(forwardsock);
        if (listensock != -1)
            close(listensock);
        if (channel)
            libssh2_channel_free(channel);

        if (session){
            libssh2_session_disconnect(session, "Desconectado de forma segura");
            libssh2_session_free(session);
        }
        if (sock != -1)
            close(sock);
        if (rc != 0)
            libssh2_exit();

        return 0;
    }

