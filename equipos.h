#ifndef EQUIPOS_H
#define EQUIPOS_H

#include <QWidget>

namespace Ui {
class Equipos;
}

class Equipos : public QWidget
{
    Q_OBJECT

public:
    explicit Equipos(QString ip,QWidget *parent = 0);
    ~Equipos();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    int puerto_libre();

private:
    Ui::Equipos *ui;
    QString ip;
};

#endif // EQUIPOS_H
