#ifndef SOPORTE_H
#define SOPORTE_H
#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSqlQueryModel>
#include "QtDebug"
#include "nmap_xml.h"

namespace Ui {
class Soporte;
}

class Soporte : public QDialog
{
    Q_OBJECT

public:
    explicit Soporte(QWidget *parent = 0);
    ~Soporte();

private slots:
    void on_lineEdit_ip_textChanged(const QString &arg1);

    void on_cb_sede_activated(const QString &nom);

    void on_Btn_Buscar_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void ejecuta_nmap();

    void resultados(QList<QString> ip);

    void on_pushButton_5_clicked();

    void activa_barra_progreso();

    void desActiva_barra_progreso();

private:
    Ui::Soporte *ui;
    QSqlDatabase db;
    QSqlQuery consultar;
};



#endif // SOPORTE_H
