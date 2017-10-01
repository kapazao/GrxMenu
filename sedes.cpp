#include "sedes.h"
#include "ui_sedes.h"
#include <QSqlQuery>
#include <QHostAddress>
#include <QAbstractItemModel>
Sedes::Sedes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sedes)
{
    ui->setupUi(this);


   // mascaraIP();//Ponemos una mascara para validar la ip introducida
    cargaCombo();//Cargamos las sedes en los combobox
    checkBox_tresEstados();//Ponemos los checkbox con tres estados
}

Sedes::~Sedes()
{
    delete ui;
}

void Sedes::checkBox_tresEstados(){

    ui->checkBox_basedatos_juridica->setTristate(true);
    ui->checkBox_correo->setTristate(true);
    ui->checkBox_epol->setTristate(true);
    ui->checkBox_epol_movil->setTristate(true);
    ui->checkBox_gestion_economica->setTristate(true);
    ui->checkBox_perfil_contratante ->setTristate(true);
    ui->checkBox_gestion_municipal->setTristate(true);
    ui->checkBox_portal_web->setTristate(true);
    ui->checkBox_sede_electronica->setTristate(true);
    ui->checkBox_siapol->setTristate(true);
    ui->checkBox_soporte->setTristate(true);
    ui->checkBox_suscripcion->setTristate(true);
}

void Sedes::clean_checkbox(){
    ui->checkBox_portal_web->setCheckState((Qt::CheckState)0);
    ui->checkBox_correo->setCheckState((Qt::CheckState)0);
    ui->checkBox_basedatos_juridica->setCheckState((Qt::CheckState)0);
    ui->checkBox_gestion_municipal->setCheckState((Qt::CheckState)0);
    ui->checkBox_suscripcion->setCheckState((Qt::CheckState)0);
    ui->checkBox_perfil_contratante->setCheckState((Qt::CheckState)0);
    ui->checkBox_gestion_economica->setCheckState((Qt::CheckState)0);
    ui->checkBox_soporte->setCheckState((Qt::CheckState)0);
    ui->checkBox_sede_electronica->setCheckState((Qt::CheckState)0);
    ui->checkBox_epol->setCheckState((Qt::CheckState)0);
    ui->checkBox_epol_movil->setCheckState((Qt::CheckState)0);
    ui->checkBox_siapol->setCheckState((Qt::CheckState)0);
}

void Sedes::mascaraIP(){
    //Máscara para validar la ip introducida

    QString ipRange = "(?:[0-1]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5][-]25[0-5])";
    QRegExp ipRegex ("^" + ipRange
                     + "\\." + ipRange
                     + "\\." + ipRange
                     + "\\." + ipRange + "$");
    QRegExpValidator *ipValidator = new QRegExpValidator(ipRegex, this);
    ui->comboBox_IP->setValidator(ipValidator);

}

void Sedes::cargaCombo(){

    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery* query = new QSqlQuery(db);
    QSqlQuery* query_tlf = new QSqlQuery(db);
    QString sql;
    QString sql_tlf;
    sql = "select NOMBRE,ipLinea,codigoPostal,extension,id from nodo";
    sql_tlf = "select * from telefononodo";
    query->prepare(sql);
    query_tlf->prepare(sql_tlf);

    if(!query->exec())
        qDebug () << "Error en la consulta: " << query->lastError();
    else{
        qDebug () << "Consulta realizada con exito: " << query->lastQuery();

        model->setQuery(*query);
        ui->comboBox_IP->setModel(model);
        ui->comboBox_IP->setModelColumn(1);
        ui->comboBox_CP->setModel(model);
        ui->comboBox_CP->setModelColumn(2);
        ui->comboBox_extension->setModel(model);
        ui->comboBox_extension->setModelColumn(3);
        ui->comboBox_NODO->setModel(model);
        on_comboBox_NODO_activated(ui->comboBox_NODO->itemText(0));
        ui->comboBox_NODO->setFocus();
    }

    if(!query_tlf->exec())
        qDebug () << "Error en la consulta: " << query_tlf->lastError();
    else{
        qDebug () << "Consulta realizada con exito: " << query_tlf->lastQuery();
        model_tlf->setQuery(*query_tlf);
        ui->comboBox_TLF->setModel(model_tlf);
        ui->comboBox_TLF->setModelColumn(1);
    }
    delete query;
    delete query_tlf;

}

void Sedes::consultaNodo(const QString &nombre){

    QSqlQuery consultar;
    QSqlQuery consultar_telefono;
    QSqlQuery consultar_email;
    QSqlQuery consultar_poblacion;
    QSqlQuery consultar_municipio;
    QSqlQuery consultar_comarca;
    QSqlQuery consultar_mancomunidad;
    QSqlQuery consultar_programa;
    QString idNodo;
    QString idAnio;
    QString idMunicipio;

    consultar.prepare(QString("select * from nodo where nombre = :nombre"));
    consultar.bindValue(":nombre", nombre);

    if (consultar.exec() and consultar.first()){
            clean_checkbox();
            ui->comboBox_IP->clear();
            ui->comboBox_CP->clear();
            ui->comboBox_extension->clear();
            idNodo = consultar.value(1).toString();
            idAnio = ui->comboBox_anio->currentText();

            ui->lineEdit_adsl->setText(consultar.value(19).toString());
            ui->lineEdit_via->setText(consultar.value(4).toString());
            ui->lineEdit_direccion->setText(consultar.value(5).toString());
            ui->lineEdit_numero->setText(consultar.value(6).toString());
            ui->lineEdit_letra->setText(consultar.value(7).toString());
            ui->lineEdit_puerta->setText(consultar.value(10).toString());
            ui->lineEdit_piso->setText(consultar.value(9).toString());
            ui->lineEdit_cp->setText(consultar.value(11).toString());
            ui->lineEdit_latitud->setText(consultar.value(12).toString());
            ui->lineEdit_longitud->setText(consultar.value(13).toString());
            ui->lineEdit_extension->setText(consultar.value(15).toString());
            ui->lineEdit_fax->setText(consultar.value(16).toString());
            ui->lineEdit_sede->setText(consultar.value(18).toString());
            ui->lineEdit_adsl->setText(consultar.value(19).toString());
            ui->lineEdit_n_adm->setText(consultar.value(20).toString());
            ui->lineEdit_ip_cifrado->setText(consultar.value(22).toString());
            ui->lineEdit_caudal->setText(consultar.value(24).toString());
            ui->lineEdit_equipamiento->setText(consultar.value(25).toString());
            ui->lineEdit_servicio->setText(consultar.value(23).toString());
            ui->lineEdit_contacto->setText(consultar.value(14).toString());
            ui->lineEdit_movil->setText(consultar.value(26).toString());

            consultar_programa.prepare(QString("select * from programa where id =:idNodo and anio =:idAnio"));
            consultar_programa.bindValue(":idNodo",idNodo);
            consultar_programa.bindValue(":idAnio",idAnio);
            if (consultar_programa.exec() and consultar_programa.first()){

                ui->checkBox_portal_web->setCheckState((Qt::CheckState)consultar_programa.value(2).toInt());
                ui->checkBox_correo->setCheckState((Qt::CheckState)consultar_programa.value(3).toInt());
                ui->checkBox_basedatos_juridica->setCheckState((Qt::CheckState)consultar_programa.value(4).toInt());
                ui->checkBox_suscripcion->setCheckState((Qt::CheckState)consultar_programa.value(5).toInt());
                ui->checkBox_perfil_contratante->setCheckState((Qt::CheckState)consultar_programa.value(6).toInt());
                ui->checkBox_gestion_municipal->setCheckState((Qt::CheckState)consultar_programa.value(7).toInt());
                ui->checkBox_gestion_economica->setCheckState((Qt::CheckState)consultar_programa.value(8).toInt());
                ui->checkBox_soporte->setCheckState((Qt::CheckState)consultar_programa.value(9).toInt());
                ui->checkBox_sede_electronica->setCheckState((Qt::CheckState)consultar_programa.value(10).toInt());
                ui->checkBox_epol->setCheckState((Qt::CheckState)consultar_programa.value(11).toInt());
                ui->checkBox_epol_movil->setCheckState((Qt::CheckState)consultar_programa.value(12).toInt());
                ui->checkBox_siapol->setCheckState((Qt::CheckState)consultar_programa.value(13).toInt());
            }

            ui->comboBox_telefonos->clear();
            consultar_telefono.prepare(QString("select * from telefononodo where idNodo =:idNodo"));
            consultar_telefono.bindValue(":idNodo",idNodo);
            if (consultar_telefono.exec() and consultar_telefono.first()){
                ui->comboBox_TLF->setCurrentIndex(ui->comboBox_TLF->findText(consultar_telefono.value(1).toString()));
                do{
                    ui->comboBox_telefonos->addItem(consultar_telefono.value(1).toString());
                }while(consultar_telefono.next());
            }

            consultar_poblacion.prepare(QString("select * from poblacion where id =:idPoblacion"));
            consultar_poblacion.bindValue(":idPoblacion", consultar.value(1).toString());
            if (consultar_poblacion.exec() and consultar_poblacion.first()){
                idMunicipio = consultar_poblacion.value(1).toString();
                ui->lineEdit_habitantes->setText(consultar_poblacion.value(3).toString());
                ui->lineEdit_superficie->setText(consultar_poblacion.value(4).toString());

                consultar_municipio.prepare(QString("select * from municipio where id = :idMunicipio"));
                consultar_municipio.bindValue(":idMunicipio",idMunicipio);
                if (consultar_municipio.exec() and consultar_municipio.first()){
                    ui->lineEdit_dir3->setText(consultar_municipio.value(6).toString());
                    ui->lineEdit_ine->setText(consultar_municipio.value(7).toString());
                    ui->lineEdit_cif->setText(consultar_municipio.value(5).toString());
                    ui->lineEdit_habitantes->setText(consultar_municipio.value(8).toString());
                    ui->lineEdit_superficie->setText(consultar_municipio.value(9).toString());
                    ui->lineEdit_altitud->setText(consultar_municipio.value(10).toString());
                    ui->lineEdit_latitud->setText(consultar_municipio.value(11).toString());
                    ui->lineEdit_bandera->setText(consultar_municipio.value(13).toString());
                    ui->lineEdit_escudo->setText(consultar_municipio.value(14).toString());
                    ui->lineEdit_web->setText(consultar_municipio.value(15).toString());
                    ui->lineEdit_tablon->setText(consultar_municipio.value(20).toString());
                    ui->lineEdit_portar_transparencia->setText(consultar_municipio.value(21).toString());
                    ui->lineEdit_latitud_municipio->setText(consultar_municipio.value(11).toString());
                    ui->lineEdit_longitud_municipio->setText(consultar_municipio.value(12).toString());
                    consultar_comarca.prepare(QString("select nombre from comarca where id = :idMunicipio"));
                    consultar_comarca.bindValue(":idMunicipio",idMunicipio);
                    if (consultar_comarca.exec() and consultar_comarca.first()){
                        ui->lineEdit_comarca->setText(consultar_comarca.value(0).toString());
                    }
                    consultar_mancomunidad.prepare(QString("select nombre from mancomunidad where id = :idMunicipio"));
                    consultar_mancomunidad.bindValue(":idMunicipio",idMunicipio);
                    if (consultar_mancomunidad.exec() and consultar_mancomunidad.first()){
                        ui->lineEdit_mancomunidad->setText(consultar_mancomunidad.value(0).toString());
                    }
                }
            }
            ui->comboBox_email->clear();
            consultar_email.prepare(QString("select * from emailnodo where idNodo = :idNodo"));
            consultar_email.bindValue(":idNodo",idNodo);
            if (consultar_email.exec() and consultar_email.first()){
                do{
                    ui->comboBox_email->addItem(consultar_email.value(1).toString());
                }while(consultar_email.next());

            }
    } else
          qDebug()<<"Error No se ha podido realizar la consulta "<< consultar.lastError();

}

void Sedes::on_comboBox_NODO_activated(const QString &nombre)
{
    QSqlQuery query=model->query();
    consultaNodo(nombre);
    ui->comboBox_IP->setCurrentIndex(ui->comboBox_IP->findText(query.value(1).toString()));
    ui->comboBox_extension->setCurrentIndex(ui->comboBox_extension->findText(query.value(3).toString()));
    ui->comboBox_CP->setCurrentIndex(ui->comboBox_CP->findText(query.value(2).toString()));
}

void Sedes::on_comboBox_extension_activated(const QString &ext)
{
    QSqlQuery query=model->query();
    consultaNodo(query.value(0).toString());
    ui->comboBox_extension->setCurrentIndex(ui->comboBox_extension->findText(query.value(3).toString()));
    ui->comboBox_IP->setCurrentIndex(ui->comboBox_IP->findText(query.value(1).toString()));
    ui->comboBox_NODO->setCurrentIndex(ui->comboBox_NODO->findText(query.value(0).toString()));
    ui->comboBox_CP->setCurrentIndex(ui->comboBox_CP->findText(query.value(2).toString()));
}

void Sedes::on_comboBox_IP_activated(const QString &ip)
{
    //Vamos a usar el modelo
    QHostAddress myIP;
    QSqlQuery query= model->query();
    if( myIP.setAddress(ip)){
        consultaNodo(query.value(0).toString()); //query.value(0).toString() contiene el nombre de la consulta actual
        ui->comboBox_NODO->setCurrentIndex(ui->comboBox_NODO->findText(query.value(0).toString()));
        ui->comboBox_extension->setCurrentIndex(ui->comboBox_extension->findText(query.value(3).toString()));
        ui->comboBox_CP->setCurrentIndex(ui->comboBox_CP->findText(query.value(2).toString()));
    }
    else
        qDebug() << "Invalid IP address"<<endl;
}

void Sedes::on_comboBox_CP_activated(const QString &arg1)
{
    QSqlQuery query=model->query();
    consultaNodo(query.value(0).toString());
    ui->comboBox_extension->setCurrentIndex(ui->comboBox_extension->findText(query.value(3).toString()));
    ui->comboBox_IP->setCurrentIndex(ui->comboBox_IP->findText(query.value(1).toString()));
    ui->comboBox_NODO->setCurrentIndex(ui->comboBox_NODO->findText(query.value(0).toString()));

}

void Sedes::on_comboBox_TLF_activated(const QString &arg1)
{
    QSqlQuery query_tlf=model_tlf->query();
    QSqlQuery query=model->query();
    QVariant datos;
    QString tmp;
    datos = model->data(model->index(query_tlf.value(0).toInt()-1,0));
    tmp = datos.toString();
    if (tmp != ui->comboBox_NODO->currentText())
    {
        consultaNodo(datos.toString());
        ui->comboBox_extension->setCurrentIndex(ui->comboBox_extension->findText(query.value(3).toString()));
        ui->comboBox_IP->setCurrentIndex(ui->comboBox_IP->findText(query.value(1).toString()));
        ui->comboBox_NODO->setCurrentIndex(ui->comboBox_NODO->findText(query.value(0).toString()));
        ui->comboBox_CP->setCurrentIndex(ui->comboBox_CP->findText(query.value(2).toString()));
    }

}

void Sedes::on_comboBox_anio_activated(const QString &arg1)
{
    on_comboBox_NODO_activated(ui->comboBox_NODO->currentText());
}

void Sedes::on_pB_web_clicked()
{
    QProcess process;
    process.startDetached("xdg-open", QStringList() << ui->lineEdit_web->text());

}

void Sedes::on_pB_sede_clicked()
{
    QProcess process;
    process.startDetached("xdg-open", QStringList() << ui->lineEdit_sede ->text());
}

void Sedes::on_sP_tablon_clicked()
{
    QProcess process;
    process.startDetached("xdg-open", QStringList() << ui->lineEdit_tablon->text());
}

void Sedes::on_pB_portalTransparencia_clicked()
{
    QProcess process;
    process.startDetached("xdg-open", QStringList() << ui->lineEdit_portar_transparencia->text());
}

void Sedes::on_pB_bandera_clicked()
{
    QProcess process;
    process.startDetached("xdg-open", QStringList() << ui->lineEdit_bandera->text());
}

void Sedes::on_pB_escudo_clicked()
{
    QProcess process;
    process.startDetached("xdg-open", QStringList() << ui->lineEdit_escudo->text());
}

