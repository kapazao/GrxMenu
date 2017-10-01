#include "botonera.h"
#include <QApplication>
#include "configuracion.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSqlQueryModel>

bool createConnection()
{
    Configuracion *configuracion = new Configuracion;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
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


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    createConnection();
    Botonera w;
    w.setFixedSize(1000,115);
    w.show();
    return a.exec();
}
