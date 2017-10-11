#include "botonera.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Botonera w;
    w.setFixedSize(1000,115);
    w.show();
    return a.exec();
}
