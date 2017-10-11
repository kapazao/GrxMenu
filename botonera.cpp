#include "botonera.h"
#include "ui_botonera.h"
#include "usuario.h"
#include "soporte.h"
#include "sedes.h"
#include "configuracion.h"
#include "equipos.h"
#include "libreria.h"
Botonera::Botonera(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Botonera)
{
    ui->setupUi(this);
    createConnection();
}

Botonera::~Botonera()
{
    delete ui;
}

void Botonera::on_actionUsuarios_triggered()
{
    Usuario *usuario = new Usuario();
    usuario->show();
}

void Botonera::on_actionSalir_triggered()
{
    QMainWindow::close();
}

void Botonera::on_actionCronos_triggered()
{
    Configuracion *configuracion = new Configuracion;
    QProcess process;
    process.startDetached("xdg-open", QStringList() << configuracion->cual_es_cronos());
    delete configuracion;
}

void Botonera::on_actionWebmail_triggered()
{
    Configuracion *configuracion = new Configuracion;
    QProcess process;
    process.startDetached("xdg-open", QStringList() << configuracion->cual_es_correo());
    delete configuracion;
}

void Botonera::on_actionBeiro_triggered()
{
    Configuracion *configuracion = new Configuracion;
    QProcess process;
    process.startDetached("xdg-open", QStringList() << configuracion->cual_es_beiro());
    delete configuracion;
}

void Botonera::on_actionGlpi_triggered()
{
    Configuracion *configuracion = new Configuracion;
    QProcess process;
    process.startDetached("xdg-open" , QStringList() << configuracion->cual_es_glpi());
    delete configuracion;
}

void Botonera::on_actionActiveDirectory_triggered()
{
    Configuracion *configuracion = new Configuracion;
    QProcess process;
    if (configuracion->es_rdesktop())
       process.startDetached("rdesktop", QStringList() << "-u"+configuracion->cual_es_usuarioAD() <<"-p"+configuracion->cual_es_claveAD() << "-g"+configuracion->cual_es_resolucion() << configuracion->cual_es_servidorAD());
    else
       process.startDetached("xfreerdp", QStringList() << "/v:"+configuracion->cual_es_servidorAD() << "/u:"+configuracion->cual_es_usuarioAD() << "/p:"+configuracion->cual_es_claveAD() << "/size:"+configuracion->cual_es_resolucion());
    delete configuracion;
}

void Botonera::on_actionISL_triggered()
{
    Configuracion *configuracion = new Configuracion;
    QProcess process;
    process.startDetached("/usr/bin/proxychains", QStringList() << configuracion->cual_es_isl());
    delete configuracion;
}

void Botonera::on_actionConfigurar_triggered()
{
    Configuracion *configuracion= new Configuracion;
    configuracion->show();
}


void Botonera::on_actionNuevo_Men_triggered()
{
    Botonera *menu = new Botonera;
    menu->show();
}

void Botonera::on_actionSedes_triggered()
{

    Sedes *sedes = new Sedes;
    sedes->show();
}

void Botonera::on_actionSoporte_triggered()
{
    Soporte *soporte = new Soporte;
    soporte->show();
}


