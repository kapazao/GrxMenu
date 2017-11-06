#include "equipos.h"
#include "ui_equipos.h"
#include <QTemporaryDir>
#include "qdebug.h"
#include <QProcess>
#include "configuracion.h"
#include <QTcpServer>
Equipos::Equipos(QString dir_ip, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Equipos)
{
    ip=dir_ip;
    ui->setupUi(this);
    ui->lineEdit.setText(ip);
}

Equipos::~Equipos()
{
    delete ui;
}

void Equipos::on_pushButton_clicked()
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

void Equipos::on_pushButton_2_clicked()
{
    Configuracion config;
    QProcess process;
    process.startDetached("konsole -e ssh "+config.cual_es_tecnico()+"@"+ip);
}

void Equipos::on_pushButton_3_clicked()
{
    Configuracion config;
    QProcess process;
    process.startDetached("ssh -p "+config.cual_es_puerto()+" "+config.cual_es_tecnico()+"@"+ip+" -A -C -X -2 -4 -f  /usr/bin/systemsettings5 ");
}

void Equipos::on_pushButton_4_clicked()
{
    Configuracion config;
    QProcess process;
    process.startDetached("ssh -p "+config.cual_es_puerto()+" "+config.cual_es_tecnico()+"@"+ip+" -A -C -X -2 -4 -f /usr/bin/kde5-nm-connection-editor ");
}

void Equipos::on_pushButton_5_clicked()
{
    Configuracion config;
    QProcess ssh;
    QProcess vnc;
    QProcess espera;
    QString puerto = QString::number(puerto_libre());

    ssh.startDetached("ssh -t -p "+config.cual_es_puerto()+" -L "+puerto+":localhost:5900 "+config.cual_es_usuario_remoto()+"@"+ip+" /usr/bin/remoto.sh");

    espera.start("sleep 1");
    espera.waitForFinished();
    vnc.startDetached("/usr/bin/remoto-cli.sh "+config.cual_es_clave_remoto()+" "+puerto);
}


int Equipos::puerto_libre(){
    QTcpServer server;
    if(server.listen(QHostAddress::Any, 0))
           return server.serverPort();

 return 0;
}
