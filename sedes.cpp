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
    cambio_estados_readonly(false);
    cargaCombo();//Cargamos las sedes en los combobox
    checkBox_Enabled(false);
    checkBox_tresEstados(true);//Ponemos los checkbox con tres estados
}

Sedes::~Sedes()
{
    delete ui;
}

void Sedes::checkBox_tresEstados(bool estado){

    ui->checkBox_basedatos_juridica->setTristate(estado);
    ui->checkBox_correo->setTristate(estado);
    ui->checkBox_epol->setTristate(estado);
    ui->checkBox_epol_movil->setTristate(estado);
    ui->checkBox_gestion_economica->setTristate(estado);
    ui->checkBox_perfil_contratante ->setTristate(estado);
    ui->checkBox_gestion_municipal->setTristate(estado);
    ui->checkBox_portal_web->setTristate(estado);
    ui->checkBox_sede_electronica->setTristate(estado);
    ui->checkBox_siapol->setTristate(estado);
    ui->checkBox_soporte->setTristate(estado);
    ui->checkBox_suscripcion->setTristate(estado);
}

void Sedes::checkBox_Enabled(bool estado){

    ui->checkBox_basedatos_juridica->setEnabled(estado);
    ui->checkBox_correo->setEnabled(estado);
    ui->checkBox_epol->setEnabled(estado);
    ui->checkBox_epol_movil->setEnabled(estado);
    ui->checkBox_gestion_economica->setEnabled(estado);
    ui->checkBox_perfil_contratante ->setEnabled(estado);
    ui->checkBox_gestion_municipal->setEnabled(estado);
    ui->checkBox_portal_web->setEnabled(estado);
    ui->checkBox_sede_electronica->setEnabled(estado);
    ui->checkBox_siapol->setEnabled(estado);
    ui->checkBox_soporte->setEnabled(estado);
    ui->checkBox_suscripcion->setEnabled(estado);

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

    ui->checkBox_portal_web->setStyleSheet("color:black");
    ui->checkBox_correo->setStyleSheet("color:black");
    ui->checkBox_basedatos_juridica->setStyleSheet("color:black");
    ui->checkBox_gestion_municipal->setStyleSheet("color:black");
    ui->checkBox_suscripcion->setStyleSheet("color:black");
    ui->checkBox_perfil_contratante->setStyleSheet("color:black");
    ui->checkBox_gestion_economica->setStyleSheet("color:black");
    ui->checkBox_soporte->setStyleSheet("color:black");
    ui->checkBox_sede_electronica->setStyleSheet("color:black");
    ui->checkBox_epol->setStyleSheet("color:black");
    ui->checkBox_epol_movil->setStyleSheet("color:black");
    ui->checkBox_siapol->setStyleSheet("color:black");
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
    conectar_checkbox_lineEdit();

    delete query;
    delete query_tlf;

}

void Sedes::conectar_checkbox_lineEdit(){
    connect(ui->checkBox_basedatos_juridica, SIGNAL(clicked(bool)), this, SLOT(cambio_estado_checkbox()));
    connect(ui->checkBox_correo, SIGNAL(clicked(bool)), this, SLOT(cambio_estado_checkbox()));
    connect(ui->checkBox_epol, SIGNAL(clicked(bool)), this, SLOT(cambio_estado_checkbox()));
    connect(ui->checkBox_epol_movil, SIGNAL(clicked(bool)), this, SLOT(cambio_estado_checkbox()));
    connect(ui->checkBox_gestion_economica, SIGNAL(clicked(bool)), this, SLOT(cambio_estado_checkbox()));
    connect(ui->checkBox_perfil_contratante, SIGNAL(clicked(bool)), this, SLOT(cambio_estado_checkbox()));
    connect(ui->checkBox_gestion_municipal, SIGNAL(clicked(bool)), this, SLOT(cambio_estado_checkbox()));
    connect(ui->checkBox_portal_web, SIGNAL(clicked(bool)), this, SLOT(cambio_estado_checkbox()));
    connect(ui->checkBox_sede_electronica, SIGNAL(clicked(bool)), this, SLOT(cambio_estado_checkbox()));
    connect(ui->checkBox_siapol, SIGNAL(clicked(bool)), this, SLOT(cambio_estado_checkbox()));
    connect(ui->checkBox_soporte, SIGNAL(clicked(bool)), this, SLOT(cambio_estado_checkbox()));
    connect(ui->checkBox_suscripcion, SIGNAL(clicked(bool)), this, SLOT(cambio_estado_checkbox()));

    connect(ui->lineEdit_adsl, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_altitud, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_bandera, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_caudal, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_cif, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_comarca, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_contacto, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_cp, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_dir3, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_direccion, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_equipamiento, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_escudo, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_extension, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_fax, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_habitantes, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_ine, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_ip_cifrado, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_latitud, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_latitud_municipio, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_letra, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_longitud, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_longitud_municipio, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_mancomunidad, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_movil, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_municipio, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_numero, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_n_adm, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_piso, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_portar_transparencia, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_puerta, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_sede, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_servicio, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_superficie, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_tablon, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_via, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_web, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));

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

void Sedes::on_comboBox_extension_activated(const QString &ext)
{
    QSqlQuery query=model->query();
    boton_edicion_apagado();
    consultaNodo(query.value(0).toString());
    ui->comboBox_extension->setCurrentIndex(ui->comboBox_extension->findText(query.value(3).toString()));
    ui->comboBox_IP->setCurrentIndex(ui->comboBox_IP->findText(query.value(1).toString()));
    ui->comboBox_NODO->setCurrentIndex(ui->comboBox_NODO->findText(query.value(0).toString()));
    ui->comboBox_CP->setCurrentIndex(ui->comboBox_CP->findText(query.value(2).toString()));
}

void Sedes::on_comboBox_NODO_activated(const QString &nombre)
{
    QSqlQuery query=model->query();
    consultaNodo(nombre);
    boton_edicion_apagado();
    ui->comboBox_IP->setCurrentIndex(ui->comboBox_IP->findText(query.value(1).toString()));
    ui->comboBox_extension->setCurrentIndex(ui->comboBox_extension->findText(query.value(3).toString()));
    ui->comboBox_CP->setCurrentIndex(ui->comboBox_CP->findText(query.value(2).toString()));
}

void Sedes::on_comboBox_IP_activated(const QString &ip)
{
    QHostAddress myIP;
    QSqlQuery query= model->query();


    //Cambios *cambios = new Cambios();

    if (comprueba_datos_cambiados()||cambiado)
        if ((QMessageBox::critical(this, "¿Guardar datos?", "Ha modificado algunos datos.\n¿Desea guardar los cambios?",
                                        QMessageBox::Save|QMessageBox::Cancel))==QMessageBox::Save)
        {
            qDebug()<< "si";
            grabar_datos(1);
        }
        else
            qDebug()<< "no";

        cambiado = false;
        //Vamos a usar el modelo
        cambio_color("black");
        boton_edicion_apagado();

        if( myIP.setAddress(ip)){
            consultaNodo(query.value(0).toString()); //query.value(0).toString() contiene el nombre de la consulta actual
            ui->comboBox_NODO->setCurrentIndex(ui->comboBox_NODO->findText(query.value(0).toString()));
            ui->comboBox_extension->setCurrentIndex(ui->comboBox_extension->findText(query.value(3).toString()));
            ui->comboBox_CP->setCurrentIndex(ui->comboBox_CP->findText(query.value(2).toString()));
        }
            else
                qDebug() << "Invalid IP address"<<endl;

}

void Sedes::grabar_datos(int id){
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
    QString tipoVia, nombreVia, extension,fax,sede,numeroDireccion, puertaDireccion, pisoDireccion,letraDireccion, codigoPostal, latitud, longitud, contacto, adslLinea, numAdministrativo, ipCifradoLinea, servicioLinea, caudalLinea, movil, equipamientoLinea;

    consultar.prepare(QString("update nodo set tipoVia= :tipoVia, nombreVia = :nombreVia, numeroDireccion = :numeroDireccion,"
                              "puertaDireccion = :puertaDireccion, pisoDireccion = :pisoDireccion, letraDireccion = :letraDireccion,"
                               "codigoPostal = :codigoPostal, latitud =:latitud, longitud =:longitud,contacto =:contacto, movil= :movil, extension= :extension,fax = :fax,sede = :sede "
                              "where id=:id"));
    consultar.bindValue(":tipoVia", tipoVia);
    consultar.bindValue(":nombreVia", nombreVia);
    consultar.bindValue(":numeroDireccion", numeroDireccion);
    consultar.bindValue(":puertaDireccion", puertaDireccion);
    consultar.bindValue(":pisoDireccion", pisoDireccion );
    consultar.bindValue(":letraDireccion", letraDireccion);
    consultar.bindValue(":codigoPostal", codigoPostal);
    consultar.bindValue(":latitud", latitud);
    consultar.bindValue(":longitud", longitud);
    consultar.bindValue(":contacto", contacto);
    consultar.bindValue(":adslLinea", adslLinea);
    consultar.bindValue(":numAdministrativo", numAdministrativo);
    consultar.bindValue(":ipCifradoLinea", ipCifradoLinea);
    consultar.bindValue(":servicioLinea", servicioLinea);
    consultar.bindValue(":caudalLinea", caudalLinea);
    consultar.bindValue(":movil", movil);
    consultar.bindValue(":equipamientoLinea", equipamientoLinea);
    consultar.bindValue(":id", id);
    consultar.bindValue(":sede", sede);
    consultar.bindValue(":fax", fax);
    consultar.bindValue(":extension", extension);

    tipoVia = ui->lineEdit_via->text();
    nombreVia = ui->lineEdit_direccion->text();
    numeroDireccion = ui->lineEdit_numero->text();
    puertaDireccion = ui->lineEdit_puerta->text();
    pisoDireccion = ui->lineEdit_piso->text();
    letraDireccion = ui->lineEdit_letra->text();
    codigoPostal = ui->lineEdit_cp->text();
    latitud = ui->lineEdit_latitud->text();
    longitud = ui->lineEdit_longitud->text();
    contacto = ui->lineEdit_contacto->text();
    adslLinea = ui->lineEdit_adsl->text();
    numAdministrativo = ui->lineEdit_n_adm->text();
    ipCifradoLinea = ui->lineEdit_ip_cifrado->text();
    servicioLinea = ui->lineEdit_servicio->text();
    caudalLinea = ui->lineEdit_caudal->text();
    movil = ui->lineEdit_movil->text();
    equipamientoLinea= ui->lineEdit_equipamiento->text();
    sede = ui->lineEdit_sede->text();
    fax = ui->lineEdit_fax->text();
    extension = ui->lineEdit_extension->text();

    qDebug() << tipoVia;
    qDebug() << nombreVia;
    qDebug() <<extension;
    qDebug() <<fax;
    qDebug() <<sede;
    qDebug() <<numeroDireccion;
    qDebug() <<puertaDireccion;
    qDebug() << pisoDireccion;
    qDebug() <<letraDireccion;
    qDebug() <<codigoPostal;
    qDebug() <<latitud;
    qDebug() <<longitud;
    qDebug() <<contacto;
    qDebug() <<adslLinea, numAdministrativo, ipCifradoLinea, servicioLinea, caudalLinea;
    qDebug() <<movil, equipamientoLinea;

    if (!consultar.exec())
        qDebug()<< consultar.lastError();

}
void Sedes::on_comboBox_CP_activated(const QString &arg1)
{
    QSqlQuery query=model->query();
    boton_edicion_apagado();
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

void Sedes::cambio_estados_readonly(bool estado){
    ui->lineEdit_adsl->setReadOnly(estado);
    ui->lineEdit_altitud->setReadOnly(estado);
    ui->lineEdit_bandera->setReadOnly(estado);
    ui->lineEdit_caudal->setReadOnly(estado);
    ui->lineEdit_cif->setReadOnly(estado);
    ui->lineEdit_comarca->setReadOnly(estado);
    ui->lineEdit_contacto->setReadOnly(estado);
    ui->lineEdit_cp->setReadOnly(estado);
    ui->lineEdit_dir3->setReadOnly(estado);
    ui->lineEdit_direccion->setReadOnly(estado);
    ui->lineEdit_equipamiento->setReadOnly(estado);
    ui->lineEdit_escudo->setReadOnly(estado);
    ui->lineEdit_extension->setReadOnly(estado);
    ui->lineEdit_fax->setReadOnly(estado);
    ui->lineEdit_habitantes->setReadOnly(estado);
    ui->lineEdit_ine->setReadOnly(estado);
    ui->lineEdit_ip_cifrado->setReadOnly(estado);
    ui->lineEdit_latitud->setReadOnly(estado);
    ui->lineEdit_latitud_municipio->setReadOnly(estado);
    ui->lineEdit_letra->setReadOnly(estado);
    ui->lineEdit_longitud->setReadOnly(estado);
    ui->lineEdit_longitud_municipio->setReadOnly(estado);
    ui->lineEdit_mancomunidad->setReadOnly(estado);
    ui->lineEdit_movil->setReadOnly(estado);
    ui->lineEdit_municipio->setReadOnly(estado);
    ui->lineEdit_numero->setReadOnly(estado);
    ui->lineEdit_n_adm->setReadOnly(estado);
    ui->lineEdit_piso->setReadOnly(estado);
    ui->lineEdit_portar_transparencia->setReadOnly(estado);
    ui->lineEdit_puerta->setReadOnly(estado);
    ui->lineEdit_sede->setReadOnly(estado);
    ui->lineEdit_servicio->setReadOnly(estado);
    //ui->lineEdit_superficie->setReadOnly(estado);
    ui->lineEdit_tablon->setReadOnly(estado);
    ui->lineEdit_via->setReadOnly(estado);
    ui->lineEdit_web->setReadOnly(estado);
    }

void Sedes::cambio_color(QString color){
ui->lineEdit_adsl->setStyleSheet("color:"+color);
ui->lineEdit_altitud->setStyleSheet("color:"+color);
ui->lineEdit_bandera->setStyleSheet("color:"+color);
ui->lineEdit_caudal->setStyleSheet("color:"+color);
ui->lineEdit_cif->setStyleSheet("color:"+color);
ui->lineEdit_comarca->setStyleSheet("color:"+color);
ui->lineEdit_contacto->setStyleSheet("color:"+color);
ui->lineEdit_cp->setStyleSheet("color:"+color);
ui->lineEdit_dir3->setStyleSheet("color:"+color);
ui->lineEdit_direccion->setStyleSheet("color:"+color);
ui->lineEdit_equipamiento->setStyleSheet("color:"+color);
ui->lineEdit_escudo->setStyleSheet("color:"+color);
ui->lineEdit_extension->setStyleSheet("color:"+color);
ui->lineEdit_fax->setStyleSheet("color:"+color);
ui->lineEdit_habitantes->setStyleSheet("color:"+color);
ui->lineEdit_ine->setStyleSheet("color:"+color);
ui->lineEdit_ip_cifrado->setStyleSheet("color:"+color);
ui->lineEdit_latitud->setStyleSheet("color:"+color);
ui->lineEdit_latitud_municipio->setStyleSheet("color:"+color);
ui->lineEdit_letra->setStyleSheet("color:"+color);
ui->lineEdit_longitud->setStyleSheet("color:"+color);
ui->lineEdit_longitud_municipio->setStyleSheet("color:"+color);
ui->lineEdit_mancomunidad->setStyleSheet("color:"+color);
ui->lineEdit_movil->setStyleSheet("color:"+color);
ui->lineEdit_municipio->setStyleSheet("color:"+color);
ui->lineEdit_numero->setStyleSheet("color:"+color);
ui->lineEdit_n_adm->setStyleSheet("color:"+color);
ui->lineEdit_piso->setStyleSheet("color:"+color);
ui->lineEdit_portar_transparencia->setStyleSheet("color:"+color);
ui->lineEdit_puerta->setStyleSheet("color:"+color);
ui->lineEdit_sede->setStyleSheet("color:"+color);
ui->lineEdit_servicio->setStyleSheet("color:"+color);
//ui->lineEdit_superficie->setStyleSheet("color:"+color);
ui->lineEdit_tablon->setStyleSheet("color:"+color);
ui->lineEdit_via->setStyleSheet("color:"+color);
ui->lineEdit_web->setStyleSheet("color:"+color);
ui->checkBox_basedatos_juridica->setStyleSheet("color:"+color);
ui->checkBox_correo->setStyleSheet("color:"+color);
ui->checkBox_epol->setStyleSheet("color:"+color);
ui->checkBox_epol_movil->setStyleSheet("color:"+color);
ui->checkBox_gestion_economica->setStyleSheet("color:"+color);
ui->checkBox_gestion_municipal->setStyleSheet("color:"+color);
ui->checkBox_perfil_contratante->setStyleSheet("color:"+color);
ui->checkBox_portal_web->setStyleSheet("color:"+color);
ui->checkBox_sede_electronica->setStyleSheet("color:"+color);
ui->checkBox_siapol->setStyleSheet("color:"+color);
ui->checkBox_soporte->setStyleSheet("color:"+color);
ui->checkBox_suscripcion->setStyleSheet("color:"+color);


}

void Sedes::boton_edicion_apagado(){

    checkBox_Enabled(false);
    ui->pb_Edicion->setStyleSheet("background-color:#00aa7f");
    ui->pb_Edicion->setChecked(false);
    cambio_estados_readonly(true);
}

void Sedes::boton_edicion_encendido(){
    checkBox_Enabled(true);
    ui->pb_Edicion->setStyleSheet("background-color:red");
    ui->pb_Edicion->setChecked(true);
    cambio_estados_readonly(false);
}

void Sedes::on_pb_Edicion_toggled(bool checked)
{
    if (ui->pb_Edicion->isChecked()){
        boton_edicion_encendido();
    }
    else{
        boton_edicion_apagado();
    }
}

bool Sedes::comprueba_datos_cambiados()
{
    if         (ui->lineEdit_adsl->isModified()||
                ui->lineEdit_adsl->isModified()||
                ui->lineEdit_altitud->isModified()||
                ui->lineEdit_bandera->isModified()||
                ui->lineEdit_caudal->isModified()||
                ui->lineEdit_cif->isModified()||
                ui->lineEdit_comarca->isModified()||
                ui->lineEdit_contacto->isModified()||
                ui->lineEdit_cp->isModified()||
                ui->lineEdit_dir3->isModified()||
                ui->lineEdit_direccion->isModified()||
                ui->lineEdit_equipamiento->isModified()||
                ui->lineEdit_escudo->isModified()||
                ui->lineEdit_extension->isModified()||
                ui->lineEdit_fax->isModified()||
                ui->lineEdit_habitantes->isModified()||
                ui->lineEdit_ine->isModified()||
                ui->lineEdit_ip_cifrado->isModified()||
                ui->lineEdit_latitud->isModified()||
                ui->lineEdit_latitud_municipio->isModified()||
                ui->lineEdit_letra->isModified()||
                ui->lineEdit_longitud->isModified()||
                ui->lineEdit_longitud_municipio->isModified()||
                ui->lineEdit_mancomunidad->isModified()||
                ui->lineEdit_movil->isModified()||
                ui->lineEdit_municipio->isModified()||
                ui->lineEdit_numero->isModified()||
                ui->lineEdit_n_adm->isModified()||
                ui->lineEdit_piso->isModified()||
                ui->lineEdit_portar_transparencia->isModified()||
                ui->lineEdit_puerta->isModified()||
                ui->lineEdit_sede->isModified()||
                ui->lineEdit_servicio->isModified()||
                ui->lineEdit_tablon->isModified()||
                ui->lineEdit_via->isModified()||
                ui->lineEdit_web->isModified())

    {
        return true;
        qDebug()<< "ha cambiado";
    }
return false;
}

void Sedes::on_comboBox_NODO_currentIndexChanged(int index)
{
          if (comprueba_datos_cambiados())
              qDebug()<<"si ha cambiado";
}

void Sedes::cambio_estado_line(){
    QLineEdit * linea =qobject_cast<QLineEdit*>(sender());
    if (linea->isModified()){
        linea->setStyleSheet("color:red");
    }
}

void Sedes::cambio_estado_checkbox(){
     QCheckBox * CB =qobject_cast<QCheckBox*>(sender());
         CB->setStyleSheet("color:red");
         cambiado = true;
}

