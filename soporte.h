#ifndef SOPORTE_H
#define SOPORTE_H
#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSqlQueryModel>
#include "QtDebug"
#include "nmap_xml.h"
#include <QNetworkRequest>
#include <QNetworkAccessManager>
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

    void on_Btn_Ping_clicked();

    void on_pushButton_4_clicked();

    void ejecuta_nmap();

    void resultados(QList<NMapScan>);

    void closeTab(int indice);

    void activa_barra_progreso();

    void desActiva_barra_progreso();

    void on_Btn_Limpiar_clicked();

    int valida_ip();

    void on_Btn_Mtr_clicked();

    void Ping();

    void on_Btn_Incidencia_clicked();

    void on_Btn_Atalaya_clicked();

   void resultado_html(QNetworkReply* p);

private:
    Ui::Soporte *ui;
    QSqlDatabase db;
    QSqlQuery consultar;
    QProcess *ping;
    QString terminal="x-terminal-emulator";
 };



#endif // SOPORTE_H
