#include <QApplication>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSqlQueryModel>
#include <QTcpServer>
#include <QMessageBox>
#include "botonera.h"
#include "configuracion.h"
#include "tunel.h"
#include "qthread.h"
QSqlDatabase db;
struct variables{
    QString keyfile1;
    QString keyfile2;
    QString username_ssh;
    QString password_ssh;
    QString username_DB;
    QString password_DB;
    QString server_ip;
    QString local_listenip;
    unsigned int remote_port;
    unsigned int local_listenport;
    QString remote_desthost;
    QString databasename;
    QString hostname_DB;
    unsigned int remote_destport;
    bool usar_ssh;
}datos;

unsigned int puerto_libre(){
    QTcpServer server;
    if(server.listen(QHostAddress::Any, 0))
           return server.serverPort();
 return -1;
}

bool basedatos(){
    db.setDatabaseName(datos.databasename);
    db.setHostName("127.0.0.1");
    db.setUserName(datos.username_DB);
    db.setPassword(datos.password_DB);
    db.setPort(datos.local_listenport);

    if (!db.open()){
       return false;
    }
    return true;
}
char* convierte(QString dato){
    char* cstr;
    std::string fname = dato.toStdString();
    cstr = new char [fname.size()+1];
    strcpy( cstr, fname.c_str() );
    return cstr;
}


bool creaConexion()
{
    Tunel *tunel = new Tunel;
    QThread *hilo= new QThread;
    tunel->keyfile1=convierte(datos.keyfile1);
    tunel->keyfile2=convierte(datos.keyfile2);
    tunel->username_ssh=convierte(datos.username_ssh);
    tunel->remote_destport=datos.remote_destport;
    tunel->local_listenport=datos.local_listenport;
    tunel->local_listenip="127.0.0.1";
    tunel->remote_port=datos.remote_port;
    tunel->remote_desthost=convierte(datos.remote_desthost);
    tunel->password_ssh=convierte(datos.password_ssh);
    tunel->server_ip=convierte(datos.server_ip);
    tunel->remote_destport=3306;//mysql remoto
    tunel->moveToThread(hilo);
    QObject::connect(hilo,&QThread::started, tunel, &Tunel::crea_conexion);
    QObject::connect(tunel,&Tunel::destroyed, hilo, &QThread::quit);
    QObject::connect(tunel,&Tunel::sshConectado, hilo, basedatos);
    QObject::connect(tunel,&Tunel::sshDesconectado,tunel,&Tunel::cierra_conexion);
    hilo->start();
    return true;
};

bool cargaVariables(){
    db = QSqlDatabase::addDatabase("QMYSQL");
    Configuracion *configuracion = new Configuracion;
    datos.keyfile1=configuracion->cual_es_keyfile_publica();
    datos.keyfile2=configuracion->cual_es_keyfile_privada();
    datos.username_ssh=configuracion->cual_es_usuarioSSH();
    datos.password_ssh=configuracion->cual_es_password_ssh();
    datos.username_DB=configuracion->cual_es_usernameDB();
    datos.password_DB=configuracion->cual_es_passwordDB();
    datos.hostname_DB=configuracion->cual_es_hostnameDB();
    datos.local_listenip="127.0.0.1";
    datos.server_ip=configuracion->cual_es_servidorSSH().toLatin1().data();
    datos.remote_port=configuracion->cual_es_puerto_remoto_ssh();
    datos.remote_desthost="127.0.0.1";
    datos.databasename=configuracion->cual_es_DataBaseName();

    if (configuracion->es_usarSSH()){ //Tenemos seleccionado usar tunel ssh
        datos.local_listenport=puerto_libre();
        datos.usar_ssh=true;
        db.setPort(datos.local_listenport);
        creaConexion();
    }
    else{
        datos.local_listenport=configuracion->cual_es_PuertoDB().toInt();
        datos.usar_ssh=false;
        db.setDatabaseName(datos.databasename);
        db.setHostName("127.0.0.1");
        db.setUserName(datos.username_DB);
        db.setPassword(datos.password_DB);
        db.setPort(datos.local_listenport);
        if (!db.open()){
            QMessageBox::warning(0,"Sql Error", "¡ATENCION!\nNo ha sido posible conectarnos a la base de datos\nCompruebe los datos de conexión en el apartado 'Configuración'\n"
                                               "No podrá usar el apartado 'Soporte'' ni 'Sedes'",QMessageBox::Ok);
            return false;
        }
     }
    delete configuracion;
return true;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cargaVariables();
    Botonera w;
    w.setFixedSize(1000,115);
    w.show();
    return a.exec();
}
