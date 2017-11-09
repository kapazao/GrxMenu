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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
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
    QAction *actionAcerca_de;
    QAction *actionAtalaya;
    QWidget *centralWidget;
    QFrame *frame;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *label_DB;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_ip;
    QMenuBar *menuBar;
    QMenu *menuNuevo;
    QMenu *menuAplicaciones;
    QMenu *menuAcerca_de;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Botonera)
    {
        if (Botonera->objectName().isEmpty())
            Botonera->setObjectName(QStringLiteral("Botonera"));
        Botonera->resize(1048, 184);
        actionUsuarios = new QAction(Botonera);
        actionUsuarios->setObjectName(QStringLiteral("actionUsuarios"));
        actionUsuarios->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../usr/share/grx/asistencia/iconos/usuarios.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUsuarios->setIcon(icon);
        actionUsuarios->setVisible(true);
        actionCronos = new QAction(Botonera);
        actionCronos->setObjectName(QStringLiteral("actionCronos"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../usr/share/grx/asistencia/iconos/cronos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCronos->setIcon(icon1);
        actionWebmail = new QAction(Botonera);
        actionWebmail->setObjectName(QStringLiteral("actionWebmail"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../usr/share/grx/asistencia/iconos/WebMail.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebmail->setIcon(icon2);
        actionBeiro = new QAction(Botonera);
        actionBeiro->setObjectName(QStringLiteral("actionBeiro"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../../usr/share/grx/asistencia/iconos/beiro_cartera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBeiro->setIcon(icon3);
        actionGlpi = new QAction(Botonera);
        actionGlpi->setObjectName(QStringLiteral("actionGlpi"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../../usr/share/grx/asistencia/iconos/glpi.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGlpi->setIcon(icon4);
        actionOcs = new QAction(Botonera);
        actionOcs->setObjectName(QStringLiteral("actionOcs"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../../usr/share/grx/asistencia/iconos/ocs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOcs->setIcon(icon5);
        actionActiveDirectory = new QAction(Botonera);
        actionActiveDirectory->setObjectName(QStringLiteral("actionActiveDirectory"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../../../usr/share/grx/asistencia/iconos/AD.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionActiveDirectory->setIcon(icon6);
        actionSalir = new QAction(Botonera);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../../../usr/share/grx/asistencia/iconos/salida.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalir->setIcon(icon7);
        actionNuevo_Men = new QAction(Botonera);
        actionNuevo_Men->setObjectName(QStringLiteral("actionNuevo_Men"));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../../../usr/share/grx/asistencia/iconos/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo_Men->setIcon(icon8);
        actionISL = new QAction(Botonera);
        actionISL->setObjectName(QStringLiteral("actionISL"));
        QIcon icon9;
        icon9.addFile(QStringLiteral("../../../usr/share/grx/asistencia/iconos/ISL50x50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionISL->setIcon(icon9);
        actionConfigurar = new QAction(Botonera);
        actionConfigurar->setObjectName(QStringLiteral("actionConfigurar"));
        QIcon icon10;
        icon10.addFile(QStringLiteral("../../../usr/share/grx/asistencia/iconos/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigurar->setIcon(icon10);
        actionSoporte = new QAction(Botonera);
        actionSoporte->setObjectName(QStringLiteral("actionSoporte"));
        QIcon icon11;
        icon11.addFile(QStringLiteral("../../../usr/share/grx/asistencia/iconos/equipos.gif"), QSize(), QIcon::Normal, QIcon::Off);
        actionSoporte->setIcon(icon11);
        actionSedes = new QAction(Botonera);
        actionSedes->setObjectName(QStringLiteral("actionSedes"));
        QIcon icon12;
        icon12.addFile(QStringLiteral("../../../usr/share/grx/asistencia/iconos/sedes.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSedes->setIcon(icon12);
        actionAcerca_de = new QAction(Botonera);
        actionAcerca_de->setObjectName(QStringLiteral("actionAcerca_de"));
        actionAtalaya = new QAction(Botonera);
        actionAtalaya->setObjectName(QStringLiteral("actionAtalaya"));
        QIcon icon13;
        icon13.addFile(QStringLiteral("../../../usr/share/grx/asistencia/iconos/atalaya.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAtalaya->setIcon(icon13);
        centralWidget = new QWidget(Botonera);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1041, 51));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 0, 1021, 46));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1019, 44));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Condensed"));
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);

        horizontalLayout_4->addWidget(label_6);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        label_DB = new QLabel(scrollAreaWidgetContents);
        label_DB->setObjectName(QStringLiteral("label_DB"));
        label_DB->setFont(font);

        horizontalLayout->addWidget(label_DB);

        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        label_username = new QLabel(scrollAreaWidgetContents);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setFont(font);

        horizontalLayout_3->addWidget(label_username);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        label_ip = new QLabel(scrollAreaWidgetContents);
        label_ip->setObjectName(QStringLiteral("label_ip"));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu Condensed"));
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_ip->setFont(font1);

        horizontalLayout_2->addWidget(label_ip);


        horizontalLayout_5->addLayout(horizontalLayout_2);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea->raise();
        scrollArea->raise();
        Botonera->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Botonera);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1048, 19));
        menuNuevo = new QMenu(menuBar);
        menuNuevo->setObjectName(QStringLiteral("menuNuevo"));
        menuAplicaciones = new QMenu(menuBar);
        menuAplicaciones->setObjectName(QStringLiteral("menuAplicaciones"));
        menuAcerca_de = new QMenu(menuBar);
        menuAcerca_de->setObjectName(QStringLiteral("menuAcerca_de"));
        Botonera->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Botonera);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setBaseSize(QSize(0, 0));
        mainToolBar->setIconSize(QSize(70, 70));
        Botonera->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Botonera);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        statusBar->setFont(font2);
        Botonera->setStatusBar(statusBar);

        menuBar->addAction(menuNuevo->menuAction());
        menuBar->addAction(menuAplicaciones->menuAction());
        menuBar->addAction(menuAcerca_de->menuAction());
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
        menuAcerca_de->addAction(actionAcerca_de);
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
        mainToolBar->addAction(actionAtalaya);
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
        actionAcerca_de->setText(QApplication::translate("Botonera", "&Acerca de ...", 0));
        actionAtalaya->setText(QApplication::translate("Botonera", "Atalaya", 0));
#ifndef QT_NO_TOOLTIP
        actionAtalaya->setToolTip(QApplication::translate("Botonera", "Atalaya", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("Botonera", "Ticket Kerberos", 0));
        label_6->setText(QString());
        pushButton_2->setText(QApplication::translate("Botonera", "Renovar", 0));
        label_5->setText(QApplication::translate("Botonera", "Base de Datos", 0));
        label_DB->setText(QString());
        pushButton->setText(QApplication::translate("Botonera", "Conecta DB", 0));
        label_3->setText(QApplication::translate("Botonera", "Nombre usuario", 0));
        label_username->setText(QString());
        label->setText(QApplication::translate("Botonera", "Direccion IP", 0));
        label_ip->setText(QString());
        menuNuevo->setTitle(QApplication::translate("Botonera", "Archi&vo", 0));
        menuAplicaciones->setTitle(QApplication::translate("Botonera", "Ap&licaciones", 0));
        menuAcerca_de->setTitle(QApplication::translate("Botonera", "A&yuda", 0));
    } // retranslateUi

};

namespace Ui {
    class Botonera: public Ui_Botonera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOTONERA_H
