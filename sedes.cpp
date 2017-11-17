#include "sedes.h"
#include "ui_sedes.h"
#include <QSqlQuery>
#include <QHostAddress>
#include <QAbstractItemModel>
#include <QDesktopServices>
#include "clickablelabel.h"
#include "qdebug.h"
#include "basedatos.h"
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
    //ponemos un gris claro para que las banderas no se pierdan en fondo blanco
    ui->frame_BanderaEscudos->setStyleSheet("background:lightgrey");
}

Sedes::~Sedes()
{
    delete ui;
}

bool Sedes::existeFichero(QString path) {
    QFileInfo check_file(path);
    if (check_file.exists() && check_file.isFile()) {
        return true;
    } else {
        return false;
    }
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

void Sedes::clear_comboBox(){
    ui->comboBox_IP->clear();
    ui->comboBox_mancomunidad->clear();
    ui->comboBox_comarca->clear();
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

    Configuracion *configuracion = new Configuracion();
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery* query = new QSqlQuery(db);
    QSqlQuery* query_tlf = new QSqlQuery(db);
    QString sql;
    QString sql_tlf;

    if (configuracion->solo_aytos()){
       sql = "select nombre,ipLinea,codigoPostal,extension,id from nodo where esAyuntamiento=1 order by nombre";
    }
    else{
       sql = "select nombre,ipLinea,codigoPostal,extension,id from nodo order by nombre";
    }
    sql_tlf = "select * from telefononodo";
    query->prepare(sql);
    query_tlf->prepare(sql_tlf);

    if(!query->exec())
       QMessageBox::critical(this, "Sql Error", "Error en la consulta: \n"+query->lastError().text(),QMessageBox::Ok);
    else{
        model->setQuery(*query);
        ui->comboBox_IP->setModel(model);
        ui->comboBox_IP->setModelColumn(1);
        ui->comboBox_NODO->setModel(model);
        on_comboBox_NODO_activated(ui->comboBox_NODO->itemText(0));
        ui->comboBox_NODO->setFocus();
    }

    if(!query_tlf->exec())
       QMessageBox::critical(this, "Sql Error", "Error en la consulta: \n"+query_tlf->lastError().text(),QMessageBox::Ok);
    else{
        model_tlf->setQuery(*query_tlf);
    }
    conectar_checkbox_lineEdit();

    delete query;
    delete query_tlf;
    delete configuracion;
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
    connect(ui->lineEdit_contacto, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_cp, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_dir3, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_direccion, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_equipamiento, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
    connect(ui->lineEdit_numeroSerieRouter, SIGNAL(textChanged(const QString &)), this, SLOT(cambio_estado_line()));
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

    QSqlQuery consultar_nodo;
    QSqlQuery consultar_telefono;
    QSqlQuery consultar_email;
    QSqlQuery consultar_poblacion;
    QSqlQuery consultar_municipio,consultar_ela;
    QSqlQuery consultar_comarca;
    QSqlQuery consultar_mancomunidad;
    QSqlQuery consultar_programa;
    QString idNodo;
    QString idAnio;
    QString idMunicipio;
    QString idComarca;
    QString idMancomunidad;
    QString idEla;
    QString nombreEla;

    ui->textEdit_consola->clear();//limpia la consola

    consultar_nodo.prepare(QString("select * from nodo where nombre = :nombre"));
    consultar_nodo.bindValue(":nombre", nombre);

    if (consultar_nodo.exec() and consultar_nodo.first()){
            clean_checkbox();
            clear_comboBox();

            idNodo = consultar_nodo.value(nodo_idPoblacion).toString();
            idAnio = ui->comboBox_anio->currentText();

            // Cargar datos del nodo seleccionado
            ui->lineEdit_via->setText(consultar_nodo.value(nodo_tipovia).toString());
            ui->lineEdit_direccion->setText(consultar_nodo.value(nodo_nombreDireccion).toString());
            ui->lineEdit_numero->setText(consultar_nodo.value(nodo_numeroDireccion).toString());
            ui->lineEdit_letra->setText(consultar_nodo.value(nodo_letraDireccion).toString());
            ui->lineEdit_piso->setText(consultar_nodo.value(nodo_pisoDireccion).toString());
            ui->lineEdit_puerta->setText(consultar_nodo.value(nodo_puertaDireccion).toString());
            ui->lineEdit_escalera->setText(consultar_nodo.value(nodo_escaleraDireccion).toString());
            ui->lineEdit_cp->setText(consultar_nodo.value(nodo_codigoPostal).toString());
            ui->lineEdit_latitud->setText(consultar_nodo.value(nodo_latitud).toString());
            ui->lineEdit_longitud->setText(consultar_nodo.value(nodo_longitud).toString());
            ui->lineEdit_contacto->setText(consultar_nodo.value(nodo_contacto).toString());
            ui->lineEdit_extension->setText(consultar_nodo.value(nodo_extension).toString());
            ui->lineEdit_extension2->setText(consultar_nodo.value(nodo_extension).toString());
            ui->lineEdit_fax->setText(consultar_nodo.value(nodo_fax).toString());
            ui->lineEdit_web->setText(consultar_nodo.value(nodo_web).toString());
            ui->lineEdit_sede->setText(consultar_nodo.value(nodo_sede).toString());
            ui->lineEdit_adsl->setText(consultar_nodo.value(nodo_adslLinea).toString());
            ui->lineEdit_n_adm->setText(consultar_nodo.value(nodo_numAdministrativo).toString());
            ui->lineEdit_ip_cifrado->setText(consultar_nodo.value(nodo_ipCifrado).toString());
            ui->lineEdit_servicio->setText(consultar_nodo.value(nodo_servicioLinea).toString());
            ui->lineEdit_caudal->setText(consultar_nodo.value(nodo_caudal).toString());
            ui->lineEdit_equipamiento->setText(consultar_nodo.value(nodo_equipamiento).toString());
            ui->lineEdit_numeroSerieRouter->setText(consultar_nodo.value(nodo_numeroSerieRouter).toString());
            modeloRouter=consultar_nodo.value(nodo_equipamiento).toString();
            // Cargar datos de programa del año actual
            consultar_programa.prepare(QString("select * from programa where idNodo =:idNodo and anio =:idAnio"));
            consultar_programa.bindValue(":idNodo",idNodo);
            consultar_programa.bindValue(":idAnio",idAnio);

            if (consultar_programa.exec())
                if (consultar_programa.first()){
                    ui->checkBox_portal_web->setCheckState((Qt::CheckState)consultar_programa.value(programa_portalWeb).toInt());
                    ui->checkBox_correo->setCheckState((Qt::CheckState)consultar_programa.value(programa_email).toInt());
                    ui->checkBox_basedatos_juridica->setCheckState((Qt::CheckState)consultar_programa.value(programa_baseDatosJuridica).toInt());
                    ui->checkBox_suscripcion->setCheckState((Qt::CheckState)consultar_programa.value(programa_suscripcionDominio).toInt());
                    ui->checkBox_perfil_contratante->setCheckState((Qt::CheckState)consultar_programa.value(programa_perfilContratante).toInt());
                    ui->checkBox_gestion_municipal->setCheckState((Qt::CheckState)consultar_programa.value(programa_gestionMunicipal).toInt());
                    ui->checkBox_gestion_economica->setCheckState((Qt::CheckState)consultar_programa.value(programa_gestionEconomica).toInt());
                    ui->checkBox_soporte->setCheckState((Qt::CheckState)consultar_programa.value(programa_soporte).toInt());
                    ui->checkBox_sede_electronica->setCheckState((Qt::CheckState)consultar_programa.value(programa_sedeElectronica).toInt());
                    ui->checkBox_epol->setCheckState((Qt::CheckState)consultar_programa.value(programa_epol).toInt());
                    ui->checkBox_epol_movil->setCheckState((Qt::CheckState)consultar_programa.value(programa_epolMovil).toInt());
                    ui->checkBox_siapol->setCheckState((Qt::CheckState)consultar_programa.value(programa_siapol).toInt());
                } else{
                    insertaTexto("Datos vacios en la consulta de programas "+consultar_nodo.value(nodo_nombre).toString());
                }
            else
                QMessageBox::critical(this, "Sql Error", "Ha ocurrido un error consultando la tabla programa: \n"+consultar_programa.lastError().text(),QMessageBox::Ok);

            // Cargar teléfonos del nodo
            ui->comboBox_telefonos->clear();
            consultar_telefono.prepare(QString("select * from telefononodo where idNodo =:idNodo"));
            consultar_telefono.bindValue(":idNodo",idNodo);

            if (consultar_telefono.exec())
                if (consultar_telefono.first()){
                    ui->lineEdit_TLF->setText(consultar_telefono.value(telefono_telefono).toString());
                    do{
                        ui->comboBox_telefonos->addItem(consultar_telefono.value(telefono_telefono).toString());
                    }while(consultar_telefono.next());
                } else{
                    insertaTexto("Datos vacios en la consulta de telefonos "+consultar_nodo.value(nodo_nombre).toString());
                }
            else
                 QMessageBox::critical(this, "Sql Error", "Ha ocurrido un error consultando telefono: \n"+consultar_telefono.lastError().text(),QMessageBox::Ok);

            // Cargar datos de población del nodo
            consultar_poblacion.prepare(QString("select * from poblacion where id =:idPoblacion"));
            consultar_poblacion.bindValue(":idPoblacion", consultar_nodo.value(nodo_idPoblacion).toString());

            if (consultar_poblacion.exec()){
                if (consultar_poblacion.first()){
                    if (!consultar_poblacion.value(poblacion_idEla).isNull()){ //Comprueba si es una ELA
                        idEla = consultar_poblacion.value(poblacion_idMunicipio).toString();
                        qDebug()<< idEla;
                        consultar_ela.prepare(QString("select nombre from municipio where id = :idEla"));
                        consultar_ela.bindValue(":idEla",idEla);
                        if ((consultar_ela.exec()) && (consultar_ela.first())){
                                nombreEla=consultar_ela.value(0).toString();
                                qDebug()<<nombreEla;
                        }
                    }

                    idMunicipio = consultar_poblacion.value(poblacion_idMunicipio).toString();

                    ui->lineEdit_habitantes->setText(consultar_poblacion.value(poblacion_nombre).toString());
                    ui->lineEdit_superficie->setText(consultar_poblacion.value(poblacion_nombreId).toString());

                    consultar_municipio.prepare(QString("select * from municipio where id = :idMunicipio"));
                    consultar_municipio.bindValue(":idMunicipio",idMunicipio);


                    if (consultar_municipio.exec()){
                        if (consultar_municipio.first()){
                            idComarca = consultar_municipio.value(municipio_idComarca).toString();
                            idMancomunidad = consultar_municipio.value(municipio_idMancomunidad).toString();

                            municipioID=consultar_municipio.value(municipio_nombreID).toString(); //carga en la variable global nodo, el municipio actual

                            if (consultar_poblacion.value(poblacion_idEla).isNull()){ //Comprueba si es una ELA
                                ui->lineEdit_municipio->setText(consultar_municipio.value(municipio_nombre).toString());
                            }
                            else{
                                ui->lineEdit_municipio->setText(nombreEla);
                                }


                            ui->lineEdit_cif->setText(consultar_municipio.value(municipio_CIF).toString());
                            ui->lineEdit_dir3->setText(consultar_municipio.value(municipio_codigoDIR3).toString());
                            ui->lineEdit_ine->setText(consultar_municipio.value(municipio_codigoINE).toString());
                            ui->lineEdit_habitantes->setText(consultar_municipio.value(municipio_numeroHabitantes).toString());
                            ui->lineEdit_superficie->setText(QString::number(consultar_municipio.value(municipio_superficie).toFloat(),'g',3));
                            ui->lineEdit_altitud->setText(consultar_municipio.value(municipio_altitud).toString());
                            ui->lineEdit_latitud_municipio->setText(consultar_municipio.value(municipio_latitud).toString());
                            ui->lineEdit_longitud_municipio->setText(consultar_municipio.value(municipio_longitud).toString());
                            ui->lineEdit_bandera->setText(consultar_municipio.value(municipio_urlBandera).toString());
                            ui->lineEdit_escudo->setText(consultar_municipio.value(municipio_urlEscudo).toString());
                            ui->lineEdit_tablon->setText(consultar_municipio.value(municipio_urlTablon).toString());
                            ui->lineEdit_portar_transparencia->setText(consultar_municipio.value(municipio_urlPortalTransparencia).toString());

                            carga_imagenes(municipioID,ui->lineEdit_equipamiento->text()); //carga las imagenes de router, banderas, escudo , etc...

                            // Obtener nombre de la comarca del municipio
                            consultar_comarca.prepare(QString("select nombre from comarca where id = :idComarca"));
                            consultar_comarca.bindValue(":idComarca",idComarca);
                            if (consultar_comarca.exec()){
                                if (consultar_comarca.first()){
                                    ui->comboBox_comarca->setCurrentIndex(ui->comboBox_comarca->findText(consultar_comarca.value(comarca_id).toString()));
                                    ui->comboBox_comarca->addItem(consultar_comarca.value(0).toString());
                                } else {
                                    insertaTexto("Datos vacios en la consulta de comarca "+consultar_nodo.value(nodo_nombre).toString());
                                }
                            }else
                                QMessageBox::critical(this, "Sql Error", "Ha ocurrido un error: \n"+consultar_comarca.lastError().text(),QMessageBox::Ok);
                            }
                            // Obtener nombre de la mancomunidad del municipio
                            consultar_mancomunidad.prepare(QString("select nombre from mancomunidad where id = :idMancomunidad"));
                            consultar_mancomunidad.bindValue(":idMancomunidad",idMancomunidad);

                            if (consultar_mancomunidad.exec()){
                                if (consultar_mancomunidad.first()){
                                    ui->comboBox_mancomunidad->setCurrentIndex(ui->comboBox_mancomunidad->findText(consultar_mancomunidad.value(0).toString()));
                                    ui->comboBox_mancomunidad->addItem(consultar_mancomunidad.value(mancomunidad_id).toString());
                                } else {
                                    insertaTexto("Datos vacios en la consulta de mancomunidad "+consultar_nodo.value(nodo_nombre).toString());
                                }
                            }else{
                                QMessageBox::critical(this, "Sql Error", "Ha ocurrido un error: \n"+consultar_mancomunidad.lastError().text(),QMessageBox::Ok);
                            }
                        }else {
                            insertaTexto("Datos vacios en la consulta de municipio "+consultar_nodo.value(nodo_nombre).toString());
                        }
                    }
                    else{
                        QMessageBox::critical(this, "Sql Error", "Ha ocurrido un error al consultar poblacion: \n"+consultar_poblacion.lastError().text(),QMessageBox::Ok);
                    }
                }else{
                    QMessageBox::critical(this, "Sql Error", "Ha ocurrido un error consultando poblacion: \n"+consultar_poblacion.lastError().text(),QMessageBox::Ok);
                }
                // Obtener emails del nodo
                ui->comboBox_email->clear();
                consultar_email.prepare(QString("select * from emailnodo where idNodo = :idNodo"));
                consultar_email.bindValue(":idNodo",idNodo);

                if (consultar_email.exec()){
                    if (consultar_email.first())
                        do{
                            ui->comboBox_email->addItem(consultar_email.value(emailnodo_email).toString());
                        }while(consultar_email.next());
                    else
                        insertaTexto("Ha ocurrido un error consultando email: \n"+consultar_nodo.value(nodo_nombre).toString());
                }else{
                    QMessageBox::critical(this, "Sql Error", "Ha ocurrido un error consultando email: \n"+consultar_email.lastError().text(),QMessageBox::Ok);
                }
    }else{
        QMessageBox::critical(this, "Sql Error", "Ha ocurrido un error en la consulta: \n"+consultar_nodo.lastError().text(),QMessageBox::Ok);
    }
    activa_botones();//activa/desactiva los botones
}


void Sedes::insertaTexto(QString texto){

    ui->textEdit_consola->moveCursor (QTextCursor::End);
    ui->textEdit_consola->insertPlainText (texto);
    ui->textEdit_consola->moveCursor (QTextCursor::End);

}


void Sedes::activa_botones(){


if (ui->lineEdit_web->text().isEmpty())
    ui->pB_web->setEnabled(false);
else
    ui->pB_web->setEnabled(true);

if (ui->lineEdit_sede->text().isEmpty()){
    ui->pB_tablon->setEnabled(false);
    ui->pB_sede->setEnabled(false);
    ui->pB_portalTransparencia->setEnabled(false);
}
else{
    ui->pB_sede->setEnabled(true);
    ui->pB_tablon->setEnabled(true);
    ui->pB_portalTransparencia->setEnabled(true);
}


if (ui->lineEdit_bandera->text().isEmpty())
    ui->pB_bandera->setEnabled(false);
else
    ui->pB_bandera->setEnabled(true);

if (ui->lineEdit_escudo->text().isEmpty())
    ui->pB_escudo->setEnabled(false);
else
    ui->pB_escudo->setEnabled(true);

}

void Sedes::carga_imagenes(QString municipio,QString modelo_router){

  QString ruta_escudo="/usr/share/grx/asistencia/imagenes/escudos/"+municipio+".svg";
  QString ruta_bandera="/usr/share/grx/asistencia/imagenes/banderas/"+municipio+".svg";
  QIcon icon_escudo;
  QIcon icon_bandera;
  if (existeFichero(ruta_escudo))
          icon_escudo = QIcon("/usr/share/grx/asistencia/imagenes/escudos/"+municipio+".svg");
  else
          icon_escudo = QIcon("/usr/share/grx/asistencia/imagenes/escudos/0_constitucional.svg");
  QPixmap escudo = icon_escudo.pixmap(QSize(80,110));
  ui->label_escudo->setPixmap(escudo);

  if (existeFichero(ruta_bandera))
          icon_bandera = QIcon("/usr/share/grx/asistencia/imagenes/banderas/"+municipio+".svg");
  else
          icon_bandera = QIcon("/usr/share/grx/asistencia/imagenes/banderas/0_provincia_granada.svg");

  QPixmap bandera = icon_bandera.pixmap(QSize(120,110));
  ui->label_bandera->setPixmap(bandera);

  QIcon icon_router = QIcon("/usr/share/grx/asistencia/imagenes/routers/"+modelo_router+".jpg");
  QPixmap router = icon_router.pixmap(QSize(242,106));
  ui->pB_router->setIconSize(router.rect().size());
  ui->pB_router->setFixedSize(243,107);
  ui->pB_router->setIcon(router);

  QIcon icon_mapa = QIcon("/usr/share/grx/asistencia/imagenes/mapas/"+municipio+".png");
  QPixmap mapa = icon_mapa.pixmap(QSize(151,118));
  ui->pB_mapa_2->setIconSize(mapa.rect().size());
  ui->pB_mapa_2->setFixedSize(151,116);
  ui->pB_mapa_2->setIcon(mapa);

}

void Sedes::on_comboBox_NODO_activated(const QString &nombre)
{
    QSqlQuery query=model->query();
    consultaNodo(nombre);
    boton_edicion_apagado();
    ui->comboBox_IP->setCurrentIndex(ui->comboBox_IP->findText(query.value(1).toString()));
 }

void Sedes::on_comboBox_IP_activated(const QString &ip)
{
    QHostAddress myIP;
    QSqlQuery query= model->query();

    if (comprueba_datos_cambiados()||cambiado)
        if ((QMessageBox::critical(this, "¿Guardar datos?", "Ha modificado algunos datos.\n¿Desea guardar los cambios?",
                                        QMessageBox::Save|QMessageBox::Cancel))==QMessageBox::Save)
        {
            insertaTexto("Guardando datos:"+query.value(0).toString());
            grabar_datos(1);
        }

        cambiado = false;
        cambio_color("black");
        boton_edicion_apagado();

        if( myIP.setAddress(ip)){
            consultaNodo(query.value(0).toString()); //query.value(0).toString() contiene el nombre de la consulta actual
            ui->comboBox_NODO->setCurrentIndex(ui->comboBox_NODO->findText(query.value(0).toString()));
        }
            else
                insertaTexto("IP no valida");

}

void Sedes::grabar_datos(int id){
    QSqlQuery consultar;
    QSqlQuery consultar_email;
    QSqlQuery consultar_poblacion;
    QSqlQuery consultar_municipio;
    QSqlQuery consultar_comarca;
    QSqlQuery consultar_mancomunidad;
    QSqlQuery consultar_programa;

    QSqlError error;

    consultar.prepare(QString("update nodo set tipoVia= :tipoVia, nombreVia = :nombreVia, numeroDireccion = :numeroDireccion,"
                              "puertaDireccion = :puertaDireccion, pisoDireccion = :pisoDireccion, letraDireccion = :letraDireccion,"
                              "codigoPostal = :codigoPostal, latitud =:latitud, longitud =:longitud, contacto =:contacto, adslLinea=:adslLinea, numAdministrativoLinea=:numAdministrativoLinea,"
                              "movil= :movil, extension= :extension, fax = :fax, sede = :sede, ipCifradoLinea= :ipCifradoLinea, servicioLinea=:servicioLinea, caudalLinea=:caudalLinea,"
                              "equipamientoLinea=:equipamientoLinea,numeroSerieRouter=:numeroSerieRouter, sede=:sede, fax=:fax, extension=:extension where id=:id"));
    consultar.bindValue(":id", id);
    consultar.bindValue(":tipoVia", ui->lineEdit_via->text());
    consultar.bindValue(":nombreVia", ui->lineEdit_direccion->text());
    consultar.bindValue(":numeroDireccion", ui->lineEdit_numero->text());
    consultar.bindValue(":puertaDireccion", ui->lineEdit_puerta->text());
    consultar.bindValue(":pisoDireccion", ui->lineEdit_piso->text() );
    consultar.bindValue(":letraDireccion", ui->lineEdit_letra->text());
    consultar.bindValue(":codigoPostal", ui->lineEdit_cp->text());
    consultar.bindValue(":latitud", ui->lineEdit_latitud->text());
    consultar.bindValue(":longitud", ui->lineEdit_longitud->text());
    consultar.bindValue(":contacto", ui->lineEdit_contacto->text());
    consultar.bindValue(":adslLinea", ui->lineEdit_adsl->text());
    consultar.bindValue(":numAdministrativoLinea", ui->lineEdit_n_adm->text());
    consultar.bindValue(":ipCifradoLinea", ui->lineEdit_ip_cifrado->text());
    consultar.bindValue(":servicioLinea", ui->lineEdit_servicio->text());
    consultar.bindValue(":caudalLinea", ui->lineEdit_caudal->text());
    consultar.bindValue(":equipamientoLinea", ui->lineEdit_equipamiento->text());
    consultar.bindValue(":numeroSerieRouter", ui->lineEdit_numeroSerieRouter->text());

    consultar.bindValue(":sede", ui->lineEdit_sede->text());
    consultar.bindValue(":fax", ui->lineEdit_fax->text());
    consultar.bindValue(":extension", ui->lineEdit_extension->text());




    if (!consultar.exec()){
        error = consultar.lastError();
        QMessageBox::critical(this, "Sql Error", "Ha ocurrido un error: \n"+error.text(),QMessageBox::Ok);

    }
    else{
            consultar_municipio.prepare(QString("update municipio set urlBandera=:urlBandera,urlEscudo=:urlEscudo, superficie= :superficie,"
                                  "CIF= :CIF, codigoINE = :codigoINE,latitud=:latitud,altitud=:altitud,longitud=:longitud,altitud=:altitud,"
                                            " codigoDIR3 = :codigoDIR3,urlTablon=:urlTablon, url_PortalTransparencia=:url_PortalTransparencia,"
                                            "numeroHabitantes=:numeroHabitantes,web=:web where id=:id"));
            consultar_municipio.bindValue(":id", id);
            consultar_municipio.bindValue(":web", ui->lineEdit_web->text());
            consultar_municipio.bindValue(":urlBandera", ui->lineEdit_bandera->text());
            consultar_municipio.bindValue(":urlEscudo", ui->lineEdit_escudo->text());
            consultar_municipio.bindValue(":superficie", ui->lineEdit_superficie->text());
            consultar_municipio.bindValue(":CIF", ui->lineEdit_cif->text());
            consultar_municipio.bindValue(":codigoINE", ui->lineEdit_ine->text());
            consultar_municipio.bindValue(":latitud", ui->lineEdit_latitud_municipio->text());
            consultar_municipio.bindValue(":longitud", ui->lineEdit_longitud_municipio->text());
            consultar_municipio.bindValue(":codigoDIR3", ui->lineEdit_dir3->text());
            consultar_municipio.bindValue(":urlTablon", ui->lineEdit_tablon->text());
            consultar_municipio.bindValue(":url_PortalTransparencia", ui->lineEdit_portar_transparencia->text());
            consultar_municipio.bindValue(":web", ui->lineEdit_web->text());
            consultar_municipio.bindValue(":altitud", ui->lineEdit_altitud->text());
            consultar_municipio.bindValue(":numeroHabitantes", ui->lineEdit_habitantes->text());
            if (!consultar_municipio.exec()){
                error = consultar_municipio.lastError();
                QMessageBox::critical(this, "Sql Error", "Ha ocurrido un error: \n"+error.text(),QMessageBox::Ok);
            }
            else{
                 consultar_programa.prepare(QString("update programa set portal_web=:portal_web,correo=:correo, basedatos_juridica= :basedatos_juridica,"
                                  "suscripcion= :suscripcion, perfil_contratante =:perfil_contratante,gestion_municipal=:gestion_municipal,"
                                            "gestion_economica=:gestion_economica,soporte=:soporte, sede_electronica=:sede_electronica,"
                                            "epol=:epol,siapol=:siapol,epol_movil=:epol_movil where id=:id and anio=:anio"));
                 consultar_programa.bindValue(":id", id);
                 consultar_programa.bindValue(":anio", ui->comboBox_anio->currentText());
                 consultar_programa.bindValue(":portal_web", (int)ui->checkBox_portal_web->checkState());
                 consultar_programa.bindValue(":correo", (int)ui->checkBox_correo->checkState());
                 consultar_programa.bindValue(":basedatos_juridica", (int)ui->checkBox_basedatos_juridica->checkState());
                 consultar_programa.bindValue(":suscripcion",(int) ui->checkBox_suscripcion->checkState());
                 consultar_programa.bindValue(":perfil_contratante", (int)ui->checkBox_perfil_contratante->checkState());
                 consultar_programa.bindValue(":gestion_municipal",(int) ui->checkBox_gestion_municipal->checkState());
                 consultar_programa.bindValue(":gestion_economica",(int) ui->checkBox_gestion_economica->checkState());
                 consultar_programa.bindValue(":soporte",(int) ui->checkBox_soporte->checkState());
                 consultar_programa.bindValue(":sede_electronica", (int)ui->checkBox_sede_electronica->checkState());
                 consultar_programa.bindValue(":epol", (int)ui->checkBox_epol->checkState());
                 consultar_programa.bindValue(":epol_movil",(int) ui->checkBox_epol_movil->checkState());
                 consultar_programa.bindValue(":siapol", (int)ui->checkBox_siapol->checkState());

                if (!consultar_programa.exec())
                    error = consultar_programa.lastError();
                    QMessageBox::critical(this, "Sql Error", "Ha ocurrido un error: \n"+error.text(),QMessageBox::Ok);
             }
    }
}

void Sedes::on_comboBox_anio_activated(const QString &arg1)
{
    on_comboBox_NODO_activated(ui->comboBox_NODO->currentText());
}

void Sedes::on_pB_web_clicked()
{
    QDesktopServices::openUrl(QUrl(ui->lineEdit_web->text(), QUrl::TolerantMode));
}

void Sedes::on_pB_sede_clicked()
{
    QDesktopServices::openUrl(QUrl(ui->lineEdit_sede->text(), QUrl::TolerantMode));
}

void Sedes::on_pB_tablon_clicked()
{
    QDesktopServices::openUrl(QUrl(ui->lineEdit_tablon->text(), QUrl::TolerantMode));
}

void Sedes::on_pB_portalTransparencia_clicked()
{
    QDesktopServices::openUrl(QUrl(ui->lineEdit_portar_transparencia->text(), QUrl::TolerantMode));
}

void Sedes::on_pB_bandera_clicked()
{
    QDesktopServices::openUrl(QUrl(ui->lineEdit_bandera->text(),QUrl::TolerantMode));
}

void Sedes::on_pB_escudo_clicked()
{
    QDesktopServices::openUrl(QUrl(ui->lineEdit_escudo->text(),QUrl::TolerantMode));
}

void Sedes::cambio_estados_readonly(bool estado){
    ui->lineEdit_adsl->setReadOnly(estado);
    ui->lineEdit_altitud->setReadOnly(estado);
    ui->lineEdit_bandera->setReadOnly(estado);
    ui->lineEdit_caudal->setReadOnly(estado);
    ui->lineEdit_cif->setReadOnly(estado);
    ui->lineEdit_contacto->setReadOnly(estado);
    ui->lineEdit_cp->setReadOnly(estado);
    ui->lineEdit_dir3->setReadOnly(estado);
    ui->lineEdit_direccion->setReadOnly(estado);
    ui->lineEdit_equipamiento->setReadOnly(estado);
    ui->lineEdit_numeroSerieRouter->setReadOnly(estado);
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
    //ui->lineEdit_mancomunidad->setReadOnly(estado);
    ui->lineEdit_municipio->setReadOnly(estado);
    ui->lineEdit_numero->setReadOnly(estado);
    ui->lineEdit_n_adm->setReadOnly(estado);
    ui->lineEdit_piso->setReadOnly(estado);
    ui->lineEdit_portar_transparencia->setReadOnly(estado);
    ui->lineEdit_puerta->setReadOnly(estado);
    ui->lineEdit_sede->setReadOnly(estado);
    ui->lineEdit_servicio->setReadOnly(estado);
    ui->lineEdit_superficie->setReadOnly(estado);
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
//ui->lineEdit_comarca->setStyleSheet("color:"+color);
ui->lineEdit_contacto->setStyleSheet("color:"+color);
ui->lineEdit_cp->setStyleSheet("color:"+color);
ui->lineEdit_dir3->setStyleSheet("color:"+color);
ui->lineEdit_direccion->setStyleSheet("color:"+color);
ui->lineEdit_equipamiento->setStyleSheet("color:"+color);
ui->lineEdit_numeroSerieRouter->setStyleSheet("color:"+color);
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
//ui->lineEdit_mancomunidad->setStyleSheet("color:"+color);
ui->lineEdit_municipio->setStyleSheet("color:"+color);
ui->lineEdit_numero->setStyleSheet("color:"+color);
ui->lineEdit_n_adm->setStyleSheet("color:"+color);
ui->lineEdit_piso->setStyleSheet("color:"+color);
ui->lineEdit_portar_transparencia->setStyleSheet("color:"+color);
ui->lineEdit_puerta->setStyleSheet("color:"+color);
ui->lineEdit_sede->setStyleSheet("color:"+color);
ui->lineEdit_servicio->setStyleSheet("color:"+color);
ui->lineEdit_superficie->setStyleSheet("color:"+color);
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
    ui->pB_Edicion->setStyleSheet("background-color:#00aa7f");
    ui->pB_Edicion->setChecked(false);
    cambio_estados_readonly(true);
}

void Sedes::boton_edicion_encendido(){
    checkBox_Enabled(true);
    ui->pB_Edicion->setStyleSheet("background-color:red");
    ui->pB_Edicion->setChecked(true);
    cambio_estados_readonly(false);
}

void Sedes::on_pB_Edicion_toggled(bool checked)
{
    /*
    if (ui->pB_Edicion->isChecked()){
        boton_edicion_encendido();
    }
    else{
        boton_edicion_apagado();
    }
    */
}

bool Sedes::comprueba_datos_cambiados()
{
    if         (ui->lineEdit_adsl->isModified()||
                ui->lineEdit_adsl->isModified()||
                ui->lineEdit_altitud->isModified()||
                ui->lineEdit_bandera->isModified()||
                ui->lineEdit_caudal->isModified()||
                ui->lineEdit_cif->isModified()||
               // ui->lineEdit_comarca->isModified()||
                ui->lineEdit_numeroSerieRouter->isModified()||
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
            //    ui->lineEdit_mancomunidad->isModified()||
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
                ui->lineEdit_superficie->isModified()||
                ui->lineEdit_web->isModified())

    {
        return true;
         insertaTexto("Han cambiado algunos datos");
    }
return false;
}

void Sedes::on_comboBox_NODO_currentIndexChanged(int index)
{
          if (comprueba_datos_cambiados())
               insertaTexto("Han cambiado algunos datos");
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

void Sedes::on_pB_mapa_2_clicked()
{
    QDesktopServices::openUrl(QUrl("file:/usr/share/grx/asistencia/imagenes/mapas/"+municipioID+".png"));
    // QDesktopServices::openUrl(QUrl("file:/home/alberto/GrxMenu/imagenes/mapas/Agrón.png"));
}

void Sedes::on_pB_router_clicked()
{
    QDesktopServices::openUrl(QUrl("file:/usr/share/grx/asistencia/imagenes/routers/"+modeloRouter+".jpg"));
}

void Sedes::on_pB_googleMaps_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.google.es/maps/place/"+ui->comboBox_NODO->currentText()+"+Granada"));
}

void Sedes::on_pB_wikipedia_clicked()
{
    QDesktopServices::openUrl(QUrl("https://es.wikipedia.org/wiki/"+ui->comboBox_NODO->currentText()+"_(Granada)"));
}

void Sedes::on_pB_bandera_2_clicked()
{
    QString ruta_bandera = "/usr/share/grx/asistencia/imagenes/banderas/"+municipioID+".svg";
    if (existeFichero(ruta_bandera))
        QDesktopServices::openUrl(QUrl("/usr/share/grx/asistencia/imagenes/banderas/"+municipioID+".svg",QUrl::TolerantMode));
    else
        QDesktopServices::openUrl(QUrl("/usr/share/grx/asistencia/imagenes/banderas/0_provincia_granada.svg",QUrl::TolerantMode));

}

void Sedes::on_pB_escudo_2_clicked()
{


     QString ruta_escudo = "/usr/share/grx/asistencia/imagenes/escudos/"+municipioID+".svg";
     if (existeFichero(ruta_escudo))
        QDesktopServices::openUrl(QUrl("/usr/share/grx/asistencia/imagenes/escudos/"+municipioID+".svg",QUrl::TolerantMode));
     else
         QDesktopServices::openUrl(QUrl("/usr/share/grx/asistencia/imagenes/escudos/0_constitucional.svg",QUrl::TolerantMode));

}

void Sedes::on_pB_Edicion_clicked()
{
    BaseDatos *basedatos   = new BaseDatos;
    basedatos->show();

}
