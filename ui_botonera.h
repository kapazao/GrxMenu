/********************************************************************************
** Form generated from reading UI file 'botonera.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOTONERA_H
#define UI_BOTONERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Botonera
{
public:
    QAction *actionUsuarios;
    QAction *actionCronos;
    QAction *actionWebmail;
    QAction *actionBeiro;
    QAction *actionGlpi;
    QAction *actionOcs;
    QAction *actionActiveDirectory;
    QAction *actionSalir;
    QAction *actionNuevo_Men;
    QAction *actionISL;
    QAction *actionConfigurar;
    QAction *actionSoporte;
    QAction *actionSedes;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuNuevo;
    QMenu *menuAplicaciones;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Botonera)
    {
        if (Botonera->objectName().isEmpty())
            Botonera->setObjectName(QStringLiteral("Botonera"));
        Botonera->resize(973, 142);
        actionUsuarios = new QAction(Botonera);
        actionUsuarios->setObjectName(QStringLiteral("actionUsuarios"));
        QIcon icon;
        icon.addFile(QStringLiteral("iconos/usuarios.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUsuarios->setIcon(icon);
        actionCronos = new QAction(Botonera);
        actionCronos->setObjectName(QStringLiteral("actionCronos"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("iconos/cronos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCronos->setIcon(icon1);
        actionWebmail = new QAction(Botonera);
        actionWebmail->setObjectName(QStringLiteral("actionWebmail"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("iconos/WebMail.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebmail->setIcon(icon2);
        actionBeiro = new QAction(Botonera);
        actionBeiro->setObjectName(QStringLiteral("actionBeiro"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("iconos/beiro_cartera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBeiro->setIcon(icon3);
        actionGlpi = new QAction(Botonera);
        actionGlpi->setObjectName(QStringLiteral("actionGlpi"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("iconos/glpi.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGlpi->setIcon(icon4);
        actionOcs = new QAction(Botonera);
        actionOcs->setObjectName(QStringLiteral("actionOcs"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("iconos/ocs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOcs->setIcon(icon5);
        actionActiveDirectory = new QAction(Botonera);
        actionActiveDirectory->setObjectName(QStringLiteral("actionActiveDirectory"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("iconos/AD.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionActiveDirectory->setIcon(icon6);
        actionSalir = new QAction(Botonera);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("iconos/salida.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalir->setIcon(icon7);
        actionNuevo_Men = new QAction(Botonera);
        actionNuevo_Men->setObjectName(QStringLiteral("actionNuevo_Men"));
        actionISL = new QAction(Botonera);
        actionISL->setObjectName(QStringLiteral("actionISL"));
        QIcon icon8;
        icon8.addFile(QStringLiteral("iconos/ISL50x50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionISL->setIcon(icon8);
        actionConfigurar = new QAction(Botonera);
        actionConfigurar->setObjectName(QStringLiteral("actionConfigurar"));
        QIcon icon9;
        icon9.addFile(QStringLiteral("iconos/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigurar->setIcon(icon9);
        actionSoporte = new QAction(Botonera);
        actionSoporte->setObjectName(QStringLiteral("actionSoporte"));
        QIcon icon10;
        icon10.addFile(QStringLiteral("iconos/equipos.gif"), QSize(), QIcon::Normal, QIcon::Off);
        actionSoporte->setIcon(icon10);
        actionSedes = new QAction(Botonera);
        actionSedes->setObjectName(QStringLiteral("actionSedes"));
        QIcon icon11;
        icon11.addFile(QStringLiteral("iconos/sedes.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSedes->setIcon(icon11);
        centralWidget = new QWidget(Botonera);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Botonera->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Botonera);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 973, 19));
        menuNuevo = new QMenu(menuBar);
        menuNuevo->setObjectName(QStringLiteral("menuNuevo"));
        menuAplicaciones = new QMenu(menuBar);
        menuAplicaciones->setObjectName(QStringLiteral("menuAplicaciones"));
        Botonera->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Botonera);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setBaseSize(QSize(0, 0));
        mainToolBar->setIconSize(QSize(70, 70));
        Botonera->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Botonera);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Botonera->setStatusBar(statusBar);

        menuBar->addAction(menuNuevo->menuAction());
        menuBar->addAction(menuAplicaciones->menuAction());
        menuNuevo->addAction(actionNuevo_Men);
        menuNuevo->addSeparator();
        menuNuevo->addAction(actionSalir);
        menuAplicaciones->addAction(actionUsuarios);
        menuAplicaciones->addAction(actionSoporte);
        menuAplicaciones->addAction(actionCronos);
        menuAplicaciones->addAction(actionWebmail);
        menuAplicaciones->addAction(actionBeiro);
        menuAplicaciones->addAction(actionGlpi);
        menuAplicaciones->addAction(actionOcs);
        menuAplicaciones->addAction(actionActiveDirectory);
        menuAplicaciones->addAction(actionISL);
        menuAplicaciones->addAction(actionConfigurar);
        mainToolBar->addAction(actionUsuarios);
        mainToolBar->addAction(actionSoporte);
        mainToolBar->addAction(actionSedes);
        mainToolBar->addAction(actionCronos);
        mainToolBar->addAction(actionWebmail);
        mainToolBar->addAction(actionBeiro);
        mainToolBar->addAction(actionGlpi);
        mainToolBar->addAction(actionOcs);
        mainToolBar->addAction(actionActiveDirectory);
        mainToolBar->addAction(actionISL);
        mainToolBar->addAction(actionConfigurar);
        mainToolBar->addAction(actionSalir);

        retranslateUi(Botonera);

        QMetaObject::connectSlotsByName(Botonera);
    } // setupUi

    void retranslateUi(QMainWindow *Botonera)
    {
        Botonera->setWindowTitle(QApplication::translate("Botonera", "Botonera", 0));
        actionUsuarios->setText(QApplication::translate("Botonera", "&Usuarios", 0));
#ifndef QT_NO_TOOLTIP
        actionUsuarios->setToolTip(QApplication::translate("Botonera", "Usuarios", 0));
#endif // QT_NO_TOOLTIP
        actionUsuarios->setShortcut(QApplication::translate("Botonera", "Ctrl+F1", 0));
        actionCronos->setText(QApplication::translate("Botonera", "&Cronos", 0));
#ifndef QT_NO_TOOLTIP
        actionCronos->setToolTip(QApplication::translate("Botonera", "Cronos", 0));
#endif // QT_NO_TOOLTIP
        actionCronos->setShortcut(QApplication::translate("Botonera", "Ctrl+F2", 0));
        actionWebmail->setText(QApplication::translate("Botonera", "&Webmail", 0));
#ifndef QT_NO_TOOLTIP
        actionWebmail->setToolTip(QApplication::translate("Botonera", "Webmail", 0));
#endif // QT_NO_TOOLTIP
        actionWebmail->setShortcut(QApplication::translate("Botonera", "Ctrl+F3", 0));
        actionBeiro->setText(QApplication::translate("Botonera", "&Beiro", 0));
#ifndef QT_NO_TOOLTIP
        actionBeiro->setToolTip(QApplication::translate("Botonera", "Beiro", 0));
#endif // QT_NO_TOOLTIP
        actionBeiro->setShortcut(QApplication::translate("Botonera", "Ctrl+F4", 0));
        actionGlpi->setText(QApplication::translate("Botonera", "&Glpi", 0));
#ifndef QT_NO_TOOLTIP
        actionGlpi->setToolTip(QApplication::translate("Botonera", "Glpi", 0));
#endif // QT_NO_TOOLTIP
        actionGlpi->setShortcut(QApplication::translate("Botonera", "Ctrl+F5", 0));
        actionOcs->setText(QApplication::translate("Botonera", "&Ocs", 0));
#ifndef QT_NO_TOOLTIP
        actionOcs->setToolTip(QApplication::translate("Botonera", "Ocs", 0));
#endif // QT_NO_TOOLTIP
        actionOcs->setShortcut(QApplication::translate("Botonera", "Ctrl+F6", 0));
        actionActiveDirectory->setText(QApplication::translate("Botonera", "&activeDirectory", 0));
#ifndef QT_NO_TOOLTIP
        actionActiveDirectory->setToolTip(QApplication::translate("Botonera", "Active Directory", 0));
#endif // QT_NO_TOOLTIP
        actionActiveDirectory->setShortcut(QApplication::translate("Botonera", "Ctrl+F7", 0));
        actionSalir->setText(QApplication::translate("Botonera", "&Salir", 0));
#ifndef QT_NO_TOOLTIP
        actionSalir->setToolTip(QApplication::translate("Botonera", "Salir", 0));
#endif // QT_NO_TOOLTIP
        actionSalir->setShortcut(QApplication::translate("Botonera", "Ctrl+F8", 0));
        actionNuevo_Men->setText(QApplication::translate("Botonera", "&Nueva Botonera", 0));
        actionISL->setText(QApplication::translate("Botonera", "&ISL", 0));
#ifndef QT_NO_TOOLTIP
        actionISL->setToolTip(QApplication::translate("Botonera", "ISLlight", 0));
#endif // QT_NO_TOOLTIP
        actionISL->setShortcut(QApplication::translate("Botonera", "Ctrl+9", 0));
        actionConfigurar->setText(QApplication::translate("Botonera", "Co&nfigurar", 0));
        actionSoporte->setText(QApplication::translate("Botonera", "&Soporte", 0));
#ifndef QT_NO_TOOLTIP
        actionSoporte->setToolTip(QApplication::translate("Botonera", "Soporte", 0));
#endif // QT_NO_TOOLTIP
        actionSedes->setText(QApplication::translate("Botonera", "Sedes", 0));
        menuNuevo->setTitle(QApplication::translate("Botonera", "Ar&chivo", 0));
        menuAplicaciones->setTitle(QApplication::translate("Botonera", "Ap&licaciones", 0));
    } // retranslateUi

};

namespace Ui {
    class Botonera: public Ui_Botonera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOTONERA_H