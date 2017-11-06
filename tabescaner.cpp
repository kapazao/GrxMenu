#include "tabescaner.h"
#include "equipos.h"
#include "QPushButton"
#include "QSignalMapper"
#include "qdebug.h"
tabEscaner::tabEscaner(NMapScan *scan,QWidget *parent) : QWidget(parent)
{
    QSignalMapper mapper;
    nmapscan = scan;
    NMap *nmap =new NMap(*scan);

    int num_host = nmapscan;
    QHBoxLayout *mainLayout = new QHBoxLayout;
    QList <QPushButton*> ListButton;
    QPixmap pixmap;
    QSignalMapper *signalMapper = new QSignalMapper(this);
    connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(equipoLinux(int)));


    QList<Host> encontrados;
    encontrados=nmap->nmap_hosts_up_QList();
    host_encontrados=encontrados;
    for (int i=0;i<encontrados.count();i++){
       auto button = new QPushButton(QString::number(i),this);
       switch (nmap->what_is_int(encontrados.at(i).address.addr)) {
           case 3:
               pixmap.load("/home/alberto/GrxMenu/iconos/Windows_pc.png");
               break;
           case 2:
               pixmap.load("/home/alberto/GrxMenu/iconos/Linux_pc.png");
               break;
           case 0:
               pixmap.load("/home/alberto/GrxMenu/iconos/Desconocido.png");
               break;
           case 4:
               pixmap.load("/home/alberto/GrxMenu/iconos/Printer_pc.png");
               break;
           case 1:
               pixmap.load("/home/alberto/GrxMenu/iconos/Router.png");
               break;
       }
       QIcon ButtonIcon(pixmap);
       button->setIcon(ButtonIcon);
       button->setIconSize(pixmap.rect().size());
       button->setFixedSize(80,80);
       ListButton << button;
       mainLayout->addWidget(button);
       signalMapper->setMapping(ListButton[i], i);
       connect(ListButton[i], SIGNAL(released()), signalMapper, SLOT(map()));
    }


    QLabel *label_num_host = new QLabel(QString::number(encontrados.count()));
    mainLayout->addWidget(label_num_host);

    mainLayout->addStretch(1);
    setLayout(mainLayout);

}

void tabEscaner::equipoLinux(int i)
{
    Equipos *equipos = new Equipos(&host_encontrados.at(i));
    equipos->show();

}

