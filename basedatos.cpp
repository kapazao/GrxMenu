#include "basedatos.h"
#include "ui_basedatos.h"
#include <QStandardItemModel>
#include <QTreeView>
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
    QSqlQuery* query_consulta = new QSqlQuery(db);

    model_municipio->setTable("municipio");
    model_municipio->select();
    ui->tableView_municipio->setModel(model_municipio);

    model_nodo->setTable("nodo");
    model_nodo->select();
    ui->tableView_nodo->setModel(model_nodo);


    model_poblacion->setTable("poblacion");
    model_poblacion->select();
    ui->tableView_poblacion->setModel(model_poblacion);

    model_centro->setTable("centro");
    model_centro->select();
    ui->tableView_centro->setModel(model_centro);

    model_aplicaciones->setTable("aplicaciones");
    model_aplicaciones->select();
    ui->tableView_aplicaciones->setModel(model_aplicaciones);

    model_programa->setTable("programa");
    model_programa->select();
    ui->tableView_programa->setModel(model_programa);

    model_emailnodo->setTable("emailnodo");
    model_emailnodo->select();
    ui->tableView_emailnodo->setModel(model_emailnodo);

    model_telefononodo->setTable("telefononodo");
    model_telefononodo->select();
    ui->tableView_telefononodo->setModel(model_telefononodo);

    model_comarca->setTable("comarca");
    model_comarca->select();
    ui->tableView_comarca->setModel(model_comarca);

    model_mancomunidad->setTable("mancomunidad");
    model_mancomunidad->select();
    ui->tableView_mancomunidad->setModel(model_mancomunidad);

    sql[0]="";

    sql[1]="SELECT n.nombre as Nodo, n.extension as Extensión,GROUP_CONCAT(DISTINCT tn.telefono ORDER BY tn.telefono SEPARATOR ' | ') as Teléfono,"
                         " GROUP_CONCAT(DISTINCT en.email ORDER BY en.email SEPARATOR ' | ') as Email, n.ipLinea as IP FROM asismun.nodo n "
                         "INNER JOIN asismun.poblacion p ON n.idPoblacion = p.id LEFT JOIN asismun.telefononodo tn ON n.id = tn.idNodo"
                         " LEFT JOIN asismun.emailnodo en ON n.id = en.idNodo WHERE n.esAyuntamiento = 1 GROUP BY n.id ORDER BY n.nombre;";

    sql[2]="SELECT n.id as idNodo, case when ela.id is null then n.nombre else CONCAT(n.nombre, ' (ELA)') end as Nodo, case when ela.id is null "
          " then m.nombre else ela.nombre end as Municipio, p.nombre as Población, GROUP_CONCAT(DISTINCT tn.telefono ORDER BY tn.telefono SEPARATOR ' | ') as Teléfono,"
          " n.fax as Fax, GROUP_CONCAT(DISTINCT en.email ORDER BY en.email SEPARATOR ' | ') as Email, n.web as Web, n.tipoVia as TipoVia, n.nombreVia as NombreVia, "
          " n.numeroDireccion as NumeroVia, n.codigoPostal as CódigoPostal, case when (ela.id is null and m.urlEscudo is not null) or (ela.id is not null and ela.urlEscudo is not null) "
          " then 'SI' else null end as escudo FROM asismun.nodo n INNER JOIN asismun.poblacion p ON n.idPoblacion = p.id INNER JOIN asismun.municipio m ON p.idMunicipio = m.id "
          " LEFT JOIN asismun.municipio ela ON p.idEla = ela.id LEFT JOIN asismun.telefononodo tn ON n.id = tn.idNodo LEFT JOIN asismun.emailnodo en ON n.id = en.idNodo "
          " WHERE n.ipLinea LIKE '%10.100%' GROUP BY n.id ORDER BY n.nombre;";
    sql[3]="SELECT n.nombre, pro.anio,"
           "pro.portalWeb as 165_A,"
           "pro.email as B,"
           "pro.baseDatosJuridica as C,"
           "pro.suscripcionDominio as D,"
           "pro.perfilContratante as E,"
           "pro.gestionMunicipal as 166_A,"
           "pro.gestionEconomica as B,"
           "pro.soporte as C,"
           "pro.sedeElectronica as 167_A,"
           "pro.epol as 168_A,"
           "pro.epolMovil as B,"
           "pro.siapol as C "
           "FROM asismun.programa pro INNER JOIN nodo n ON pro.idNodo = n.id "
           "ORDER BY n.nombre ASC, pro.anio ASC;";
    sql[4]="SELECT n.id as idNodo,"
           "n.nombre as Nodo,"
            "p.nombre as Población,"
            "GROUP_CONCAT(DISTINCT tn.telefono ORDER BY tn.telefono SEPARATOR ' | ') as Teléfono,"
            "n.fax as Fax,"
            "GROUP_CONCAT(DISTINCT en.email ORDER BY en.email SEPARATOR ' | ') as Email,"
            "n.web as Web,"
            "n.tipoVia as TipoVia,"
            "n.nombreVia as NombreVia,"
            "n.numeroDireccion as NumeroVia,"
            "n.codigoPostal as CódigoPostal "
            "FROM asismun.nodo n "
            "INNER JOIN asismun.poblacion p ON n.idPoblacion = p.id "
            "LEFT JOIN asismun.telefononodo tn ON n.id = tn.idNodo "
            "LEFT JOIN asismun.emailnodo en ON n.id = en.idNodo "
            "WHERE n.tipoVia is null or tn.idNodo is null "
            "GROUP BY n.id "
            "ORDER BY n.nombre;";

    sql[5]="SELECT c.nombre as Centro,"
            "GROUP_CONCAT(DISTINCT n.nombre ORDER BY n.nombre SEPARATOR ' | ') as Nodo "
            "FROM asismun.centro c "
            "LEFT JOIN nodo n ON c.id = n.idCentro "
            "GROUP BY c.id "
            "ORDER BY c.nombre;";
    sql[6]="SELECT n.nombre as Nodo, p.* FROM asismun.programa p INNER JOIN nodo n ON p.idNodo = n.id ORDER BY n.nombre;";

    sql[7]="SELECT m.nombre as Municipio,"
            "GROUP_CONCAT(DISTINCT p.nombre ORDER BY p.nombre SEPARATOR ' | ') as Población "
            "FROM municipio m "
            "INNER JOIN poblacion p ON m.id = p.idMunicipio "
            "GROUP BY m.id "
            "ORDER BY m.nombre;";
    sql[8]="SELECT p.nombre as Población,GROUP_CONCAT(DISTINCT n.nombre ORDER BY n.nombre SEPARATOR ' | ') as Nodo FROM asismun.poblacion p INNER JOIN nodo n ON p.id = n.idPoblacion GROUP BY p.id ORDER BY p.nombre;";
    sql[9]="SELECT n.equipamientoLinea as Router, "
            "count(*) as Total,"
            "GROUP_CONCAT(DISTINCT n.caudalLinea ORDER BY n.caudalLinea SEPARATOR ' | ') as Caudales "
            "FROM nodo n "
            "GROUP BY n.equipamientoLinea "
            "ORDER BY n.equipamientoLinea;";
}


void BaseDatos::on_pB_sql_clicked()
{
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery* query_consulta = new QSqlQuery(db);
    QString sql_consulta;
    sql_consulta = ui->comboBox_consulta->currentText();
    query_consulta->prepare(sql_consulta);

    if(!query_consulta->exec())
       QMessageBox::critical(this, "Sql Error", "Error en la consulta: \n"+query_consulta->lastError().text(),QMessageBox::Ok);
    else{
        model_consulta->setQuery(*query_consulta);
        ui->tableView_consulta->setModel(model_consulta);
    }
}

void BaseDatos::on_comboBox_consulta_activated(const QString &arg1)
{
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery* query_consulta = new QSqlQuery(db);
    QString sql_consulta;
    int indice=ui->comboBox_consulta->currentIndex();

    if ((indice>0)&&(indice<10)){
        sql_consulta = sql[indice];
    }
    else {
        sql_consulta = arg1;
    }
    if (!sql_consulta.isNull()){
        query_consulta->prepare(sql_consulta);
        if(!query_consulta->exec())
            QMessageBox::critical(this, "Sql Error", "Error en la consulta: \n"+query_consulta->lastError().text(),QMessageBox::Ok);
        else{
            model_consulta->setQuery(*query_consulta);
            ui->tableView_consulta->setModel(model_consulta);
        }
     }
}


