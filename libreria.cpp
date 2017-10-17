#include <QTcpServer>
#include "configuracion.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSqlQueryModel>
#include <QProcess>
#include "hilos.h"
#include <QtDebug>
#include "qthread.h"

int puerto_libre(){
    QTcpServer server;
    if(server.listen(QHostAddress::Any, 0))
           return server.serverPort();

 return 0;
}

int creatunelDB(int puerto_remoto,char *usuario,char *servidor, int puerto_libre){

    Tunel *ssh = new Tunel;
    QThread *hilo= new QThread;
   /* ssh->moveToThread(hilo);
    connect(ssh, SIGNAL (error(QString)), this, SLOT (errorString(QString)));
    connect(hilo, SIGNAL (started()), ssh, SLOT (crea_fordwarding()));
    connect(ssh, SIGNAL (finished()), hilo, SLOT (quit()));
    connect(ssh, SIGNAL (finished()), ssh, SLOT (deleteLater()));
    connect(hilo, SIGNAL (finished()), hilo, SLOT (deleteLater()));
    */
    ssh->keyfile1="/home/alberto/.ssh/id_rsa.pub";
    ssh->keyfile2="/home/alberto/.ssh/id_rsa";
    ssh->username="gorgojo";
    ssh->password="C*nstelac10n";
    ssh->server_ip="10.7.15.193";
    ssh->local_listenip="127.0.0.1";
    ssh->remote_port =22;
    ssh->local_listenport=2222;
    ssh->remote_desthost="localhost";
    ssh->remote_destport=3306;
    ssh->crea_fordwarding();
    hilo->start();

    if (ssh->inicia_libssh2())
         fprintf (stderr, "No he podido inicializar libssh2 (%d)\n");
    else
        if ((ssh->crea_socket(servidor,puerto_remoto)))
            fprintf (stderr, "No he podido crear un socket (%d)\n");
        else
            if (ssh->crea_sesion())
                fprintf (stderr, "No he podido crear un socket (%d)\n");
            else
                if (ssh->muestra_fingerprint())
                        fprintf (stderr, "No he podido mostrar el fingerprint (%d)\n");
                else
                    if (ssh->autenticacion(usuario,"C*nstelac10n"))
                        fprintf (stderr, "No he podido autenticarme (%d)\n");
                    else
                         if (ssh->escucha(puerto_libre,"127.0.0.1",3306));
                             fprintf (stderr, "No he podido ejecutar escucha (%d)\n");
    ssh->cierra_conexion();
}

char* convierte(QString dato){
    char *c = dato.toStdString().c_str();
    return c;
}

bool createConnection()
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
}
