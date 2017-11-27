#ifndef SEDES_H
#define SEDES_H

#define municipio_id 0
#define municipio_idComarca 1
#define municipio_idMancomunidad 2
#define municipio_nombre 3
#define municipio_nombreID 4
#define municipio_CIF 5
#define municipio_codigoDIR3 6
#define municipio_codigoINE 7
#define municipio_numeroHabitantes 8
#define municipio_superficie 9
#define municipio_altitud 10
#define municipio_latitud 11
#define municipio_longitud 12
#define municipio_urlBandera 13
#define municipio_urlEscudo 14
#define municipio_web 15
#define municipio_siglasPartido 16
#define municipio_nombrePartido 17
#define municipio_nombreAlcalde 18
#define municipio_fechaElecciones 19
#define municipio_urlTablon 20
#define municipio_urlPortalTransparencia 21

#define nodo_id 0
#define nodo_idPoblacion 1
#define nodo_idCentro 2
#define nodo_nombre 3
#define nodo_tipovia 4
#define nodo_nombreDireccion 5
#define nodo_numeroDireccion 6
#define nodo_letraDireccion 7
#define nodo_escaleraDireccion 8
#define nodo_pisoDireccion 9
#define nodo_puertaDireccion 10
#define nodo_codigoPostal 11
#define nodo_latitud 12
#define nodo_longitud 13
#define nodo_contacto 14
#define nodo_extension 15
#define nodo_fax 16
#define nodo_web 17
#define nodo_sede 18
#define nodo_adslLinea 19
#define nodo_numAdministrativo 20
#define nodo_ipLinea 21
#define nodo_ipCifrado 22
#define nodo_servicioLinea 23
#define nodo_caudal 24
#define nodo_equipamiento 25
#define nodo_numeroSerieRouter 26
#define nodo_esAyuntamiento 27



#define programa_id 0
#define programa_anio 1
#define programa_portalWeb 2
#define programa_email 3
#define programa_baseDatosJuridica 4
#define programa_suscripcionDominio 5
#define programa_perfilContratante 6
#define programa_gestionMunicipal 7
#define programa_gestionEconomica 8
#define programa_soporte 9
#define programa_sedeElectronica 10
#define programa_epol 11
#define programa_epolMovil 12
#define programa_siapol 13

#define poblacion_id 0
#define poblacion_idMunicipio 1
#define poblacion_idEla 2
#define poblacion_nombre 3
#define poblacion_nombreId 4

#define telefono_id 0
#define telefono_telefono 1

#define centro_id 0
#define centro_nombre 1
#define centro_direccion 2
#define centro_telefono 3

#define mancomunidad_id 0
#define mancomunidad_nombre 1

#define comarca_id 0
#define comarca_nombre 1

#define emailnodo_id 0
#define emailnodo_email 1

#define diafestivopoblacion_id 0
#define diafestivopoblacion_date 1
#define diafestivopoblacion_descripcion 2


#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSqlQueryModel>
#include "QtDebug"
#include "nmap_xml.h"
#include "configuracion.h"
#include <QMessageBox>
namespace Ui {
class Sedes;
}

class Sedes : public QWidget
{
    Q_OBJECT

public:
    explicit Sedes(QWidget *parent = 0);
    ~Sedes();
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQueryModel *model_tlf = new QSqlQueryModel();
    bool cambiado = false;

private slots:
    void on_comboBox_NODO_activated(const QString &arg1);

    void on_comboBox_anio_activated(const QString &arg1);

    void mascaraIP();

    void cargaCombo();

    void checkBox_tresEstados(bool estado);

    void clean_checkbox();

    void activa_botones();

    void consultaNodo(const QString &nombre);

    void on_pB_web_clicked();

    void boton_edicion_apagado();

    void boton_edicion_encendido();

    void on_pB_sede_clicked();

    void on_pB_portalTransparencia_clicked();

    void on_pB_bandera_clicked();

    void grabar_datos(int id);

    void on_pB_escudo_clicked();

    void on_pB_Edicion_toggled(bool checked);

    void on_comboBox_NODO_currentIndexChanged(int index);

    void on_comboBox_IP_activated(const QString &arg1);

    bool comprueba_datos_cambiados();

    void conectar_checkbox_lineEdit();

    void cambio_estado_line();

    void cambio_estados_readonly(bool estado);

    void cambio_color(QString color);

    void checkBox_Enabled(bool estado);

    void cambio_estado_checkbox();

    void carga_imagenes(QString municipioID,QString router);

    bool existeFichero(QString path);

    void on_pB_mapa_2_clicked();

    void on_pB_router_clicked();

    void on_pB_googleMaps_clicked();

    void on_pB_wikipedia_clicked();

    void clear_comboBox();

    void on_pB_bandera_2_clicked();

    void on_pB_escudo_2_clicked();

    void on_pB_tablon_clicked();

    void insertaTexto(QString texto);

    void on_pB_Edicion_clicked();

private:
    Ui::Sedes *ui;
    //QSqlDatabase db;
    //QSqlQuery consultar;
    QString municipioID, modeloRouter;
};

#endif // SEDES_H
