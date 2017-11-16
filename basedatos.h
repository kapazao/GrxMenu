#ifndef BASEDATOS_H
#define BASEDATOS_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSqlQueryModel>
#include <QMessageBox>
namespace Ui {
class BaseDatos;
}

class BaseDatos : public QMainWindow
{
    Q_OBJECT

public:
    explicit BaseDatos(QWidget *parent = 0);
    ~BaseDatos();
    QSqlQueryModel *model_municipio = new QSqlQueryModel();
    QSqlQueryModel *model_nodo = new QSqlQueryModel();
    QSqlQueryModel *model_poblacion = new QSqlQueryModel();
    QSqlQueryModel *model_programa = new QSqlQueryModel();
    QSqlQueryModel *model_emailnodo = new QSqlQueryModel();
    QSqlQueryModel *model_telefononodo = new QSqlQueryModel();
    QSqlQueryModel *model_comarca = new QSqlQueryModel();
    QSqlQueryModel *model_mancomunidad = new QSqlQueryModel();
    QSqlQueryModel *model_centro = new QSqlQueryModel();
    QSqlQueryModel *model_diafestivopoblacion = new QSqlQueryModel();
    QSqlQueryModel *model_aplicaciones = new QSqlQueryModel();

private slots:
    void cabeceras();
    void inicia();
private:
    Ui::BaseDatos *ui;
};

#endif // BASEDATOS_H
