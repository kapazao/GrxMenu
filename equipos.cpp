#include "equipos.h"
#include "ui_equipos.h"
#include <QTemporaryDir>
#include "qdebug.h"
#include <QProcess>
#include "configuracion.h"
#include <QTcpServer>
#include <QDesktopServices>


QString host_ports_open_string(Host *host){
    QString lista;
    for (int i=0;i<host->ports.port.count();i++)
            if (host->ports.port.at(i).state.state=="open")
                lista.append(host->ports.port.at(i).portid+" ");
    return lista;
}

QString host_ports_find(Host *host){
    QString lista;
    for (int i=0;i<host->ports.port.count();i++)
            lista.append(host->ports.port.at(i).portid+" ");
    return lista;
}

Equipos::Equipos(Host *host, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Equipos)
{
    host_tmp=host;//Guardamos para toda la clase el valor de host en variable global
    QString puertos;
    ip=host->address.addr;
    QString puertos_abiertos= host_ports_open_string(host);
    ui->setupUi(this);
    ui->lineEdit_ip->setText(ip);
    ui->lineEdit_puertos->setText(puertos_abiertos);
    ui->lineEdit_puertosBuscados->setText(QString::number(host->ports.port.count())+": "+host_ports_find(host));
    ui->lineEdit_hostname->setText(host->hostnames.hostname.name);
    ui->lineEdit_status->setText(host->status.state);
    ui->lineEdit_tipo->setText(host->address.addrtype);
}

Equipos::~Equipos()
{
    delete ui;
}

/****************host_ports_open****************************
 * Devuelve los puertos buscados del host pasado por parametro
 * *******************************************************/


QList <QString> Equipos::host_ports_open(Host *host){
    QList <QString> lista;
    for (int i=0;i<host->ports.port.count();i++)
           lista.append(host->ports.port.at(i).portid);
    return lista;
}

/****************host_ports_open_int****************************
 * Devuelve los puerto abiertos del host pasado por parametro
 * *******************************************************/

int Equipos::host_ports_open_int(Host *host){
    return host->ports.port.count();
}

int Equipos::puerto_libre(){
    QTcpServer server;
    if(server.listen(QHostAddress::Any, 0))
           return server.serverPort();

 return 0;
}

void Equipos::on_pB_carpeta_clicked()
{

    QTemporaryDir dir;
    QProcess process;
    Configuracion config;
    dir.setAutoRemove(false);
    if (dir.isValid()) {
       process.startDetached("sshfs -p "+config.cual_es_puerto()+" -o reconnect -C -o workaround=all "+config.cual_es_tecnico()+"@"+ip+":/home/administrador "+dir.path());
       process.startDetached("xdg-open "+dir.path());
    }

}

void Equipos::on_pB_web_clicked()
{
    QDesktopServices::openUrl(QUrl("http://"+ip));
}

void Equipos::on_pB_webssl_clicked()
{
    QDesktopServices::openUrl(QUrl("https://"+ip));
}

void Equipos::on_pB_telnet_clicked()
{
    QProcess process;
    process.startDetached("xterm -e telnet "+ip);
}

void Equipos::on_pB_ssh_clicked()
{
    Configuracion config;
    QProcess process;
    process.startDetached("x-terminal-emulator -e ssh "+config.cual_es_tecnico()+"@"+ip);
}

void Equipos::on_pB_systemconfig_clicked()
{
    Configuracion config;
    QProcess process;
    process.startDetached("ssh -p "+config.cual_es_puerto()+" "+config.cual_es_tecnico()+"@"+ip+" -A -C -X -2 -4 -f  /usr/bin/systemsettings5 ");
}

void Equipos::on_pB_networkManager_clicked()
{
    Configuracion config;
    QProcess process;
    process.startDetached("ssh -p "+config.cual_es_puerto()+" "+config.cual_es_tecnico()+"@"+ip+" -A -C -X -2 -4 -f /usr/bin/kde5-nm-connection-editor ");
}

void Equipos::on_pB_cups_clicked()
{

    Configuracion config;
    QProcess ssh;
    QProcess cups;
    QProcess espera;
    QString puerto = QString::number(puerto_libre());

    ssh.startDetached("ssh -t  -p "+config.cual_es_puerto()+" -L "+puerto+":localhost:631 "+config.cual_es_usuario_remoto()+"@"+ip);
    espera.start("sleep 1");
    espera.waitForFinished();
    cups.startDetached("/usr/bin/remoto-cli.sh "+config.cual_es_clave_remoto()+" "+puerto);


}

void Equipos::on_pB_vnc_clicked()
{
    Configuracion config;
    QProcess ssh;
    QProcess vnc;
    QProcess espera;
    QString puerto = QString::number(puerto_libre());

    ssh.startDetached("ssh -t -p "+config.cual_es_puerto()+" -L "+puerto+":localhost:5900 "+config.cual_es_usuario_remoto()+"@"+ip+" /usr/bin/remoto.sh");
    //ssh.startDetached("ssh -t -p 22 -L 30000:localhost:5900 alberto@10.100.251.30 /usr/bin/remoto.sh");
    espera.start("sleep 1");
    espera.waitForFinished();
    vnc.startDetached("/usr/bin/remoto-cli.sh "+puerto);
    //vnc.startDetached("/usr/bin/remoto-cli.sh 30000");
}

void Equipos::on_pushButton_12_clicked()
{
    Configuracion config;
    QProcess process;
    process.startDetached("ssh -p "+config.cual_es_puerto()+" "+config.cual_es_tecnico()+"@"+ip+" -A -C -X -2 -4 -f /usr/bin/lxtask ");
}
