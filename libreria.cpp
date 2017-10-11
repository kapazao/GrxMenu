#include <QTcpServer>
#include "configuracion.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSqlQueryModel>
#include <QProcess>

int puerto_libre(){
    QTcpServer server;
    if(server.listen(QHostAddress::Any, 0))
           return server.serverPort();

 return 0;
}

bool createConnection()
{

    QProcess process;
    QProcess sleep;

    Configuracion *configuracion = new Configuracion;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    int puertoLocal;
    puertoLocal=puerto_libre();
    qDebug()<<puertoLocal;

    if (configuracion->es_usarSSH()){ //creamos tunel ssh
     process.startDetached("ssh -N -tt -p"+configuracion->cual_es_puerto_remoto_ssh()+" -L "+QString::number(puertoLocal)+":localhost:3306 "+configuracion->cual_es_usuarioSSH()+"@"+configuracion->cual_es_servidorSSH()+ "  -A -C -X -2 -4 -f");
     sleep.start("sleep 2");
     sleep.waitForFinished();
     db.setPort(puertoLocal);

     qDebug()<<"con tunel";
    }else{
        db.setPort(configuracion->cual_es_PuertoDB().toInt());
        qDebug()<<"sin tunel";
    }

    db.setDatabaseName(configuracion->cual_es_DataBaseName());
    db.setHostName(configuracion->cual_es_HostName());
    db.setUserName(configuracion->cual_es_UserName());
    db.setPassword(configuracion->cual_es_PaswordDB());

    delete configuracion;
    bool ok = db.open();
    if ( !ok ) {
       qDebug() << ("No puedo abrir la base de datos\n");
       return false;
    }

   return true;
}
