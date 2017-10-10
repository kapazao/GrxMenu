#include "configuracion.h"
#include "ui_configuracion.h"
#include <QStandardPaths>
#include <QtDebug>
#include <QProcess>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSqlQueryModel>
Configuracion::Configuracion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Configuracion)
{
    ui->setupUi(this);
    //Vamos a poner en el constructor la máscara para validar la ip introducida
    QString ipRange = "(?:[0-1]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5])";
    QRegExp ipRegex ("^" + ipRange
                     + "\\." + ipRange
                     + "\\." + ipRange
                     + "\\." + ipRange + "$");
    QRegExpValidator *ipValidator = new QRegExpValidator(ipRegex, this);
    ui->servidor->setValidator(ipValidator);

    //Vamos a poner en el constructor la máscara para validar el puerto introducido
    QString puerto = "(?:[0-6]?[0-9]?[0-9]?[0-9]?[0-9])";
    QRegExp ipRegex2 ("^" + puerto+ "$");
    QRegExpValidator *ipValidator2 = new QRegExpValidator(ipRegex2, this);
    ui->puerto->setValidator(ipValidator2);
    carga_configuracion();
    carga_configuracion_color();


    ui->lb_rutas->setText("<a href=\"/\">Configuración de Rutas</a>");

    }

Configuracion::~Configuracion()
{
    delete ui;
}
QString  Configuracion::cual_es_home(){
    return home_usuario;
}
QString  Configuracion::cual_es_ini(){
    return home_usuario+".grxconf.ini";
}
QString  Configuracion::cual_es_tecnico(){
    return Tecnico;
}
QString  Configuracion::cual_es_clave(){
    return Clave;
}
QString  Configuracion::cual_es_servidorAD(){
    return ServidorAD;
}
QString  Configuracion::cual_es_claveAD(){
    return ClaveAD;
}
QString  Configuracion::cual_es_usuarioAD(){
    return UsuarioAD;
}
QString  Configuracion::cual_es_beiro(){
    return Beiro;
}
QString  Configuracion::cual_es_DataBaseName(){
    return DataBaseName;
}
QString  Configuracion::cual_es_HostName(){
    return HostName;
}
QString  Configuracion::cual_es_PuertoDB(){
    return PuertoDB;
}
QString  Configuracion::cual_es_UserName(){
    return UserName;
}
QString  Configuracion::cual_es_PaswordDB(){
    return PasswordDB;
}
QString  Configuracion::cual_es_usuario_remoto(){
      return UsuarioRemoto;
}
QString  Configuracion::cual_es_puerto(){
      return Puerto;
}
QString  Configuracion::cual_es_servidorSSH(){
    return ServidorSSH;
}
QString  Configuracion::cual_es_usuarioSSH(){
    return UsuarioSSH;
}
QString  Configuracion::cual_es_clave_ssh(){
      return ClaveSSH;
}
QString  Configuracion::cual_es_puerto_remoto_ssh(){
      return PuertoRemotoSSH;
}
QString  Configuracion::cual_es_puerto_local_ssh(){
      return PuertoLocalSSH;
}
QString  Configuracion::cual_es_isl(){
      return ISL;
}
QString  Configuracion::cual_es_cronos(){
      return Cronos;
}
QString  Configuracion::cual_es_correo(){
      return Correo;
}
QString  Configuracion::cual_es_glpi(){
      return GLPI;
}
QString  Configuracion::cual_es_ocs(){
      return OCS;
}
QString  Configuracion::cual_es_password(){
      return Password;
}
QString  Configuracion::cual_es_clave_cifrado(){
      return ClaveCifrado;
}
QString  Configuracion::cual_es_clave_remoto(){
      return ClaveRemoto;
}
QString  Configuracion::cual_es_rdesktop(){
      return Rdesktop;
}
bool Configuracion::es_rdesktop(){
      if (Rdesktop =="True")
          return true;
return false;
}
bool Configuracion::es_usarSSH(){
      if (UsarSSH =="True")
          return true;
return false;
}
QString  Configuracion::cual_es_resolucion(){
      return Resolucion;
}
void Configuracion::carga_configuracion_color(){

    ui->fr_linux->setStyleSheet("background-color:"+Fr_linux+";");
    ui->fr_rutas->setStyleSheet("background-color:"+Fr_rutas+";");
    ui->fr_DB->setStyleSheet("background-color:"+Fr_DB+";");
    ui->fr_TS->setStyleSheet("background-color:"+Fr_TS+";");
    ui->fr_kerberos->setStyleSheet("background-color:"+Fr_kerberos+";");
}
void Configuracion::carga_configuracion()
{
    //Carga de los valores de las variables de configuracion
    //Usamos Qsettings para leer los valores de las variables de un archivo .ini
    home_usuario = QStandardPaths::locate(QStandardPaths::HomeLocation, QString(), QStandardPaths::LocateDirectory);
    QSettings s(home_usuario+".grxconf.ini", QSettings::IniFormat);
    Tecnico = s.value("Configuracion/Tecnico").toString();
    Clave = s.value("Configuracion/Clave").toString();
    ServidorAD = s.value("Configuracion/ServidorAD").toString();
    UsuarioAD = s.value("Configuracion/UsuarioAD").toString();
    ClaveAD = s.value("Configuracion/ClaveAD").toString();
    DataBaseName = s.value("Configuracion/DataBaseName").toString();
    HostName = s.value("Configuracion/HostName").toString();
    PuertoDB = s.value("Configuracion/PuertoDB").toString();
    UserName = s.value("Configuracion/UserName").toString();
    PasswordDB = s.value("Configuracion/PasswordDB").toString();
    UsarSSH = s.value("Configuracion/UsarSSH").toString();
    ServidorSSH = s.value("Configuracion/ServidorSSH").toString();
    UsuarioSSH =  s.value("Configuracion/UsuarioSSH").toString();
    ClaveSSH = s.value("Configuracion/ClaveSSH").toString();
    PuertoRemotoSSH = s.value("Configuracion/PuertoRemotoSSH").toString();
    PuertoLocalSSH = s.value("Configuracion/PuertoLocalSSH").toString();
    ISL = s.value("Configuracion/ISL").toString();
    OCS = s.value("Configuracion/OCS").toString();
    GLPI = s.value("Configuracion/GLPI").toString();
    Beiro = s.value("Configuracion/Beiro").toString();
    Cronos = s.value("Configuracion/Cronos").toString();
    UsuarioRemoto = s.value("Configuracion/UsuarioRemoto").toString();
    Puerto = s.value("Configuracion/Puerto").toString();
    Correo = s.value("Configuracion/Correo").toString();
    Password = s.value("Configuracion/Password").toString();
    ClaveCifrado = s.value("Configuracion/ClaveCifrado").toString();
    ClaveRemoto = s.value("Configuracion/ClaveRemoto").toString();
    Rdesktop = s.value("Configuracion/Rdesktop").toString();
    Resolucion = s.value("Configuracion/Resolucion").toString();

    //Colores
    Fr_linux = s.value("Configuracion/fr_linux").toString();
    Fr_kerberos = s.value("Configuracion/fr_kerberos").toString();
    Fr_DB = s.value("Configuracion/fr_DB").toString();
    Fr_TS = s.value("Configuracion/fr_TS").toString();
    Fr_rutas = s.value("Configuracion/fr_rutas").toString();

    //Ahora ponemos los valores en los editLine
    if (es_rdesktop())
        ui->rb_rdesktop->setChecked(true);
    else
        ui->rb_freerdp->setChecked(true);

    if (es_usarSSH()){
        ui->checkBox_ssh->setChecked(true);
        habilitaSSH();
    }
    else{
        ui->checkBox_ssh->setChecked(false);
        deshabilitaSSH();
    }

    ui->tecnico->setText(Tecnico);
    ui->clave->setText(Clave);
    ui->servidor->setText(ServidorAD);
    ui->usuario_ad->setText(UsuarioAD);
    ui->DataBaseName->setText(DataBaseName);
    ui->puerto_DB->setText((QString)PuertoDB);
    ui->servidor_DB->setText(HostName);
    ui->Usuario_DB->setText(UserName);
    ui->password_DB->setText(PasswordDB);
    ui->servidor_SSH->setText(ServidorSSH);
    ui->usuario_ssh_BD->setText(UsuarioSSH);
    ui->clave_ssh_BD->setText(ClaveSSH);
    ui->puerto_Local_ssh->setText(PuertoLocalSSH);
    ui->puerto_Remoto_ssh->setText(PuertoRemotoSSH);
    ui->clave_ad->setText(ClaveAD);
    ui->usuario_remoto->setText(UsuarioRemoto);
    ui->puerto->setText(Puerto);
    ui->ISL->setText(ISL);
    ui->OCS->setText(OCS);
    ui->GLPI->setText(GLPI);
    ui->beiro->setText(Beiro);
    ui->cronos->setText(Cronos);
    ui->correoweb->setText(Correo);
    ui->password->setText(Password);
    ui->clave_cifrado->setText(ClaveCifrado);
    ui->clave_remoto->setText(ClaveRemoto);
    ui->cb_resolucion->setCurrentText(Resolucion);
}
void Configuracion::habilitaSSH(){
    ui->puerto_Local_ssh->setEnabled(true);
    ui->servidor_SSH->setEnabled(true);
    ui->usuario_ssh_BD->setEnabled(true);
    ui->clave_ssh_BD->setEnabled(true);
    ui->puerto_Remoto_ssh->setEnabled(true);

}
void Configuracion::deshabilitaSSH(){
    ui->puerto_Local_ssh->setEnabled(false);
    ui->servidor_SSH->setEnabled(false);
    ui->usuario_ssh_BD->setEnabled(false);
    ui->clave_ssh_BD->setEnabled(false);
    ui->puerto_Remoto_ssh->setEnabled(false);
}
void Configuracion::on_buttonBox_accepted()
{
    //Usamos Qsettings para guardar los valores de las variables en un archivo .ini
    QString home_usuario = QStandardPaths::locate(QStandardPaths::HomeLocation, QString(), QStandardPaths::LocateDirectory);
    QSettings s(home_usuario+".grxconf.ini", QSettings::IniFormat);
    s.setValue("Configuracion/Tecnico", ui->tecnico->text());
    s.setValue("Configuracion/Clave", ui->clave->text());
    s.setValue("Configuracion/ServidorAD", ui->servidor->text());
    s.setValue("Configuracion/UsuarioAD", ui->usuario_ad->text());
    s.setValue("Configuracion/ClaveAD", ui->clave_ad->text());
    s.setValue("Configuracion/UsuarioRemoto",ui->usuario_remoto->text());
    s.setValue("Configuracion/Puerto", ui->puerto->text());
    s.setValue("Configuracion/Correo", ui->correoweb->text());
    s.setValue("Configuracion/ISL", ui->ISL->text());
    s.setValue("Configuracion/DataBaseName",ui->DataBaseName->text());
    s.setValue("Configuracion/HostName", ui->servidor_DB->text());
    s.setValue("Configuracion/UserName", ui->Usuario_DB->text());
    s.setValue("Configuracion/PasswordDB", ui->password_DB->text());
    s.setValue("Configuracion/PuertoDB", ui->puerto_DB->text());
    s.setValue("Configuracion/ServidorSSH", ui->servidor_SSH->text());
    s.setValue("Configuracion/UsuarioSSH", ui->usuario_ssh_BD->text());
    s.setValue("Configuracion/ClaveSSH", ui->clave_ssh_BD->text());
    s.setValue("Configuracion/PuertoRemotoSSH", ui->puerto_Remoto_ssh->text());
    s.setValue("Configuracion/PuertoLocalSSH", ui->puerto_Local_ssh->text());
    s.setValue("Configuracion/OCS", ui->OCS->text());
    s.setValue("Configuracion/GLPI", ui->GLPI->text());
    s.setValue("Configuracion/Beiro", ui->beiro->text());
    s.setValue("Configuracion/Cronos", ui->cronos->text());
    s.setValue("Configuracion/Password", ui->password->text());
    s.setValue("Configuracion/ClaveCifrado",ui->clave_cifrado->text());
    s.setValue("Configuracion/ClaveRemoto",ui->clave_remoto->text());
    s.setValue("Configuracion/Resolucion",ui->cb_resolucion->currentText());
    s.setValue("Configuracion/fr_linux",Fr_linux);
    s.setValue("Configuracion/fr_kerberos",Fr_kerberos);
    s.setValue("Configuracion/fr_DB",Fr_DB);
    s.setValue("Configuracion/fr_TS",Fr_TS);
    s.setValue("Configuracion/fr_rutas",Fr_rutas);

    if (ui->checkBox_ssh->isChecked())
        s.setValue("Configuracion/UsarSSH","True");
    else
        s.setValue("Configuracion/UsarSSH","False");

    if (ui->rb_rdesktop->isChecked())
        s.setValue("Configuracion/Rdesktop","True");
    else
        s.setValue("Configuracion/Rdesktop","False");
}
void Configuracion::on_Btn_Kerberos_clicked()
{
    QProcess process;
    process.startDetached("wbinfo -K", QStringList() << ui->tecnico->text());

}
void Configuracion::on_PB_linux_clicked()
{
    QColor color = QColorDialog::getColor(Qt::blue, this );
        if( color.isValid() )
        {
          Fr_linux = color.name();
          ui->fr_linux->setStyleSheet("background-color:"+Fr_linux+";");
        }
}
void Configuracion::on_PB_rutas_clicked()
{
    QColor color = QColorDialog::getColor(Qt::blue, this );
        if( color.isValid() )
        {
          Fr_rutas = color.name();
          ui->fr_rutas->setStyleSheet("background-color:"+Fr_rutas+";");
        }
}
void Configuracion::on_PB_TS_clicked()
{
    QColor color = QColorDialog::getColor(Qt::blue, this );
        if( color.isValid() )
        {
          Fr_TS = color.name();
          ui->fr_TS->setStyleSheet("background-color:"+Fr_TS+";");
        }
}
void Configuracion::on_PB_DB_clicked()
{
    QColor color = QColorDialog::getColor(Qt::blue, this );
        if( color.isValid() )
        {
          Fr_DB = color.name();
          ui->fr_DB->setStyleSheet("background-color:"+Fr_DB+";");
        }
}
void Configuracion::on_PB_kerberos_clicked()
{
    QColor color = QColorDialog::getColor(Qt::blue, this );
        if( color.isValid() )
        {
          Fr_kerberos = color.name();
          ui->fr_kerberos->setStyleSheet("background-color:"+Fr_kerberos+";");
        }
}

void Configuracion::on_lb_rutas_linkActivated(const QString &link)
{
    QColor color = QColorDialog::getColor(Qt::blue, this );
        if( color.isValid() )
        {
          Fr_rutas = color.name();
          ui->fr_rutas->setStyleSheet("background-color:"+Fr_rutas+";");
        }
}

void Configuracion::on_Btn_lupa_clicked()
{
    QString fichero = QFileDialog::getOpenFileName(this, tr("Selecciona el ejecutable"),ui->ISL->text());
    ui->ISL->setText(fichero);

}

void Configuracion::on_checkBox_ssh_clicked()
{
    if (ui->checkBox_ssh->isChecked())
        habilitaSSH();
    else
        deshabilitaSSH();
}
