#ifndef EQUIPOS_H
#define EQUIPOS_H
#include "nmap_xml.h"
#include <QWidget>

namespace Ui {
class Equipos;
}

class Equipos : public QWidget
{
    Q_OBJECT

public:
    explicit Equipos(Host *host,QWidget *parent = 0);
    QString host_ports_open_string(Host*);
    QList <QString> host_ports_open(Host *host);
    ~Equipos();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    int puerto_libre();

    int host_ports_open_int(Host *host);

private:
    Ui::Equipos *ui;
    QString ip;
};

#endif // EQUIPOS_H
