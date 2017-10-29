#include "soporte.h"
#include "ui_soporte.h"
#include "qdebug.h"
#include "equipos.h"

Soporte::Soporte(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Soporte)
{
    ui->setupUi(this);
    //Vamos a poner en el constructor la máscara para validar la ip introducida

    QString ipRange = "(?:[0-1]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5][-]25[0-5])";
    QRegExp ipRegex ("^" + ipRange
                     + "\\." + ipRange
                     + "\\." + ipRange
                     + "\\." + ipRange + "$");
    QRegExpValidator *ipValidator = new QRegExpValidator(ipRegex, this);
    ui->lineEdit_ip->setValidator(ipValidator);

//Cargamos las sedes en el combobox
    QSqlQueryModel *model = new QSqlQueryModel();
    QString sql;
    sql = "select NOMBRE,ipLinea from nodo";
    QSqlQuery* query = new QSqlQuery(db);
    query->prepare(sql);
    if(!query->exec()){
        qDebug() <<"Error en la consulta: "<< query->lastError();
    }else{
        qDebug() <<"Consulta realizada con exito: "<<query->lastQuery();
    }
    model->setQuery(*query);
    ui->cb_sede->setModel(model);
    on_cb_sede_activated(ui->cb_sede->itemText(0));
}

Soporte::~Soporte()
{
    delete ui;
}

void Soporte::on_lineEdit_ip_textChanged(const QString &arg1)
{



}

void Soporte::on_cb_sede_activated(const QString &nombre)
{
    QSqlQuery consultar;
    QSqlQuery consultar_telefono;
    QSqlQuery consultar_email;
    QSqlQuery consultar_poblacion;
    QSqlQuery consultar_municipio;
    QSqlQuery consultar_centro;

    QString idNodo;
    QString idMunicipio;
    QString idCentro;

    //QString resultado;
    consultar.prepare(QString("select * from nodo where nombre = :nombre"));
    consultar.bindValue(":nombre", nombre);
    if (consultar.exec() and consultar.first()){
            idNodo = consultar.value(1).toString();
            ui->lineEdit_ip->setText(consultar.value(21).toString());
            ui->lineEdit_adsl->setText(consultar.value(19).toString());
            ui->lineEdit_n_adm->setText(consultar.value(20).toString());
            ui->lineEdit_direccion->setText(consultar.value(5).toString());
            ui->lineEdit_numero->setText(consultar.value(6).toString());

            ui->lineEdit_servicio->setText(consultar.value(23).toString());
            ui->lineEdit_caudal->setText(consultar.value(24).toString());
            ui->lineEdit_extension->setText(consultar.value(15).toString());
            consultar_telefono.prepare(QString("select * from telefononodo where idNodo =:idNodo"));
            consultar_telefono.bindValue(":idNodo",idNodo);
            if (consultar_telefono.exec() and consultar_telefono.first()){
                ui->lineEdit_telefono->setText(consultar_telefono.value(1).toString());
            }
            consultar_poblacion.prepare(QString("select * from poblacion where id =:idPoblacion"));
            consultar_poblacion.bindValue(":idPoblacion", consultar.value(1).toString());
            if (consultar_poblacion.exec() and consultar_poblacion.first()){
                idMunicipio = consultar_poblacion.value(1).toString();
                //ui->lineEdit_mapa->setText(consultar_poblacion.value(3).toString());

                consultar_municipio.prepare(QString("select * from municipio where id = :idMunicipio"));
                consultar_municipio.bindValue(":idMunicipio",idMunicipio);
                if (consultar_municipio.exec() and consultar_municipio.first()){

                }
            }
            consultar_centro.prepare(QString("select * from centro where id =:idCentro"));
            consultar_centro.bindValue(":idCentro", consultar.value(2).toString());
            if (consultar_centro.exec() and consultar_centro.first()){
                idCentro = consultar_centro.value(1).toString();
                ui->lineEdit_centro->setText(consultar_centro.value(1).toString());
                ui->lineEdit_telefono_centro->setText(consultar_centro.value(3).toString());
            }

                //ui->lineEdit_mapa->setText(consultar_poblacion.value(3).toString());

           // consultar_email.prepare(QString("select * from emailnodo where idNodo = :idNodo"));
           // consultar_email.bindValue(":idNodo",idNodo);
           // if (consultar_email.exec() and consultar_email.first()){
           //     ui->lineEdit_extension->setText(consultar_email.value(7).toString());
           // }
           // consultar_email.prepare(QString("select * from emailnodo where idNodo = :idNodo"));
           // consultar_email.bindValue(":idNodo",idNodo);
           // if (consultar_email.exec() and consultar_email.first()){
           //     ui->lineEdit_servicio->setText(consultar_email.value(2).toString());
           // }

    } else
          qDebug()<<"Error No se ha podido realizar la consulta "<< consultar.lastError();
}

void Soporte::on_Btn_Buscar_clicked()
{

    NMap* nmap = new NMap();
    QString s;
    QList<QString> puertos;

    ui->TextoSalida->appendPlainText("Escaneando: "+ui->lineEdit_ip->text());
    nmap->nmap_run_scan("-vvv -p22,80,8080,9100,443,139",ui->lineEdit_ip->text());
    puertos= nmap->nmap_ports_open(ui->lineEdit_ip->text());
    if (!puertos.isEmpty()){
      foreach( s, puertos )
        ui->TextoSalida->appendPlainText("Puerto abierto: "+s);
    } else{
        ui->TextoSalida->appendPlainText("No se han encontrado puertos abiertos.");
    }
    delete nmap;
}

void Soporte::on_pushButton_clicked()
{
    QProcess* process = new QProcess;
    ui->TextoSalida->appendPlainText("Haciendo ping a "+ui->lineEdit_ip->text());
    ui->TextoSalida->appendPlainText("Espere un momento... ");
    process->startDetached("ping -c4 "+ui->lineEdit_ip->text());
    ui->TextoSalida->appendPlainText(process->readAllStandardOutput());
    delete process;
}

void Soporte::on_pushButton_4_clicked()
{
    Equipos *equipos = new Equipos("10.100.251.30");
    equipos->show();
}
