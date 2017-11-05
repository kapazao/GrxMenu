#include "tabescaner.h"
#include "equipos.h"
tabEscaner::tabEscaner(NMapScan *nmapscan,QWidget *parent) : QWidget(parent)
{
    int num_host = nmapscan->host.count();
    QVBoxLayout *mainLayout = new QVBoxLayout;
    for (int i=0;i<num_host;i++){
       ClickableLabel *host_find = new ClickableLabel();
       host_find->setPixmap(QPixmap("/home/alberto/GrxMenu/iconos/Router.png"));
       host_find->move(100, 10);
       host_find->show();
       host_find->setAttribute(Qt::WA_DeleteOnClose);
       mainLayout->addWidget(host_find);
       connect (host_find,SIGNAL(clicked()),this,SLOT(equipoLinux(nmapscan->host(i))));
    }
    //QLabel *host_find = new QLabel(nmapscan->nmaprun.hosts_find);

    QLabel *label_num_host = new QLabel(QString::number(num_host));

    mainLayout->addWidget(label_num_host);

    mainLayout->addStretch(1);
    setLayout(mainLayout);

}

void tabEscaner::equipoLinux(Host host)
{
    int tmp=host.ports.port.count();
    Equipos *ulinux = new Equipos(host.address.addr);
    for (int i=0;i<tmp;i++){
    host.ports.port.at(i).portid;
    }

    ulinux->show();

}


ClickableLabel::ClickableLabel(QWidget* parent, Qt::WindowFlags f)
    : QLabel(parent) {

}

ClickableLabel::~ClickableLabel() {}

void ClickableLabel::mousePressEvent(QMouseEvent* event) {
    emit clicked();
}
