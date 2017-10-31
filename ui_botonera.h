/********************************************************************************
** Form generated from reading UI file 'botonera.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QLabel *label_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
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
    QLabel *label;
    QLabel *label_ip;
    QLabel *label_7;
    QLabel *label_GW;
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
        Botonera->resize(1143, 563);
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
        actionAcerca_de = new QAction(Botonera);
        actionAcerca_de->setObjectName(QStringLiteral("actionAcerca_de"));
        actionAtalaya = new QAction(Botonera);
        actionAtalaya->setObjectName(QStringLiteral("actionAtalaya"));
        QIcon icon12;
        icon12.addFile(QStringLiteral("iconos/solarwind.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAtalaya->setIcon(icon12);
        centralWidget = new QWidget(Botonera);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(9, 9, 317, 36));
        QFont font;
        font.setPointSize(23);
        label_2->setFont(font);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 70, 792, 44));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu Condensed"));
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);

        horizontalLayout_4->addWidget(label_6);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);


        horizontalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        label_DB = new QLabel(frame);
        label_DB->setObjectName(QStringLiteral("label_DB"));
        label_DB->setFont(font1);

        horizontalLayout->addWidget(label_DB);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        label_username = new QLabel(frame);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setFont(font1);

        horizontalLayout_3->addWidget(label_username);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        label_ip = new QLabel(frame);
        label_ip->setObjectName(QStringLiteral("label_ip"));
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu Condensed"));
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_ip->setFont(font2);

        horizontalLayout_2->addWidget(label_ip);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        label_GW = new QLabel(frame);
        label_GW->setObjectName(QStringLiteral("label_GW"));

        horizontalLayout_2->addWidget(label_GW);

        Botonera->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Botonera);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1143, 19));
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
        Botonera->setWindowTitle(QApplication::translate("Botonera", "Botonera", Q_NULLPTR));
        actionUsuarios->setText(QApplication::translate("Botonera", "&Usuarios", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionUsuarios->setToolTip(QApplication::translate("Botonera", "Usuarios", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionUsuarios->setShortcut(QApplication::translate("Botonera", "Ctrl+F1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCronos->setText(QApplication::translate("Botonera", "&Cronos", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCronos->setToolTip(QApplication::translate("Botonera", "Cronos", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionCronos->setShortcut(QApplication::translate("Botonera", "Ctrl+F2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionWebmail->setText(QApplication::translate("Botonera", "&Webmail", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionWebmail->setToolTip(QApplication::translate("Botonera", "Webmail", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionWebmail->setShortcut(QApplication::translate("Botonera", "Ctrl+F3", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionBeiro->setText(QApplication::translate("Botonera", "&Beiro", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionBeiro->setToolTip(QApplication::translate("Botonera", "Beiro", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionBeiro->setShortcut(QApplication::translate("Botonera", "Ctrl+F4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionGlpi->setText(QApplication::translate("Botonera", "&Glpi", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionGlpi->setToolTip(QApplication::translate("Botonera", "Glpi", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionGlpi->setShortcut(QApplication::translate("Botonera", "Ctrl+F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionOcs->setText(QApplication::translate("Botonera", "&Ocs", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOcs->setToolTip(QApplication::translate("Botonera", "Ocs", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOcs->setShortcut(QApplication::translate("Botonera", "Ctrl+F6", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionActiveDirectory->setText(QApplication::translate("Botonera", "&activeDirectory", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionActiveDirectory->setToolTip(QApplication::translate("Botonera", "Active Directory", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionActiveDirectory->setShortcut(QApplication::translate("Botonera", "Ctrl+F7", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSalir->setText(QApplication::translate("Botonera", "&Salir", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSalir->setToolTip(QApplication::translate("Botonera", "Salir", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSalir->setShortcut(QApplication::translate("Botonera", "Ctrl+F8", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionNuevo_Men->setText(QApplication::translate("Botonera", "&Nueva Botonera", Q_NULLPTR));
        actionISL->setText(QApplication::translate("Botonera", "&ISL", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionISL->setToolTip(QApplication::translate("Botonera", "ISLlight", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionISL->setShortcut(QApplication::translate("Botonera", "Ctrl+9", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionConfigurar->setText(QApplication::translate("Botonera", "Co&nfigurar", Q_NULLPTR));
        actionSoporte->setText(QApplication::translate("Botonera", "&Soporte", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSoporte->setToolTip(QApplication::translate("Botonera", "Soporte", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSedes->setText(QApplication::translate("Botonera", "Sedes", Q_NULLPTR));
        actionAcerca_de->setText(QApplication::translate("Botonera", "Acerca de ...", Q_NULLPTR));
        actionAtalaya->setText(QApplication::translate("Botonera", "Atalaya", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAtalaya->setToolTip(QApplication::translate("Botonera", "Atalaya", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("Botonera", "Informaci\303\263n General", Q_NULLPTR));
        label_4->setText(QApplication::translate("Botonera", "Ticket Kerberos", Q_NULLPTR));
        label_6->setText(QApplication::translate("Botonera", "TextLabel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Botonera", "Renovar", Q_NULLPTR));
        label_5->setText(QApplication::translate("Botonera", "Base de Datos", Q_NULLPTR));
        label_DB->setText(QApplication::translate("Botonera", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Botonera", "Conecta DB", Q_NULLPTR));
        label_3->setText(QApplication::translate("Botonera", "Nombre usuario", Q_NULLPTR));
        label_username->setText(QApplication::translate("Botonera", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("Botonera", "Direccion IP", Q_NULLPTR));
        label_ip->setText(QApplication::translate("Botonera", "IP", Q_NULLPTR));
        label_7->setText(QApplication::translate("Botonera", "Gateway", Q_NULLPTR));
        label_GW->setText(QString());
        menuNuevo->setTitle(QApplication::translate("Botonera", "Ar&chivo", Q_NULLPTR));
        menuAplicaciones->setTitle(QApplication::translate("Botonera", "Ap&licaciones", Q_NULLPTR));
        menuAcerca_de->setTitle(QApplication::translate("Botonera", "Ayuda", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Botonera: public Ui_Botonera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOTONERA_H
