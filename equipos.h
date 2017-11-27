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
    QList <QString> host_ports_open(Host *host);
    ~Equipos();

private slots:

    int puerto_libre();

    int host_ports_open_int(Host *host);

    void on_pB_carpeta_clicked();

    void on_pB_web_clicked();

    void on_pB_webssl_clicked();

    void on_pB_telnet_clicked();

    void on_pB_ssh_clicked();

    void on_pB_systemconfig_clicked();

    void on_pB_networkManager_clicked();

    void on_pB_cups_clicked();

    void on_pB_vnc_clicked();

    void on_pushButton_12_clicked();

private:
    Ui::Equipos *ui;
    QString ip;
    Host *host_tmp;
};

#endif // EQUIPOS_H
