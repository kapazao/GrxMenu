#ifndef SEDES_H
#define SEDES_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSqlQueryModel>
#include "QtDebug"
#include "nmap_xml.h"
#include "configuracion.h"

namespace Ui {
class Sedes;
}

class Sedes : public QWidget
{
    Q_OBJECT

public:
    explicit Sedes(QWidget *parent = 0);
    ~Sedes();
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQueryModel *model_ip = new QSqlQueryModel();
private slots:
    void on_comboBox_NODO_activated(const QString &arg1);

    void on_comboBox_anio_activated(const QString &arg1);

    void mascaraIP();

    void cargaCombo();

    void checkBox_tresEstados();

    void clean_checkbox();

    void consultaNodo(const QString &nombre);

    void on_pB_web_clicked();

    void on_pB_sede_clicked();

    void on_sP_tablon_clicked();

    void on_pB_portalTransparencia_clicked();

    void on_pB_bandera_clicked();

    void on_comboBox_IP_activated(const QString &arg1);

    void on_pB_escudo_clicked();

private:
    Ui::Sedes *ui;
    QSqlDatabase db;
    QSqlQuery consultar;
};

#endif // SEDES_H
