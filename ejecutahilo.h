#ifndef EJECUTAHILO_H
#define EJECUTAHILO_H
#include <QThread>
#include <QObject>
class ejecutaHilo : public QThread
{
Q_OBJECT
public:
   explicit ejecutaHilo(QString ip);
   void ejecuta();
   QString ip;

signals:
    //void resultadoListo(QString s);
   void resultadoListo(QList<QString>);
};

#endif // EJECUTAHILO_H
