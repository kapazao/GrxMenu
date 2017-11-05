#ifndef TABESCANER_H
#define TABESCANER_H

#include <QWidget>
#include "qlabel.h"
#include "qlineedit.h"
#include "qfileinfo.h"
#include "QVBoxLayout"
#include "nmap_xml.h"
class tabEscaner : public QWidget
{
    Q_OBJECT
public:
    explicit tabEscaner(NMapScan *nmapscan,QWidget *parent = nullptr);
signals:

public slots:
    void equipoLinux(Host host);
};



class ClickableLabel : public QLabel {
    Q_OBJECT

public:
    explicit ClickableLabel(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    ~ClickableLabel();

signals:
    void clicked();

protected:
    void mousePressEvent(QMouseEvent* event);

};



#endif // TABESCANER_H
