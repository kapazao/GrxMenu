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

int creatunelDB(QString puerto_remoto,QString usuario,QString servidor){
    QProcess process;
    int puerto_local;
    puerto_local=puerto_libre();
    qDebug()<<puerto_local;
    qDebug()<<puerto_local;
    qDebug()<<puerto_remoto;

    process.startDetached("ssh -N -tt -p"+puerto_remoto+" -L "+QString::number(puerto_local)+":localhost:3306 "+usuario+"@"+servidor+ " -A -C -X -2 -4 -f");

    return puerto_local;
}

bool createConnection()
{
    QProcess sleep;
    Configuracion *configuracion = new Configuracion;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    int puerto_local,contador;

    if (configuracion->es_usarSSH()){ //creamos tunel ssh
        puerto_local=creatunelDB(configuracion->cual_es_puerto_remoto_ssh(), configuracion->cual_es_usuarioSSH(), configuracion->cual_es_servidorSSH());
        db.setPort(puerto_local);
        qDebug()<<puerto_local;
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
           sleep.start("sleep 1");
           sleep.waitForFinished();
           DB = db.open();
           contador++;
           qDebug()<<contador;
           qDebug()<<"DB"<< !DB;
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
/*
        */
