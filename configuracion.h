#ifndef CONFIGURACION_H
#define CONFIGURACION_H

#include <QDialog>
#include <QSettings>
#include <QColorDialog>
#include <QFileDialog>

namespace Ui {
class Configuracion;
}

class Configuracion : public QDialog
{
    Q_OBJECT

public:
    explicit Configuracion(QWidget *parent = 0);
    QString cual_es_home();
    QString cual_es_ini();
    QString cual_es_tecnico();
    QString cual_es_clave();
    QString cual_es_correo();
    QString cual_es_servidorAD();
    QString cual_es_usuarioAD();
    QString cual_es_claveAD();
    QString cual_es_usuario_remoto();
    QString cual_es_beiro();
    QString cual_es_DataBaseName();
    QString cual_es_HostName();
    QString cual_es_UserName();
    QString cual_es_PaswordDB();
    QString cual_es_puerto();
    QString cual_es_isl();
    QString cual_es_ocs();
    QString cual_es_glpi();
    QString cual_es_cronos();
    QString cual_es_password();
    QString cual_es_clave_cifrado();
    QString cual_es_clave_remoto();
    bool es_rdesktop();
    QString cual_es_rdesktop();
    QString cual_es_resolucion();
    bool createConnection();

    ~Configuracion();

private slots:

    void on_buttonBox_accepted();

    void on_Btn_Kerberos_clicked();

    void carga_configuracion();

    void carga_configuracion_color();

    void on_PB_linux_clicked();

    void on_PB_rutas_clicked();

    void on_PB_TS_clicked();

    void on_PB_DB_clicked();

    void on_PB_kerberos_clicked();

    void on_lb_rutas_linkActivated(const QString &link);

    void on_Btn_lupa_clicked();

private:

    QString home_usuario;
    QString Tecnico;
    QString Correo;
    QString Clave;
    QString ServidorAD;
    QString UsuarioAD;
    QString ClaveAD;
    QString UsuarioRemoto;
    QString Puerto;
    QString ISL;
    QString OCS;
    QString GLPI;
    QString Cronos;
    QString Beiro;
    QString DataBaseName;
    QString HostName;
    QString UserName;
    QString PasswordDB;
    QString Password;
    QString ClaveCifrado;
    QString ClaveRemoto;
    QString Rdesktop;
    QString Resolucion;
    QString Fr_linux;
    QString Fr_rutas;
    QString Fr_DB;
    QString Fr_TS;
    QString Fr_kerberos;


    Ui::Configuracion *ui;
};


#endif // CONFIGURACION_H