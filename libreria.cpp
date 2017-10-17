#include <QTcpServer>
#include "configuracion.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSqlQueryModel>
#include <QProcess>
#include "tunel.h"
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

    ssh->keyfile1="";
    ssh->keyfile2="";
    ssh->username="";
    ssh->password="";
    ssh->server_ip="";
    ssh->local_listenip="";
    ssh->remote_port=;
    ssh->local_listenport=puerto_libre;
    ssh->remote_desthost="localhost";
    ssh->remote_destport=3306;

    ssh->moveToThread(hilo);
    //QObject::connect(ssh, SIGNAL (error(QString)), this, SLOT (errorString(QString)));
    QObject::connect(hilo, SIGNAL (started()), ssh, SLOT (crea_fordwarding()));
    QObject::connect(ssh, SIGNAL (finished()), hilo, SLOT (quit()));
    QObject::connect(ssh, SIGNAL (finished()), ssh, SLOT (cierra_conexion()));
    QObject::connect(ssh, SIGNAL (finished()), ssh, SLOT (deleteLater()));
    QObject::connect(hilo, SIGNAL (finished()), hilo, SLOT (deleteLater()));

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
