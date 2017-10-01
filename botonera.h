#ifndef BOTONERA_H
#define BOTONERA_H

#include <QMainWindow>
#include <QSettings>
#include <QStandardPaths>
#include "QProcess"
#include "configuracion.h"
#include "QtDebug"

namespace Ui {
class Botonera;
}

class Botonera : public QMainWindow
{
    Q_OBJECT

public:
    explicit Botonera(QWidget *parent = 0);
    ~Botonera();

private slots:
    void on_actionUsuarios_triggered();

    void on_actionSalir_triggered();

    void on_actionCronos_triggered();

    void on_actionWebmail_triggered();

    void on_actionBeiro_triggered();

    void on_actionGlpi_triggered();

    void on_actionActiveDirectory_triggered();

    void on_actionISL_triggered();

    void on_actionConfigurar_triggered();

    void on_actionNuevo_Men_triggered();

    void on_actionSedes_triggered();

    void on_actionSoporte_triggered();


private:
    Ui::Botonera *ui;

};

#endif // BOTONERA_H
