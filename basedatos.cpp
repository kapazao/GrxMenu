#include "basedatos.h"
#include "ui_basedatos.h"

BaseDatos::BaseDatos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BaseDatos)
{
    ui->setupUi(this);
    inicia();
    cabeceras();
}

BaseDatos::~BaseDatos()
{
    delete ui;
}

void BaseDatos::cabeceras()
{
    model_municipio->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model_municipio->setHeaderData(1, Qt::Horizontal, QObject::tr("idComarca"));
    model_municipio->setHeaderData(2, Qt::Horizontal, QObject::tr("idMancomunidad"));
    model_municipio->setHeaderData(3, Qt::Horizontal, QObject::tr("nombre"));
    model_municipio->setHeaderData(4, Qt::Horizontal, QObject::tr("nombreId"));
    model_municipio->setHeaderData(5, Qt::Horizontal, QObject::tr("CIF"));
    model_municipio->setHeaderData(6, Qt::Horizontal, QObject::tr("codigoDIR3"));
    model_municipio->setHeaderData(7, Qt::Horizontal, QObject::tr("codigoINE"));
    model_municipio->setHeaderData(8, Qt::Horizontal, QObject::tr("numeroHabitantes"));
    model_municipio->setHeaderData(9, Qt::Horizontal, QObject::tr("superficie"));
    model_municipio->setHeaderData(10, Qt::Horizontal, QObject::tr("altitud"));
    model_municipio->setHeaderData(11, Qt::Horizontal, QObject::tr("latitud"));
    model_municipio->setHeaderData(12, Qt::Horizontal, QObject::tr("longitud"));
    model_municipio->setHeaderData(13, Qt::Horizontal, QObject::tr("urlBandera"));
    model_municipio->setHeaderData(14, Qt::Horizontal, QObject::tr("urlEscudo"));
    model_municipio->setHeaderData(15, Qt::Horizontal, QObject::tr("web"));
    model_municipio->setHeaderData(16, Qt::Horizontal, QObject::tr("siglasPartidoPolitico"));
    model_municipio->setHeaderData(17, Qt::Horizontal, QObject::tr("nombrePartidoPolitico"));
    model_municipio->setHeaderData(18, Qt::Horizontal, QObject::tr("nombreAlcalde"));
    model_municipio->setHeaderData(19, Qt::Horizontal, QObject::tr("fechaElecciones"));
    model_municipio->setHeaderData(20, Qt::Horizontal, QObject::tr("urlTablon"));
    model_municipio->setHeaderData(21, Qt::Horizontal, QObject::tr("urlPortalTransparencia"));

    model_poblacion->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model_poblacion->setHeaderData(1, Qt::Horizontal, QObject::tr("idMunicipio"));
    model_poblacion->setHeaderData(2, Qt::Horizontal, QObject::tr("idEla"));
    model_poblacion->setHeaderData(3, Qt::Horizontal, QObject::tr("nombre"));
    model_poblacion->setHeaderData(4, Qt::Horizontal, QObject::tr("nombreId"));

    model_nodo->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model_nodo->setHeaderData(1, Qt::Horizontal, QObject::tr("idPoblacion"));
    model_nodo->setHeaderData(2, Qt::Horizontal, QObject::tr("idCentro"));
    model_nodo->setHeaderData(3, Qt::Horizontal, QObject::tr("nombre"));
    model_nodo->setHeaderData(4, Qt::Horizontal, QObject::tr("tipoVia"));
    model_nodo->setHeaderData(5, Qt::Horizontal, QObject::tr("nombreVia"));
    model_nodo->setHeaderData(6, Qt::Horizontal, QObject::tr("numeroDireccion"));
    model_nodo->setHeaderData(7, Qt::Horizontal, QObject::tr("letraDireccion"));
    model_nodo->setHeaderData(8, Qt::Horizontal, QObject::tr("escaleraDireccion"));
    model_nodo->setHeaderData(9, Qt::Horizontal, QObject::tr("pisoDireccion"));
    model_nodo->setHeaderData(10, Qt::Horizontal, QObject::tr("puertaDireccion"));
    model_nodo->setHeaderData(11, Qt::Horizontal, QObject::tr("codigoPostal"));
    model_nodo->setHeaderData(12, Qt::Horizontal, QObject::tr("latitud"));
    model_nodo->setHeaderData(13, Qt::Horizontal, QObject::tr("longitud"));
    model_nodo->setHeaderData(14, Qt::Horizontal, QObject::tr("contacto"));
    model_nodo->setHeaderData(15, Qt::Horizontal, QObject::tr("extension"));
    model_nodo->setHeaderData(16, Qt::Horizontal, QObject::tr("fax"));
    model_nodo->setHeaderData(17, Qt::Horizontal, QObject::tr("web"));
    model_nodo->setHeaderData(18, Qt::Horizontal, QObject::tr("sede"));
    model_nodo->setHeaderData(19, Qt::Horizontal, QObject::tr("adslLinea"));
    model_nodo->setHeaderData(20, Qt::Horizontal, QObject::tr("numAdministrativo"));
    model_nodo->setHeaderData(21, Qt::Horizontal, QObject::tr("ipLinea"));
    model_nodo->setHeaderData(22, Qt::Horizontal, QObject::tr("ipCifrado"));
    model_nodo->setHeaderData(23, Qt::Horizontal, QObject::tr("servicioLinea"));
    model_nodo->setHeaderData(24, Qt::Horizontal, QObject::tr("caudalLinea"));
    model_nodo->setHeaderData(25, Qt::Horizontal, QObject::tr("equipamientoLinea"));

    model_programa->setHeaderData(0, Qt::Horizontal, QObject::tr("idNodo"));
    model_programa->setHeaderData(1, Qt::Horizontal, QObject::tr("anio"));
    model_programa->setHeaderData(2, Qt::Horizontal, QObject::tr("portalWeb"));
    model_programa->setHeaderData(3, Qt::Horizontal, QObject::tr("email"));
    model_programa->setHeaderData(4, Qt::Horizontal, QObject::tr("baseDatosJuridica"));
    model_programa->setHeaderData(5, Qt::Horizontal, QObject::tr("suscripcionDominio"));
    model_programa->setHeaderData(6, Qt::Horizontal, QObject::tr("perfilContratante"));
    model_programa->setHeaderData(7, Qt::Horizontal, QObject::tr("gestionMunicipal"));
    model_programa->setHeaderData(8, Qt::Horizontal, QObject::tr("gestionEconomica"));
    model_programa->setHeaderData(9, Qt::Horizontal, QObject::tr("soporte"));
    model_programa->setHeaderData(10, Qt::Horizontal, QObject::tr("sedeElectronica"));
    model_programa->setHeaderData(11, Qt::Horizontal, QObject::tr("epol"));
    model_programa->setHeaderData(12, Qt::Horizontal, QObject::tr("epolMovil"));
    model_programa->setHeaderData(13, Qt::Horizontal, QObject::tr("siapol"));

    model_emailnodo->setHeaderData(0, Qt::Horizontal, QObject::tr("idNodo"));
    model_emailnodo->setHeaderData(1, Qt::Horizontal, QObject::tr("email"));

    model_telefononodo->setHeaderData(0, Qt::Horizontal, QObject::tr("idNodo"));
    model_telefononodo->setHeaderData(1, Qt::Horizontal, QObject::tr("telefono"));

    model_comarca->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model_comarca->setHeaderData(1, Qt::Horizontal, QObject::tr("nombre"));

    model_mancomunidad->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model_mancomunidad->setHeaderData(1, Qt::Horizontal, QObject::tr("nombre"));

    model_centro->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model_centro->setHeaderData(1, Qt::Horizontal, QObject::tr("nombre"));
    model_centro->setHeaderData(2, Qt::Horizontal, QObject::tr("direccion"));
    model_centro->setHeaderData(3, Qt::Horizontal, QObject::tr("telefono"));

    model_diafestivopoblacion->setHeaderData(0, Qt::Horizontal, QObject::tr("idPoblacion"));
    model_diafestivopoblacion->setHeaderData(1, Qt::Horizontal, QObject::tr("diaFestivo"));
    model_diafestivopoblacion->setHeaderData(2, Qt::Horizontal, QObject::tr("descripcion"));

    model_aplicaciones->setHeaderData(0, Qt::Horizontal, QObject::tr("idNodo"));
    model_aplicaciones->setHeaderData(1, Qt::Horizontal, QObject::tr("atalaya"));
    model_aplicaciones->setHeaderData(2, Qt::Horizontal, QObject::tr("glpi"));
    model_aplicaciones->setHeaderData(3, Qt::Horizontal, QObject::tr("osc"));


}


void BaseDatos::inicia(){

    QSqlDatabase db = QSqlDatabase::database();

    QSqlQuery* query_municipio = new QSqlQuery(db);
    QSqlQuery* query_poblacion = new QSqlQuery(db);
    QSqlQuery* query_nodo = new QSqlQuery(db);
    QSqlQuery* query_programa = new QSqlQuery(db);
    QSqlQuery* query_emailnodo = new QSqlQuery(db);
    QSqlQuery* query_telefononodo = new QSqlQuery(db);
    QSqlQuery* query_centro = new QSqlQuery(db);
    QSqlQuery* query_comarca = new QSqlQuery(db);
    QSqlQuery* query_mancomunidad = new QSqlQuery(db);
    QSqlQuery* query_diafestivopoblacion = new QSqlQuery(db);
    QSqlQuery* query_aplicaciones = new QSqlQuery(db);

    QString sql_municipio;
    sql_municipio = "select * from municipio";
    query_municipio->prepare(sql_municipio);

    if(!query_municipio->exec())
       QMessageBox::critical(this, "Sql Error", "Error en la consulta: \n"+query_municipio->lastError().text(),QMessageBox::Ok);
    else{
        model_municipio->setQuery(*query_municipio);
        ui->tableView_municipio->setModel(model_municipio);
    }


    QString sql_poblacion;
    sql_poblacion = "select * from poblacion";
    query_poblacion->prepare(sql_poblacion);

    if(!query_poblacion->exec())
       QMessageBox::critical(this, "Sql Error", "Error en la consulta: \n"+query_poblacion->lastError().text(),QMessageBox::Ok);
    else{
        model_poblacion->setQuery(*query_poblacion);
        ui->tableView_poblacion->setModel(model_poblacion);
    }

    QString sql_nodo;
    sql_nodo = "select * from nodo";
    query_nodo->prepare(sql_nodo);

    if(!query_nodo->exec())
       QMessageBox::critical(this, "Sql Error", "Error en la consulta: \n"+query_nodo->lastError().text(),QMessageBox::Ok);
    else{
        model_nodo->setQuery(*query_nodo);
        ui->tableView_nodo->setModel(model_nodo);
        ui->tableView_nodo->setSelectionMode(QAbstractItemView::SingleSelection);
        ui->tableView_nodo->setEditTriggers(QAbstractItemView::DoubleClicked);
    }

    QString sql_programa;
    sql_programa = "select * from programa";
    query_programa->prepare(sql_programa);

    if(!query_programa->exec())
       QMessageBox::critical(this, "Sql Error", "Error en la consulta: \n"+query_programa->lastError().text(),QMessageBox::Ok);
    else{
        model_programa->setQuery(*query_programa);
        ui->tableView_programa->setModel(model_programa);
    }

    QString sql_emailnodo;
    sql_emailnodo = "select * from emailnodo";
    query_emailnodo->prepare(sql_emailnodo);

    if(!query_emailnodo->exec())
       QMessageBox::critical(this, "Sql Error", "Error en la consulta: \n"+query_emailnodo->lastError().text(),QMessageBox::Ok);
    else{
        model_emailnodo->setQuery(*query_emailnodo);
        ui->tableView_emailnodo->setModel(model_emailnodo);
    }

    QString sql_telefononodo;
    sql_telefononodo = "select * from telefononodo";
    query_telefononodo->prepare(sql_telefononodo);

    if(!query_telefononodo->exec())
       QMessageBox::critical(this, "Sql Error", "Error en la consulta: \n"+query_telefononodo->lastError().text(),QMessageBox::Ok);
    else{
        model_telefononodo->setQuery(*query_telefononodo);
        ui->tableView_telefononodo->setModel(model_telefononodo);
    }

    QString sql_centro;
    sql_centro = "select * from centro";
    query_centro->prepare(sql_centro);

    if(!query_centro->exec())
       QMessageBox::critical(this, "Sql Error", "Error en la consulta: \n"+query_centro->lastError().text(),QMessageBox::Ok);
    else{
        model_centro->setQuery(*query_centro);
        ui->tableView_centro->setModel(model_centro);
    }

    QString sql_mancomunidad;
    sql_mancomunidad = "select * from mancomunidad";
    query_mancomunidad->prepare(sql_mancomunidad);

    if(!query_mancomunidad->exec())
       QMessageBox::critical(this, "Sql Error", "Error en la consulta: \n"+query_mancomunidad->lastError().text(),QMessageBox::Ok);
    else{
        model_mancomunidad->setQuery(*query_mancomunidad);
        ui->tableView_mancomunidad->setModel(model_mancomunidad);
    }

    QString sql_comarca;
    sql_comarca = "select * from comarca";
    query_comarca->prepare(sql_comarca);

    if(!query_comarca->exec())
       QMessageBox::critical(this, "Sql Error", "Error en la consulta: \n"+query_comarca->lastError().text(),QMessageBox::Ok);
    else{
        model_comarca->setQuery(*query_comarca);
        ui->tableView_comarca->setModel(model_comarca);
    }

    QString sql_aplicaciones;
    sql_aplicaciones = "select * from aplicaciones";
    query_aplicaciones->prepare(sql_aplicaciones);

    if(!query_aplicaciones->exec())
       QMessageBox::critical(this, "Sql Error", "Error en la consulta: \n"+query_aplicaciones->lastError().text(),QMessageBox::Ok);
    else{
        model_aplicaciones->setQuery(*query_aplicaciones);
        ui->tableView_aplicaciones->setModel(model_aplicaciones);
    }

}
