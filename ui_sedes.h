/********************************************************************************
** Form generated from reading UI file 'sedes.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEDES_H
#define UI_SEDES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sedes
{
public:
    QFrame *frame;
    QLabel *label_2;
    QComboBox *comboBox_IP;
    QComboBox *comboBox_NODO;
    QLabel *label;
    QFrame *frame_3;
    QLineEdit *lineEdit_contacto;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QComboBox *comboBox_email;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *comboBox_telefonos;
    QLineEdit *lineEdit_extension;
    QLineEdit *lineEdit_fax;
    QLineEdit *lineEdit_movil;
    QFrame *frame_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *lineEdit_via;
    QLineEdit *lineEdit_direccion;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_cp;
    QLineEdit *lineEdit_municipio;
    QLineEdit *lineEdit_latitud;
    QLineEdit *lineEdit_longitud;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *lineEdit_numero;
    QLineEdit *lineEdit_puerta;
    QLineEdit *lineEdit_piso;
    QLineEdit *lineEdit_letra;
    QFrame *frame_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_22;
    QLabel *label_21;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_23;
    QLabel *label_24;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_adsl;
    QLineEdit *lineEdit_n_adm;
    QLineEdit *lineEdit_ip_cifrado;
    QLineEdit *lineEdit_servicio;
    QLineEdit *lineEdit_caudal;
    QLineEdit *lineEdit_equipamiento;
    QFrame *frame_5;
    QLabel *label_25;
    QLabel *label_26;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_mancomunidad;
    QLineEdit *lineEdit_comarca;
    QFrame *frame_6;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_27;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_cif;
    QLineEdit *lineEdit_dir3;
    QLineEdit *lineEdit_ine;
    QFrame *frame_7;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pB_web;
    QPushButton *pB_bandera;
    QPushButton *pB_escudo;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_web;
    QLineEdit *lineEdit_bandera;
    QLineEdit *lineEdit_escudo;
    QFrame *frame_8;
    QLabel *label_31;
    QLabel *label_32;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_habitantes;
    QLineEdit *lineEdit_superficie;
    QWidget *layoutWidget7;
    QGridLayout *gridLayout_2;
    QLabel *label_33;
    QLabel *label_36;
    QLabel *label_37;
    QLineEdit *lineEdit_altitud;
    QLineEdit *lineEdit_latitud_municipio;
    QLineEdit *lineEdit_longitud_municipio;
    QFrame *frame_9;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pB_sede;
    QPushButton *sP_tablon;
    QPushButton *pB_portalTransparencia;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_sede;
    QLineEdit *lineEdit_tablon;
    QLineEdit *lineEdit_portar_transparencia;
    QFrame *frame_10;
    QLabel *label_30;
    QLabel *label_41;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_52;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    QFrame *line;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_8;
    QFrame *line_9;
    QCheckBox *checkBox_portal_web;
    QCheckBox *checkBox_correo;
    QCheckBox *checkBox_basedatos_juridica;
    QCheckBox *checkBox_suscripcion;
    QCheckBox *checkBox_perfil_contratante;
    QCheckBox *checkBox_gestion_municipal;
    QCheckBox *checkBox_gestion_economica;
    QCheckBox *checkBox_soporte;
    QCheckBox *checkBox_sede_electronica;
    QCheckBox *checkBox_epol;
    QCheckBox *checkBox_epol_movil;
    QCheckBox *checkBox_siapol;
    QLabel *label_44;
    QComboBox *comboBox_anio;

    void setupUi(QWidget *Sedes)
    {
        if (Sedes->objectName().isEmpty())
            Sedes->setObjectName(QStringLiteral("Sedes"));
        Sedes->setEnabled(true);
        Sedes->resize(1270, 830);
        frame = new QFrame(Sedes);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 20, 1251, 51));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(311, 15, 16, 17));
        comboBox_IP = new QComboBox(frame);
        comboBox_IP->setObjectName(QStringLiteral("comboBox_IP"));
        comboBox_IP->setGeometry(QRect(330, 10, 281, 27));
        comboBox_IP->setEditable(true);
        comboBox_NODO = new QComboBox(frame);
        comboBox_NODO->setObjectName(QStringLiteral("comboBox_NODO"));
        comboBox_NODO->setGeometry(QRect(53, 10, 251, 27));
        comboBox_NODO->setEditable(true);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 15, 38, 17));
        frame_3 = new QFrame(Sedes);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 250, 621, 111));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        lineEdit_contacto = new QLineEdit(frame_3);
        lineEdit_contacto->setObjectName(QStringLiteral("lineEdit_contacto"));
        lineEdit_contacto->setGeometry(QRect(10, 20, 291, 27));
        label_11 = new QLabel(frame_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 2, 231, 17));
        label_12 = new QLabel(frame_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 50, 71, 17));
        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(110, 50, 71, 17));
        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(280, 50, 62, 17));
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(450, 50, 62, 17));
        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(310, 2, 231, 17));
        comboBox_email = new QComboBox(frame_3);
        comboBox_email->setObjectName(QStringLiteral("comboBox_email"));
        comboBox_email->setGeometry(QRect(310, 20, 301, 27));
        comboBox_email->setEditable(true);
        layoutWidget = new QWidget(frame_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 601, 34));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        comboBox_telefonos = new QComboBox(layoutWidget);
        comboBox_telefonos->setObjectName(QStringLiteral("comboBox_telefonos"));
        comboBox_telefonos->setEditable(true);

        horizontalLayout_6->addWidget(comboBox_telefonos);

        lineEdit_extension = new QLineEdit(layoutWidget);
        lineEdit_extension->setObjectName(QStringLiteral("lineEdit_extension"));

        horizontalLayout_6->addWidget(lineEdit_extension);

        lineEdit_fax = new QLineEdit(layoutWidget);
        lineEdit_fax->setObjectName(QStringLiteral("lineEdit_fax"));

        horizontalLayout_6->addWidget(lineEdit_fax);

        lineEdit_movil = new QLineEdit(layoutWidget);
        lineEdit_movil->setObjectName(QStringLiteral("lineEdit_movil"));

        horizontalLayout_6->addWidget(lineEdit_movil);

        frame_2 = new QFrame(Sedes);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 80, 621, 171));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(314, 50, 29, 17));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 110, 56, 17));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(160, 110, 71, 17));
        label_17 = new QLabel(frame_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(314, 110, 71, 17));
        label_18 = new QLabel(frame_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(470, 110, 71, 17));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 3, 53, 17));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 3, 64, 17));
        lineEdit_via = new QLineEdit(frame_2);
        lineEdit_via->setObjectName(QStringLiteral("lineEdit_via"));
        lineEdit_via->setGeometry(QRect(11, 23, 142, 25));
        lineEdit_direccion = new QLineEdit(frame_2);
        lineEdit_direccion->setObjectName(QStringLiteral("lineEdit_direccion"));
        lineEdit_direccion->setGeometry(QRect(160, 23, 451, 25));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 50, 56, 17));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(466, 50, 36, 17));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(162, 50, 46, 17));
        layoutWidget1 = new QWidget(frame_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 130, 604, 34));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        lineEdit_cp = new QLineEdit(layoutWidget1);
        lineEdit_cp->setObjectName(QStringLiteral("lineEdit_cp"));

        horizontalLayout_8->addWidget(lineEdit_cp);

        lineEdit_municipio = new QLineEdit(layoutWidget1);
        lineEdit_municipio->setObjectName(QStringLiteral("lineEdit_municipio"));

        horizontalLayout_8->addWidget(lineEdit_municipio);

        lineEdit_latitud = new QLineEdit(layoutWidget1);
        lineEdit_latitud->setObjectName(QStringLiteral("lineEdit_latitud"));

        horizontalLayout_8->addWidget(lineEdit_latitud);

        lineEdit_longitud = new QLineEdit(layoutWidget1);
        lineEdit_longitud->setObjectName(QStringLiteral("lineEdit_longitud"));

        horizontalLayout_8->addWidget(lineEdit_longitud);

        layoutWidget2 = new QWidget(frame_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 70, 604, 34));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        lineEdit_numero = new QLineEdit(layoutWidget2);
        lineEdit_numero->setObjectName(QStringLiteral("lineEdit_numero"));

        horizontalLayout_9->addWidget(lineEdit_numero);

        lineEdit_puerta = new QLineEdit(layoutWidget2);
        lineEdit_puerta->setObjectName(QStringLiteral("lineEdit_puerta"));

        horizontalLayout_9->addWidget(lineEdit_puerta);

        lineEdit_piso = new QLineEdit(layoutWidget2);
        lineEdit_piso->setObjectName(QStringLiteral("lineEdit_piso"));

        horizontalLayout_9->addWidget(lineEdit_piso);

        lineEdit_letra = new QLineEdit(layoutWidget2);
        lineEdit_letra->setObjectName(QStringLiteral("lineEdit_letra"));

        horizontalLayout_9->addWidget(lineEdit_letra);

        frame_4 = new QFrame(Sedes);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(640, 80, 621, 181));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        layoutWidget_2 = new QWidget(frame_4);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 601, 161));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_22 = new QLabel(layoutWidget_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        verticalLayout->addWidget(label_22);

        label_21 = new QLabel(layoutWidget_2);
        label_21->setObjectName(QStringLiteral("label_21"));

        verticalLayout->addWidget(label_21);

        label_19 = new QLabel(layoutWidget_2);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout->addWidget(label_19);

        label_20 = new QLabel(layoutWidget_2);
        label_20->setObjectName(QStringLiteral("label_20"));

        verticalLayout->addWidget(label_20);

        label_23 = new QLabel(layoutWidget_2);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout->addWidget(label_23);

        label_24 = new QLabel(layoutWidget_2);
        label_24->setObjectName(QStringLiteral("label_24"));

        verticalLayout->addWidget(label_24);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_adsl = new QLineEdit(layoutWidget_2);
        lineEdit_adsl->setObjectName(QStringLiteral("lineEdit_adsl"));

        verticalLayout_2->addWidget(lineEdit_adsl);

        lineEdit_n_adm = new QLineEdit(layoutWidget_2);
        lineEdit_n_adm->setObjectName(QStringLiteral("lineEdit_n_adm"));

        verticalLayout_2->addWidget(lineEdit_n_adm);

        lineEdit_ip_cifrado = new QLineEdit(layoutWidget_2);
        lineEdit_ip_cifrado->setObjectName(QStringLiteral("lineEdit_ip_cifrado"));

        verticalLayout_2->addWidget(lineEdit_ip_cifrado);

        lineEdit_servicio = new QLineEdit(layoutWidget_2);
        lineEdit_servicio->setObjectName(QStringLiteral("lineEdit_servicio"));

        verticalLayout_2->addWidget(lineEdit_servicio);

        lineEdit_caudal = new QLineEdit(layoutWidget_2);
        lineEdit_caudal->setObjectName(QStringLiteral("lineEdit_caudal"));

        verticalLayout_2->addWidget(lineEdit_caudal);

        lineEdit_equipamiento = new QLineEdit(layoutWidget_2);
        lineEdit_equipamiento->setObjectName(QStringLiteral("lineEdit_equipamiento"));

        verticalLayout_2->addWidget(lineEdit_equipamiento);


        horizontalLayout->addLayout(verticalLayout_2);

        frame_5 = new QFrame(Sedes);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(10, 360, 621, 61));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_25 = new QLabel(frame_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 2, 141, 17));
        label_26 = new QLabel(frame_5);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(320, 2, 151, 17));
        layoutWidget3 = new QWidget(frame_5);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 601, 34));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_mancomunidad = new QLineEdit(layoutWidget3);
        lineEdit_mancomunidad->setObjectName(QStringLiteral("lineEdit_mancomunidad"));

        horizontalLayout_2->addWidget(lineEdit_mancomunidad);

        lineEdit_comarca = new QLineEdit(layoutWidget3);
        lineEdit_comarca->setObjectName(QStringLiteral("lineEdit_comarca"));

        horizontalLayout_2->addWidget(lineEdit_comarca);

        frame_6 = new QFrame(Sedes);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(640, 266, 621, 61));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        label_28 = new QLabel(frame_6);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(212, 0, 29, 17));
        label_29 = new QLabel(frame_6);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(415, 0, 22, 17));
        label_27 = new QLabel(frame_6);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 0, 19, 17));
        layoutWidget4 = new QWidget(frame_6);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 20, 601, 34));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        lineEdit_cif = new QLineEdit(layoutWidget4);
        lineEdit_cif->setObjectName(QStringLiteral("lineEdit_cif"));

        horizontalLayout_7->addWidget(lineEdit_cif);

        lineEdit_dir3 = new QLineEdit(layoutWidget4);
        lineEdit_dir3->setObjectName(QStringLiteral("lineEdit_dir3"));

        horizontalLayout_7->addWidget(lineEdit_dir3);

        lineEdit_ine = new QLineEdit(layoutWidget4);
        lineEdit_ine->setObjectName(QStringLiteral("lineEdit_ine"));

        horizontalLayout_7->addWidget(lineEdit_ine);

        frame_7 = new QFrame(Sedes);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(640, 332, 621, 101));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        layoutWidget5 = new QWidget(frame_7);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(11, 10, 601, 91));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pB_web = new QPushButton(layoutWidget5);
        pB_web->setObjectName(QStringLiteral("pB_web"));

        verticalLayout_3->addWidget(pB_web);

        pB_bandera = new QPushButton(layoutWidget5);
        pB_bandera->setObjectName(QStringLiteral("pB_bandera"));

        verticalLayout_3->addWidget(pB_bandera);

        pB_escudo = new QPushButton(layoutWidget5);
        pB_escudo->setObjectName(QStringLiteral("pB_escudo"));

        verticalLayout_3->addWidget(pB_escudo);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        lineEdit_web = new QLineEdit(layoutWidget5);
        lineEdit_web->setObjectName(QStringLiteral("lineEdit_web"));

        verticalLayout_5->addWidget(lineEdit_web);

        lineEdit_bandera = new QLineEdit(layoutWidget5);
        lineEdit_bandera->setObjectName(QStringLiteral("lineEdit_bandera"));

        verticalLayout_5->addWidget(lineEdit_bandera);

        lineEdit_escudo = new QLineEdit(layoutWidget5);
        lineEdit_escudo->setObjectName(QStringLiteral("lineEdit_escudo"));

        verticalLayout_5->addWidget(lineEdit_escudo);


        horizontalLayout_4->addLayout(verticalLayout_5);

        frame_8 = new QFrame(Sedes);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(10, 420, 621, 121));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        label_31 = new QLabel(frame_8);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(10, 2, 161, 17));
        label_32 = new QLabel(frame_8);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(320, 2, 151, 17));
        layoutWidget6 = new QWidget(frame_8);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 20, 601, 34));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_habitantes = new QLineEdit(layoutWidget6);
        lineEdit_habitantes->setObjectName(QStringLiteral("lineEdit_habitantes"));

        horizontalLayout_3->addWidget(lineEdit_habitantes);

        lineEdit_superficie = new QLineEdit(layoutWidget6);
        lineEdit_superficie->setObjectName(QStringLiteral("lineEdit_superficie"));

        horizontalLayout_3->addWidget(lineEdit_superficie);

        layoutWidget7 = new QWidget(frame_8);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(10, 50, 601, 58));
        gridLayout_2 = new QGridLayout(layoutWidget7);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_33 = new QLabel(layoutWidget7);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout_2->addWidget(label_33, 0, 0, 1, 1);

        label_36 = new QLabel(layoutWidget7);
        label_36->setObjectName(QStringLiteral("label_36"));

        gridLayout_2->addWidget(label_36, 0, 1, 1, 1);

        label_37 = new QLabel(layoutWidget7);
        label_37->setObjectName(QStringLiteral("label_37"));

        gridLayout_2->addWidget(label_37, 0, 2, 1, 1);

        lineEdit_altitud = new QLineEdit(layoutWidget7);
        lineEdit_altitud->setObjectName(QStringLiteral("lineEdit_altitud"));

        gridLayout_2->addWidget(lineEdit_altitud, 1, 0, 1, 1);

        lineEdit_latitud_municipio = new QLineEdit(layoutWidget7);
        lineEdit_latitud_municipio->setObjectName(QStringLiteral("lineEdit_latitud_municipio"));

        gridLayout_2->addWidget(lineEdit_latitud_municipio, 1, 1, 1, 1);

        lineEdit_longitud_municipio = new QLineEdit(layoutWidget7);
        lineEdit_longitud_municipio->setObjectName(QStringLiteral("lineEdit_longitud_municipio"));

        gridLayout_2->addWidget(lineEdit_longitud_municipio, 1, 2, 1, 1);

        frame_9 = new QFrame(Sedes);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setGeometry(QRect(640, 440, 621, 101));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        layoutWidget8 = new QWidget(frame_9);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(10, 10, 601, 81));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        pB_sede = new QPushButton(layoutWidget8);
        pB_sede->setObjectName(QStringLiteral("pB_sede"));

        verticalLayout_6->addWidget(pB_sede);

        sP_tablon = new QPushButton(layoutWidget8);
        sP_tablon->setObjectName(QStringLiteral("sP_tablon"));

        verticalLayout_6->addWidget(sP_tablon);

        pB_portalTransparencia = new QPushButton(layoutWidget8);
        pB_portalTransparencia->setObjectName(QStringLiteral("pB_portalTransparencia"));

        verticalLayout_6->addWidget(pB_portalTransparencia);


        horizontalLayout_5->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lineEdit_sede = new QLineEdit(layoutWidget8);
        lineEdit_sede->setObjectName(QStringLiteral("lineEdit_sede"));

        verticalLayout_4->addWidget(lineEdit_sede);

        lineEdit_tablon = new QLineEdit(layoutWidget8);
        lineEdit_tablon->setObjectName(QStringLiteral("lineEdit_tablon"));

        verticalLayout_4->addWidget(lineEdit_tablon);

        lineEdit_portar_transparencia = new QLineEdit(layoutWidget8);
        lineEdit_portar_transparencia->setObjectName(QStringLiteral("lineEdit_portar_transparencia"));

        verticalLayout_4->addWidget(lineEdit_portar_transparencia);


        horizontalLayout_5->addLayout(verticalLayout_4);

        frame_10 = new QFrame(Sedes);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setGeometry(QRect(10, 540, 1251, 281));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        label_30 = new QLabel(frame_10);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(22, 12, 19, 17));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_30->setFont(font);
        label_41 = new QLabel(frame_10);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(80, 12, 70, 17));
        label_41->setFont(font);
        label_46 = new QLabel(frame_10);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(20, 80, 26, 17));
        label_47 = new QLabel(frame_10);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(20, 160, 26, 17));
        label_48 = new QLabel(frame_10);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(20, 202, 26, 17));
        label_49 = new QLabel(frame_10);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(20, 240, 26, 17));
        label_52 = new QLabel(frame_10);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(80, 80, 194, 17));
        label_53 = new QLabel(frame_10);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(80, 160, 301, 17));
        label_54 = new QLabel(frame_10);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(80, 202, 182, 17));
        label_55 = new QLabel(frame_10);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(80, 240, 270, 17));
        line = new QFrame(frame_10);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 31, 1251, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(frame_10);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(0, 130, 1251, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(frame_10);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(0, 190, 1251, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(frame_10);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(0, 210, 1251, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(frame_10);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(60, 0, 16, 311));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(frame_10);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(380, 0, 20, 311));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);
        checkBox_portal_web = new QCheckBox(frame_10);
        checkBox_portal_web->setObjectName(QStringLiteral("checkBox_portal_web"));
        checkBox_portal_web->setGeometry(QRect(420, 40, 779, 16));
        checkBox_correo = new QCheckBox(frame_10);
        checkBox_correo->setObjectName(QStringLiteral("checkBox_correo"));
        checkBox_correo->setGeometry(QRect(420, 60, 779, 16));
        checkBox_basedatos_juridica = new QCheckBox(frame_10);
        checkBox_basedatos_juridica->setObjectName(QStringLiteral("checkBox_basedatos_juridica"));
        checkBox_basedatos_juridica->setGeometry(QRect(420, 80, 779, 16));
        checkBox_suscripcion = new QCheckBox(frame_10);
        checkBox_suscripcion->setObjectName(QStringLiteral("checkBox_suscripcion"));
        checkBox_suscripcion->setGeometry(QRect(420, 100, 779, 16));
        checkBox_perfil_contratante = new QCheckBox(frame_10);
        checkBox_perfil_contratante->setObjectName(QStringLiteral("checkBox_perfil_contratante"));
        checkBox_perfil_contratante->setGeometry(QRect(420, 120, 779, 16));
        checkBox_gestion_municipal = new QCheckBox(frame_10);
        checkBox_gestion_municipal->setObjectName(QStringLiteral("checkBox_gestion_municipal"));
        checkBox_gestion_municipal->setGeometry(QRect(420, 140, 779, 17));
        checkBox_gestion_economica = new QCheckBox(frame_10);
        checkBox_gestion_economica->setObjectName(QStringLiteral("checkBox_gestion_economica"));
        checkBox_gestion_economica->setGeometry(QRect(420, 160, 779, 16));
        checkBox_soporte = new QCheckBox(frame_10);
        checkBox_soporte->setObjectName(QStringLiteral("checkBox_soporte"));
        checkBox_soporte->setGeometry(QRect(420, 180, 779, 16));
        checkBox_sede_electronica = new QCheckBox(frame_10);
        checkBox_sede_electronica->setObjectName(QStringLiteral("checkBox_sede_electronica"));
        checkBox_sede_electronica->setGeometry(QRect(420, 202, 779, 16));
        checkBox_sede_electronica->setTristate(true);
        checkBox_epol = new QCheckBox(frame_10);
        checkBox_epol->setObjectName(QStringLiteral("checkBox_epol"));
        checkBox_epol->setGeometry(QRect(420, 220, 779, 17));
        checkBox_epol_movil = new QCheckBox(frame_10);
        checkBox_epol_movil->setObjectName(QStringLiteral("checkBox_epol_movil"));
        checkBox_epol_movil->setGeometry(QRect(420, 240, 779, 16));
        checkBox_siapol = new QCheckBox(frame_10);
        checkBox_siapol->setObjectName(QStringLiteral("checkBox_siapol"));
        checkBox_siapol->setGeometry(QRect(420, 260, 779, 16));
        label_44 = new QLabel(frame_10);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(420, 10, 31, 18));
        label_44->setFont(font);
        comboBox_anio = new QComboBox(frame_10);
        comboBox_anio->setObjectName(QStringLiteral("comboBox_anio"));
        comboBox_anio->setGeometry(QRect(470, 5, 83, 32));

        retranslateUi(Sedes);

        QMetaObject::connectSlotsByName(Sedes);
    } // setupUi

    void retranslateUi(QWidget *Sedes)
    {
        Sedes->setWindowTitle(QApplication::translate("Sedes", "Sedes Mulhac\303\251n", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        Sedes->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_2->setText(QApplication::translate("Sedes", "IP", Q_NULLPTR));
        label->setText(QApplication::translate("Sedes", "Nodo", Q_NULLPTR));
        label_11->setText(QApplication::translate("Sedes", "Persona de contacto", Q_NULLPTR));
        label_12->setText(QApplication::translate("Sedes", "Tel\303\251fonos", Q_NULLPTR));
        label_13->setText(QApplication::translate("Sedes", "Extensi\303\263n", Q_NULLPTR));
        label_14->setText(QApplication::translate("Sedes", "Fax", Q_NULLPTR));
        label_15->setText(QApplication::translate("Sedes", "M\303\263vil", Q_NULLPTR));
        label_16->setText(QApplication::translate("Sedes", "Email", Q_NULLPTR));
        lineEdit_extension->setText(QString());
        lineEdit_fax->setText(QString());
        lineEdit_movil->setText(QString());
        label_8->setText(QApplication::translate("Sedes", "Piso", Q_NULLPTR));
        label_9->setText(QApplication::translate("Sedes", "CP", Q_NULLPTR));
        label_10->setText(QApplication::translate("Sedes", "Municipio", Q_NULLPTR));
        label_17->setText(QApplication::translate("Sedes", "Latitud", Q_NULLPTR));
        label_18->setText(QApplication::translate("Sedes", "Longitud", Q_NULLPTR));
        label_3->setText(QApplication::translate("Sedes", "Tipo v\303\255a", Q_NULLPTR));
        label_5->setText(QApplication::translate("Sedes", "Direcci\303\263n", Q_NULLPTR));
        label_4->setText(QApplication::translate("Sedes", "N\303\272mero", Q_NULLPTR));
        label_6->setText(QApplication::translate("Sedes", "Letra", Q_NULLPTR));
        label_7->setText(QApplication::translate("Sedes", "Puerta", Q_NULLPTR));
        label_22->setText(QApplication::translate("Sedes", "Adsl", Q_NULLPTR));
        label_21->setText(QApplication::translate("Sedes", "N. Administrativo", Q_NULLPTR));
        label_19->setText(QApplication::translate("Sedes", "Ip de Cifrado", Q_NULLPTR));
        label_20->setText(QApplication::translate("Sedes", "Servicio", Q_NULLPTR));
        label_23->setText(QApplication::translate("Sedes", "Caudal", Q_NULLPTR));
        label_24->setText(QApplication::translate("Sedes", "Equipamiento", Q_NULLPTR));
        label_25->setText(QApplication::translate("Sedes", "Mancomunidad", Q_NULLPTR));
        label_26->setText(QApplication::translate("Sedes", "Comarca", Q_NULLPTR));
        label_28->setText(QApplication::translate("Sedes", "Dir3", Q_NULLPTR));
        label_29->setText(QApplication::translate("Sedes", "Ine", Q_NULLPTR));
        label_27->setText(QApplication::translate("Sedes", "Cif", Q_NULLPTR));
        pB_web->setText(QApplication::translate("Sedes", "web", Q_NULLPTR));
        pB_bandera->setText(QApplication::translate("Sedes", "Bandera", Q_NULLPTR));
        pB_escudo->setText(QApplication::translate("Sedes", "Escudo", Q_NULLPTR));
        label_31->setText(QApplication::translate("Sedes", "N\303\272mero de Habitantes", Q_NULLPTR));
        label_32->setText(QApplication::translate("Sedes", "Superficie Km", Q_NULLPTR));
        label_33->setText(QApplication::translate("Sedes", "Altitud", Q_NULLPTR));
        label_36->setText(QApplication::translate("Sedes", "Latitud", Q_NULLPTR));
        label_37->setText(QApplication::translate("Sedes", "Longitud", Q_NULLPTR));
        pB_sede->setText(QApplication::translate("Sedes", "Sede E.", Q_NULLPTR));
        sP_tablon->setText(QApplication::translate("Sedes", "Tabl\303\263n", Q_NULLPTR));
        pB_portalTransparencia->setText(QApplication::translate("Sedes", "Portal Trans.", Q_NULLPTR));
        label_30->setText(QApplication::translate("Sedes", "N\302\272", Q_NULLPTR));
        label_41->setText(QApplication::translate("Sedes", "Programa", Q_NULLPTR));
        label_46->setText(QApplication::translate("Sedes", "165", Q_NULLPTR));
        label_47->setText(QApplication::translate("Sedes", "166", Q_NULLPTR));
        label_48->setText(QApplication::translate("Sedes", "167", Q_NULLPTR));
        label_49->setText(QApplication::translate("Sedes", "168", Q_NULLPTR));
        label_52->setText(QApplication::translate("Sedes", "Servicios B\303\241sicos de internet", Q_NULLPTR));
        label_53->setText(QApplication::translate("Sedes", "Asistencia en software de gesti\303\263n municipal", Q_NULLPTR));
        label_54->setText(QApplication::translate("Sedes", "Sede electr\303\263nica municipal", Q_NULLPTR));
        label_55->setText(QApplication::translate("Sedes", "Software gestion Colectivo Polic\303\255a Local", Q_NULLPTR));
        checkBox_portal_web->setText(QApplication::translate("Sedes", "A. Portal web municipal", Q_NULLPTR));
        checkBox_correo->setText(QApplication::translate("Sedes", "B. Correo electr\303\263nico", Q_NULLPTR));
        checkBox_basedatos_juridica->setText(QApplication::translate("Sedes", "C. Licencia de acceso a bases de datos jur\303\255dicas", Q_NULLPTR));
        checkBox_suscripcion->setText(QApplication::translate("Sedes", "D. Suscripci\303\263n al dominio reservado del municipio.es", Q_NULLPTR));
        checkBox_perfil_contratante->setText(QApplication::translate("Sedes", "E. Perfil del contratante", Q_NULLPTR));
        checkBox_gestion_municipal->setText(QApplication::translate("Sedes", "A. Gesti\303\263n propiamente municipal (Poblaci\303\263n, tributos, registro\342\200\246)", Q_NULLPTR));
        checkBox_gestion_economica->setText(QApplication::translate("Sedes", "B. Gesti\303\263n econ\303\263mica (SICAL)", Q_NULLPTR));
        checkBox_soporte->setText(QApplication::translate("Sedes", "C. A.T. y soporte explotaci\303\263n de los anteriores productos", Q_NULLPTR));
        checkBox_sede_electronica->setText(QApplication::translate("Sedes", "A. Sede electr\303\263nica municipal", Q_NULLPTR));
        checkBox_epol->setText(QApplication::translate("Sedes", "A. Programa de Gesti\303\263n de la Polic\303\255a Local (ePOL)", Q_NULLPTR));
        checkBox_epol_movil->setText(QApplication::translate("Sedes", "B. ePOL m\303\263vil.", Q_NULLPTR));
        checkBox_siapol->setText(QApplication::translate("Sedes", "C. Acceso SIAPOL (T\303\251cnicas y Protocolos de actuaci\303\263n)", Q_NULLPTR));
        label_44->setText(QApplication::translate("Sedes", "A\303\261o", Q_NULLPTR));
        comboBox_anio->clear();
        comboBox_anio->insertItems(0, QStringList()
         << QApplication::translate("Sedes", "16/17", Q_NULLPTR)
         << QApplication::translate("Sedes", "18/19", Q_NULLPTR)
         << QApplication::translate("Sedes", "20/21", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Sedes: public Ui_Sedes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEDES_H
