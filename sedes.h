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
#include <QMessageBox>

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
    QSqlQueryModel *model_tlf = new QSqlQueryModel();
    bool cambiado = false;

private slots:
    void on_comboBox_NODO_activated(const QString &arg1);

    void on_comboBox_anio_activated(const QString &arg1);

    void mascaraIP();

    void cargaCombo();

    void checkBox_tresEstados(bool estado);

    void clean_checkbox();

    void consultaNodo(const QString &nombre);

    void on_pB_web_clicked();

    void boton_edicion_apagado();

    void boton_edicion_encendido();

    void on_pB_sede_clicked();

    void on_sP_tablon_clicked();

    void on_pB_portalTransparencia_clicked();

    void on_pB_bandera_clicked();

    void grabar_datos(int id);

    void on_comboBox_IP_activated(const QString &arg1);

    void on_pB_escudo_clicked();

    void on_comboBox_extension_activated(const QString &arg1);

    void on_comboBox_CP_activated(const QString &arg1);

    void on_comboBox_TLF_activated(const QString &arg1);

    void on_pb_Edicion_toggled(bool checked);

    void on_comboBox_NODO_currentIndexChanged(int index);

    bool comprueba_datos_cambiados();

    void conectar_checkbox_lineEdit();

    void cambio_estado_line();

    void cambio_estados_readonly(bool estado);

    void cambio_color(QString color);

    void checkBox_Enabled(bool estado);

    void cambio_estado_checkbox();


private:
    Ui::Sedes *ui;
    //QSqlDatabase db;
    QSqlQuery consultar;
};

#endif // SEDES_H
