/********************************************************************************
** Form generated from reading UI file 'equipos.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUIPOS_H
#define UI_EQUIPOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equipos
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_ip;
    QLabel *label_tipo;
    QLabel *label_puertos;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_ip;
    QLineEdit *lineEdit_tipo;
    QLineEdit *lineEdit_puertos;
    QLineEdit *lineEdit_puertosBuscados;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_hostname;
    QLabel *label_status;
    QLabel *label_8;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_hostname;
    QLineEdit *lineEdit_status;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pB_carpeta;
    QPushButton *pB_ssh;
    QPushButton *pB_vnc;
    QPushButton *pushButton_7;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pB_CUPS;
    QPushButton *pB_web;
    QPushButton *pB_webssl;
    QPushButton *pB_telnet;
    QVBoxLayout *verticalLayout;
    QPushButton *pB_systemconfig;
    QPushButton *pB_networkManager;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_14;
    QPushButton *pushButton_13;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QTextEdit *textEdit;

    void setupUi(QWidget *Equipos)
    {
        if (Equipos->objectName().isEmpty())
            Equipos->setObjectName(QStringLiteral("Equipos"));
        Equipos->resize(1038, 813);
        Equipos->setStyleSheet(QStringLiteral("\"background-color:red\""));
        gridLayout = new QGridLayout(Equipos);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(Equipos);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font;
        font.setPointSize(18);
        groupBox->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_ip = new QLabel(groupBox);
        label_ip->setObjectName(QStringLiteral("label_ip"));

        verticalLayout_3->addWidget(label_ip);

        label_tipo = new QLabel(groupBox);
        label_tipo->setObjectName(QStringLiteral("label_tipo"));

        verticalLayout_3->addWidget(label_tipo);

        label_puertos = new QLabel(groupBox);
        label_puertos->setObjectName(QStringLiteral("label_puertos"));

        verticalLayout_3->addWidget(label_puertos);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lineEdit_ip = new QLineEdit(groupBox);
        lineEdit_ip->setObjectName(QStringLiteral("lineEdit_ip"));
        lineEdit_ip->setReadOnly(true);

        verticalLayout_4->addWidget(lineEdit_ip);

        lineEdit_tipo = new QLineEdit(groupBox);
        lineEdit_tipo->setObjectName(QStringLiteral("lineEdit_tipo"));
        lineEdit_tipo->setReadOnly(true);

        verticalLayout_4->addWidget(lineEdit_tipo);

        lineEdit_puertos = new QLineEdit(groupBox);
        lineEdit_puertos->setObjectName(QStringLiteral("lineEdit_puertos"));
        lineEdit_puertos->setReadOnly(true);

        verticalLayout_4->addWidget(lineEdit_puertos);

        lineEdit_puertosBuscados = new QLineEdit(groupBox);
        lineEdit_puertosBuscados->setObjectName(QStringLiteral("lineEdit_puertosBuscados"));
        lineEdit_puertosBuscados->setReadOnly(true);

        verticalLayout_4->addWidget(lineEdit_puertosBuscados);


        horizontalLayout_2->addLayout(verticalLayout_4);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_hostname = new QLabel(groupBox);
        label_hostname->setObjectName(QStringLiteral("label_hostname"));

        verticalLayout_6->addWidget(label_hostname);

        label_status = new QLabel(groupBox);
        label_status->setObjectName(QStringLiteral("label_status"));

        verticalLayout_6->addWidget(label_status);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_6->addWidget(label_8);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_6->addWidget(label_9);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        lineEdit_hostname = new QLineEdit(groupBox);
        lineEdit_hostname->setObjectName(QStringLiteral("lineEdit_hostname"));
        lineEdit_hostname->setReadOnly(true);

        verticalLayout_5->addWidget(lineEdit_hostname);

        lineEdit_status = new QLineEdit(groupBox);
        lineEdit_status->setObjectName(QStringLiteral("lineEdit_status"));
        lineEdit_status->setReadOnly(true);

        verticalLayout_5->addWidget(lineEdit_status);

        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setReadOnly(true);

        verticalLayout_5->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setReadOnly(true);

        verticalLayout_5->addWidget(lineEdit_8);


        horizontalLayout_3->addLayout(verticalLayout_5);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_9->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pB_carpeta = new QPushButton(groupBox);
        pB_carpeta->setObjectName(QStringLiteral("pB_carpeta"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../usr/share/grx/asistencia/imagenes/equipos/carpeta_personal.png"), QSize(), QIcon::Normal, QIcon::Off);
        pB_carpeta->setIcon(icon);
        pB_carpeta->setIconSize(QSize(35, 35));

        verticalLayout_2->addWidget(pB_carpeta);

        pB_ssh = new QPushButton(groupBox);
        pB_ssh->setObjectName(QStringLiteral("pB_ssh"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../usr/share/grx/asistencia/imagenes/equipos/ssh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pB_ssh->setIcon(icon1);
        pB_ssh->setIconSize(QSize(35, 35));

        verticalLayout_2->addWidget(pB_ssh);

        pB_vnc = new QPushButton(groupBox);
        pB_vnc->setObjectName(QStringLiteral("pB_vnc"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../usr/share/grx/asistencia/imagenes/equipos/vnc.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_vnc->setIcon(icon2);
        pB_vnc->setIconSize(QSize(35, 35));

        verticalLayout_2->addWidget(pB_vnc);

        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../../usr/share/grx/asistencia/imagenes/equipos/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon3);
        pushButton_7->setIconSize(QSize(35, 35));

        verticalLayout_2->addWidget(pushButton_7);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        pB_CUPS = new QPushButton(groupBox);
        pB_CUPS->setObjectName(QStringLiteral("pB_CUPS"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../../usr/share/grx/asistencia/imagenes/equipos/cups32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pB_CUPS->setIcon(icon4);
        pB_CUPS->setIconSize(QSize(35, 35));

        verticalLayout_7->addWidget(pB_CUPS);

        pB_web = new QPushButton(groupBox);
        pB_web->setObjectName(QStringLiteral("pB_web"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../../usr/share/grx/asistencia/imagenes/equipos/web.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_web->setIcon(icon5);
        pB_web->setIconSize(QSize(35, 35));

        verticalLayout_7->addWidget(pB_web);

        pB_webssl = new QPushButton(groupBox);
        pB_webssl->setObjectName(QStringLiteral("pB_webssl"));
        pB_webssl->setIcon(icon5);
        pB_webssl->setIconSize(QSize(35, 35));

        verticalLayout_7->addWidget(pB_webssl);

        pB_telnet = new QPushButton(groupBox);
        pB_telnet->setObjectName(QStringLiteral("pB_telnet"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../../../usr/share/grx/asistencia/imagenes/equipos/telnet.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        pB_telnet->setIcon(icon6);
        pB_telnet->setIconSize(QSize(35, 35));

        verticalLayout_7->addWidget(pB_telnet);


        horizontalLayout->addLayout(verticalLayout_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pB_systemconfig = new QPushButton(groupBox);
        pB_systemconfig->setObjectName(QStringLiteral("pB_systemconfig"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../../../usr/share/grx/asistencia/imagenes/equipos/hardware.png"), QSize(), QIcon::Normal, QIcon::Off);
        pB_systemconfig->setIcon(icon7);
        pB_systemconfig->setIconSize(QSize(35, 35));

        verticalLayout->addWidget(pB_systemconfig);

        pB_networkManager = new QPushButton(groupBox);
        pB_networkManager->setObjectName(QStringLiteral("pB_networkManager"));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../../../usr/share/grx/asistencia/imagenes/equipos/net.png"), QSize(), QIcon::Normal, QIcon::Off);
        pB_networkManager->setIcon(icon8);
        pB_networkManager->setIconSize(QSize(35, 35));

        verticalLayout->addWidget(pB_networkManager);

        pushButton_12 = new QPushButton(groupBox);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        QIcon icon9;
        icon9.addFile(QStringLiteral("../../../usr/share/grx/asistencia/imagenes/equipos/procesos.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon9);
        pushButton_12->setIconSize(QSize(35, 35));

        verticalLayout->addWidget(pushButton_12);

        pushButton_11 = new QPushButton(groupBox);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        QIcon icon10;
        icon10.addFile(QStringLiteral("../../../usr/share/grx/asistencia/imagenes/usuarios/usuarios_35.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon10);
        pushButton_11->setIconSize(QSize(35, 35));

        verticalLayout->addWidget(pushButton_11);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        pushButton_14 = new QPushButton(groupBox);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        QIcon icon11;
        icon11.addFile(QStringLiteral("../../../usr/share/grx/asistencia/imagenes/equipos/discos.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_14->setIcon(icon11);
        pushButton_14->setIconSize(QSize(35, 35));

        verticalLayout_8->addWidget(pushButton_14);

        pushButton_13 = new QPushButton(groupBox);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        QIcon icon12;
        icon12.addFile(QStringLiteral("../../../usr/share/grx/asistencia/imagenes/equipos/info_equipo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon12);
        pushButton_13->setIconSize(QSize(35, 35));

        verticalLayout_8->addWidget(pushButton_13);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon13;
        icon13.addFile(QStringLiteral("../../../usr/share/grx/asistencia/imagenes/equipos/instala.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon13);
        pushButton->setIconSize(QSize(35, 35));

        verticalLayout_8->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon14;
        icon14.addFile(QStringLiteral("../../../usr/share/grx/asistencia/imagenes/equipos/konekta.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon14);
        pushButton_2->setIconSize(QSize(35, 35));

        verticalLayout_8->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_8);


        verticalLayout_9->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout_9, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        tabWidget = new QTabWidget(Equipos);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(30, 30));
        tabWidget->setTabsClosable(false);
        tabWidget->setTabBarAutoHide(false);
        tabWidget->setProperty("tabletTracking", QVariant(false));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_3->addWidget(textEdit, 0, 0, 1, 1);

        tabWidget->addTab(tab, icon6, QString());

        gridLayout->addWidget(tabWidget, 2, 0, 1, 1);


        retranslateUi(Equipos);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Equipos);
    } // setupUi

    void retranslateUi(QWidget *Equipos)
    {
        Equipos->setWindowTitle(QApplication::translate("Equipos", "Equipos", 0));
        groupBox->setTitle(QApplication::translate("Equipos", "Informaci\303\263n del Equipo", 0));
        label_ip->setText(QApplication::translate("Equipos", "IP", 0));
        label_tipo->setText(QApplication::translate("Equipos", "Tipo", 0));
        label_puertos->setText(QApplication::translate("Equipos", "Puertos abiertos", 0));
        label_4->setText(QApplication::translate("Equipos", "Puertos buscados", 0));
        label_hostname->setText(QApplication::translate("Equipos", "Hostname", 0));
        label_status->setText(QApplication::translate("Equipos", "Status", 0));
        label_8->setText(QApplication::translate("Equipos", "TextLabel", 0));
        label_9->setText(QApplication::translate("Equipos", "TextLabel", 0));
        pB_carpeta->setText(QApplication::translate("Equipos", "Carpeta", 0));
        pB_ssh->setText(QApplication::translate("Equipos", "ssh", 0));
        pB_vnc->setText(QApplication::translate("Equipos", "VNC", 0));
        pushButton_7->setText(QApplication::translate("Equipos", "Update", 0));
        pB_CUPS->setText(QApplication::translate("Equipos", "CUPS", 0));
        pB_web->setText(QApplication::translate("Equipos", "web", 0));
        pB_webssl->setText(QApplication::translate("Equipos", "web-ssl", 0));
        pB_telnet->setText(QApplication::translate("Equipos", "Telnet", 0));
        pB_systemconfig->setText(QApplication::translate("Equipos", "systemconfig", 0));
        pB_networkManager->setText(QApplication::translate("Equipos", "netmanager", 0));
        pushButton_12->setText(QApplication::translate("Equipos", "Procesos", 0));
        pushButton_11->setText(QApplication::translate("Equipos", "Usuarios", 0));
        pushButton_14->setText(QApplication::translate("Equipos", "Discos", 0));
        pushButton_13->setText(QApplication::translate("Equipos", "Equipo", 0));
        pushButton->setText(QApplication::translate("Equipos", "Instala", 0));
        pushButton_2->setText(QApplication::translate("Equipos", "Konekta", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Equipos", "Consola", 0));
    } // retranslateUi

};

namespace Ui {
    class Equipos: public Ui_Equipos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPOS_H
