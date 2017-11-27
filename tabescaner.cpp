#include "tabescaner.h"
#include "equipos.h"
#include "QPushButton"
#include "QSignalMapper"
#include "qdebug.h"
#include <QGridLayout>
#include <QScrollArea>
#include "nmap_xml.h"
tabEscaner::tabEscaner(NMapScan *scan,QWidget *parent) : QWidget(parent)
{
    QSignalMapper mapper;
    nmapscan = scan;//Aqui tenemos en un struct  nmapscan con los datos del escaneo
    NMap *nmap =new NMap(*scan);

    QGridLayout *gridlayout = new QGridLayout;
    QList <QPushButton*> ListButton;
    QPixmap pixmap;
    QSignalMapper *signalMapper = new QSignalMapper(this); //Lo usamos para mapear las señales de los botones
    connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(equipoLinux(int)));
    QList<Host> encontrados;
    encontrados=nmap->nmap_hosts_up_QList();
    host_encontrados=encontrados; //Pasamos a la variable global host_encontrados una lista con los host
    int columna=0,fila=0;
    for (int i=0;i < encontrados.count();i++){
       columna = (i / lineas);//Para mostrar las filas y columnas
       fila = (i % lineas);
       auto button = new QPushButton(encontrados.at(i).address.addr+"\n"+encontrados.at(i).hostnames.hostname.name);
       gridlayout->addWidget(button,fila,columna);

       switch (nmap->what_is_int(encontrados.at(i).address.addr)) {
           case 3:
               pixmap.load("/usr/share/grx/asistencia/imagenes/soporte/Windows_pc_35.png");
               break;
           case 2:
               pixmap.load("/usr/share/grx/asistencia/imagenes/soporte/Linux_pc_35.png");
               break;
           case 0:
               pixmap.load("/usr/share/grx/asistencia/imagenes/soporte/Desconocido_pc_35.png");
               break;
           case 4:
               pixmap.load("/usr/share/grx/asistencia/imagenes/soporte/Printer_pc_35.png");
               break;
           case 1:
               pixmap.load("/usr/share/grx/asistencia/imagenes/soporte/Router_35.png");
               break;
       }
       QIcon ButtonIcon(pixmap);
       button->setIcon(ButtonIcon);
       button->setIconSize(pixmap.rect().size());
       button->setFixedSize(180,60);
       ListButton << button;
       signalMapper->setMapping(ListButton[i], i);
       connect(ListButton[i], SIGNAL(released()), signalMapper, SLOT(map()));
    }
    setLayout(gridlayout);

}

void tabEscaner::equipoLinux(int i)
{
    Equipos *equipos = new Equipos(&host_encontrados.at(i));
    equipos->show();

}

