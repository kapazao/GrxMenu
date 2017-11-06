/********************************************************************************
** Form generated from reading UI file 'configuracion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURACION_H
#define UI_CONFIGURACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Configuracion
{
public:
    QFrame *fr_TS;
    QLabel *label_17;
    QPushButton *PB_TS;
    QLabel *label_16;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *label_22;
    QLabel *label_23;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *servidor;
    QLineEdit *usuario_ad;
    QLineEdit *clave_ad;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rb_rdesktop;
    QRadioButton *rb_freerdp;
    QComboBox *cb_resolucion;
    QDialogButtonBox *buttonBox;
    QFrame *fr_kerberos;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QPushButton *Btn_Kerberos;
    QLabel *label_29;
    QPushButton *PB_kerberos;
    QFrame *fr_rutas;
    QLabel *lb_rutas;
    QPushButton *PB_rutas;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_15;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QPushButton *Btn_lupa;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_18;
    QLabel *label_45;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *correoweb;
    QLineEdit *cronos;
    QLineEdit *ISL;
    QLineEdit *GLPI;
    QLineEdit *OCS;
    QLineEdit *beiro;
    QLineEdit *atalaya;
    QFrame *fr_linux;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QLineEdit *tecnico;
    QLineEdit *clave;
    QLineEdit *usuario_remoto;
    QLineEdit *puerto;
    QLineEdit *password;
    QLineEdit *clave_cifrado;
    QLineEdit *clave_remoto;
    QLabel *label_34;
    QPushButton *PB_linux;
    QTextEdit *cuerpo;
    QFrame *frame;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_42;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_33;
    QLabel *label_35;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_36;
    QLabel *label_37;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_38;
    QLabel *label_39;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_40;
    QLabel *label_41;
    QFrame *frame_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_43;
    QLabel *label_44;
    QVBoxLayout *verticalLayout_17;
    QLineEdit *para;
    QLineEdit *asunto;
    QFrame *fr_DB;
    QPushButton *PB_DB;
    QLabel *label_24;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_25;
    QLabel *label_21;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *servidor_DB;
    QLineEdit *puerto_DB;
    QLineEdit *DataBaseName;
    QLineEdit *Usuario_DB;
    QLineEdit *password_DB;
    QCheckBox *checkBox_ssh;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_11;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_20;
    QPushButton *Btn_lupa_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_32;
    QPushButton *Btn_lupa_3;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *servidor_SSH;
    QLineEdit *usuario_ssh_BD;
    QLineEdit *clave_ssh_BD;
    QLineEdit *puerto_Remoto_ssh;
    QLineEdit *keyfile_publica;
    QLineEdit *keyfile_privada;

    void setupUi(QDialog *Configuracion)
    {
        if (Configuracion->objectName().isEmpty())
            Configuracion->setObjectName(QStringLiteral("Configuracion"));
        Configuracion->resize(1100, 766);
        fr_TS = new QFrame(Configuracion);
        fr_TS->setObjectName(QStringLiteral("fr_TS"));
        fr_TS->setGeometry(QRect(540, 0, 541, 201));
        fr_TS->setFrameShape(QFrame::StyledPanel);
        fr_TS->setFrameShadow(QFrame::Raised);
        label_17 = new QLabel(fr_TS);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(11, 101, 16, 17));
        PB_TS = new QPushButton(fr_TS);
        PB_TS->setObjectName(QStringLiteral("PB_TS"));
        PB_TS->setGeometry(QRect(500, 10, 31, 31));
        QIcon icon;
        icon.addFile(QStringLiteral("iconos/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        PB_TS->setIcon(icon);
        PB_TS->setIconSize(QSize(25, 25));
        label_16 = new QLabel(fr_TS);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 10, 268, 22));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_16->setFont(font);
        layoutWidget = new QWidget(fr_TS);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 41, 521, 154));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_3->addWidget(label_7);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName(QStringLiteral("label_22"));

        verticalLayout_3->addWidget(label_22);

        label_23 = new QLabel(layoutWidget);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout_3->addWidget(label_23);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        servidor = new QLineEdit(layoutWidget);
        servidor->setObjectName(QStringLiteral("servidor"));

        verticalLayout_4->addWidget(servidor);

        usuario_ad = new QLineEdit(layoutWidget);
        usuario_ad->setObjectName(QStringLiteral("usuario_ad"));

        verticalLayout_4->addWidget(usuario_ad);

        clave_ad = new QLineEdit(layoutWidget);
        clave_ad->setObjectName(QStringLiteral("clave_ad"));
        clave_ad->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(clave_ad);


        gridLayout->addLayout(verticalLayout_4, 0, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        rb_rdesktop = new QRadioButton(layoutWidget);
        rb_rdesktop->setObjectName(QStringLiteral("rb_rdesktop"));
        rb_rdesktop->setAcceptDrops(true);
        rb_rdesktop->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(rb_rdesktop);

        rb_freerdp = new QRadioButton(layoutWidget);
        rb_freerdp->setObjectName(QStringLiteral("rb_freerdp"));

        horizontalLayout_2->addWidget(rb_freerdp);

        cb_resolucion = new QComboBox(layoutWidget);
        cb_resolucion->setObjectName(QStringLiteral("cb_resolucion"));

        horizontalLayout_2->addWidget(cb_resolucion);


        verticalLayout_6->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(Configuracion);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(920, 730, 160, 25));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        fr_kerberos = new QFrame(Configuracion);
        fr_kerberos->setObjectName(QStringLiteral("fr_kerberos"));
        fr_kerberos->setGeometry(QRect(0, 540, 541, 71));
        fr_kerberos->setFrameShape(QFrame::StyledPanel);
        fr_kerberos->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(fr_kerberos);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 30, 511, 36));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout->addWidget(label_9);

        Btn_Kerberos = new QPushButton(layoutWidget1);
        Btn_Kerberos->setObjectName(QStringLiteral("Btn_Kerberos"));

        horizontalLayout->addWidget(Btn_Kerberos);

        label_29 = new QLabel(fr_kerberos);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 5, 349, 21));
        label_29->setFont(font);
        PB_kerberos = new QPushButton(fr_kerberos);
        PB_kerberos->setObjectName(QStringLiteral("PB_kerberos"));
        PB_kerberos->setGeometry(QRect(500, 5, 31, 21));
        PB_kerberos->setIcon(icon);
        PB_kerberos->setIconSize(QSize(25, 25));
        fr_rutas = new QFrame(Configuracion);
        fr_rutas->setObjectName(QStringLiteral("fr_rutas"));
        fr_rutas->setGeometry(QRect(0, 280, 541, 261));
        fr_rutas->setFrameShape(QFrame::StyledPanel);
        fr_rutas->setFrameShadow(QFrame::Raised);
        lb_rutas = new QLabel(fr_rutas);
        lb_rutas->setObjectName(QStringLiteral("lb_rutas"));
        lb_rutas->setGeometry(QRect(10, 5, 187, 22));
        lb_rutas->setFont(font);
        lb_rutas->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        PB_rutas = new QPushButton(fr_rutas);
        PB_rutas->setObjectName(QStringLiteral("PB_rutas"));
        PB_rutas->setGeometry(QRect(500, 5, 31, 21));
        PB_rutas->setIcon(icon);
        PB_rutas->setIconSize(QSize(25, 25));
        layoutWidget2 = new QWidget(fr_rutas);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(12, 30, 521, 221));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(1);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_15 = new QLabel(layoutWidget2);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_5->addWidget(label_15);

        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_5->addWidget(label_14);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_5->addWidget(label_10);

        Btn_lupa = new QPushButton(layoutWidget2);
        Btn_lupa->setObjectName(QStringLiteral("Btn_lupa"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("iconos/lupa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Btn_lupa->setIcon(icon1);

        horizontalLayout_5->addWidget(Btn_lupa);


        verticalLayout_5->addLayout(horizontalLayout_5);

        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_5->addWidget(label_12);

        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_5->addWidget(label_13);

        label_18 = new QLabel(layoutWidget2);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_5->addWidget(label_18);

        label_45 = new QLabel(layoutWidget2);
        label_45->setObjectName(QStringLiteral("label_45"));

        verticalLayout_5->addWidget(label_45);


        horizontalLayout_6->addLayout(verticalLayout_5);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(1);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        correoweb = new QLineEdit(layoutWidget2);
        correoweb->setObjectName(QStringLiteral("correoweb"));

        verticalLayout_10->addWidget(correoweb);

        cronos = new QLineEdit(layoutWidget2);
        cronos->setObjectName(QStringLiteral("cronos"));

        verticalLayout_10->addWidget(cronos);

        ISL = new QLineEdit(layoutWidget2);
        ISL->setObjectName(QStringLiteral("ISL"));

        verticalLayout_10->addWidget(ISL);

        GLPI = new QLineEdit(layoutWidget2);
        GLPI->setObjectName(QStringLiteral("GLPI"));

        verticalLayout_10->addWidget(GLPI);

        OCS = new QLineEdit(layoutWidget2);
        OCS->setObjectName(QStringLiteral("OCS"));

        verticalLayout_10->addWidget(OCS);

        beiro = new QLineEdit(layoutWidget2);
        beiro->setObjectName(QStringLiteral("beiro"));

        verticalLayout_10->addWidget(beiro);

        atalaya = new QLineEdit(layoutWidget2);
        atalaya->setObjectName(QStringLiteral("atalaya"));

        verticalLayout_10->addWidget(atalaya);


        horizontalLayout_6->addLayout(verticalLayout_10);

        layoutWidget->raise();
        lb_rutas->raise();
        PB_rutas->raise();
        fr_linux = new QFrame(Configuracion);
        fr_linux->setObjectName(QStringLiteral("fr_linux"));
        fr_linux->setGeometry(QRect(0, 0, 541, 281));
        fr_linux->setFrameShape(QFrame::StyledPanel);
        fr_linux->setFrameShadow(QFrame::Raised);
        layoutWidget3 = new QWidget(fr_linux);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 30, 521, 234));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label = new QLabel(layoutWidget3);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tecnico = new QLineEdit(layoutWidget3);
        tecnico->setObjectName(QStringLiteral("tecnico"));

        verticalLayout->addWidget(tecnico);

        clave = new QLineEdit(layoutWidget3);
        clave->setObjectName(QStringLiteral("clave"));
        clave->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(clave);

        usuario_remoto = new QLineEdit(layoutWidget3);
        usuario_remoto->setObjectName(QStringLiteral("usuario_remoto"));

        verticalLayout->addWidget(usuario_remoto);

        puerto = new QLineEdit(layoutWidget3);
        puerto->setObjectName(QStringLiteral("puerto"));

        verticalLayout->addWidget(puerto);

        password = new QLineEdit(layoutWidget3);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(password);

        clave_cifrado = new QLineEdit(layoutWidget3);
        clave_cifrado->setObjectName(QStringLiteral("clave_cifrado"));
        clave_cifrado->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(clave_cifrado);

        clave_remoto = new QLineEdit(layoutWidget3);
        clave_remoto->setObjectName(QStringLiteral("clave_remoto"));
        clave_remoto->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(clave_remoto);


        horizontalLayout_3->addLayout(verticalLayout);

        label_34 = new QLabel(fr_linux);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(10, 5, 415, 22));
        label_34->setFont(font);
        PB_linux = new QPushButton(fr_linux);
        PB_linux->setObjectName(QStringLiteral("PB_linux"));
        PB_linux->setGeometry(QRect(500, 5, 31, 21));
        PB_linux->setIcon(icon);
        PB_linux->setIconSize(QSize(25, 25));
        cuerpo = new QTextEdit(Configuracion);
        cuerpo->setObjectName(QStringLiteral("cuerpo"));
        cuerpo->setGeometry(QRect(0, 650, 541, 111));
        frame = new QFrame(Configuracion);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 610, 541, 41));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget4 = new QWidget(frame);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 0, 511, 41));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_10->setSpacing(1);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_42 = new QLabel(layoutWidget4);
        label_42->setObjectName(QStringLiteral("label_42"));
        QFont font1;
        font1.setPointSize(15);
        label_42->setFont(font1);

        horizontalLayout_10->addWidget(label_42);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(1);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_33 = new QLabel(layoutWidget4);
        label_33->setObjectName(QStringLiteral("label_33"));

        verticalLayout_13->addWidget(label_33);

        label_35 = new QLabel(layoutWidget4);
        label_35->setObjectName(QStringLiteral("label_35"));

        verticalLayout_13->addWidget(label_35);


        horizontalLayout_10->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(1);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_36 = new QLabel(layoutWidget4);
        label_36->setObjectName(QStringLiteral("label_36"));

        verticalLayout_14->addWidget(label_36);

        label_37 = new QLabel(layoutWidget4);
        label_37->setObjectName(QStringLiteral("label_37"));

        verticalLayout_14->addWidget(label_37);


        horizontalLayout_10->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(1);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_38 = new QLabel(layoutWidget4);
        label_38->setObjectName(QStringLiteral("label_38"));

        verticalLayout_15->addWidget(label_38);

        label_39 = new QLabel(layoutWidget4);
        label_39->setObjectName(QStringLiteral("label_39"));

        verticalLayout_15->addWidget(label_39);


        horizontalLayout_10->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(1);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        label_40 = new QLabel(layoutWidget4);
        label_40->setObjectName(QStringLiteral("label_40"));

        verticalLayout_16->addWidget(label_40);

        label_41 = new QLabel(layoutWidget4);
        label_41->setObjectName(QStringLiteral("label_41"));

        verticalLayout_16->addWidget(label_41);


        horizontalLayout_10->addLayout(verticalLayout_16);

        frame_2 = new QFrame(Configuracion);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(540, 640, 541, 81));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 0, 521, 74));
        horizontalLayout_11 = new QHBoxLayout(widget);
        horizontalLayout_11->setSpacing(1);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(1);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_43 = new QLabel(widget);
        label_43->setObjectName(QStringLiteral("label_43"));
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu Condensed"));
        font2.setBold(true);
        font2.setWeight(75);
        label_43->setFont(font2);

        verticalLayout_12->addWidget(label_43);

        label_44 = new QLabel(widget);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setFont(font2);

        verticalLayout_12->addWidget(label_44);


        horizontalLayout_11->addLayout(verticalLayout_12);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(1);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        para = new QLineEdit(widget);
        para->setObjectName(QStringLiteral("para"));

        verticalLayout_17->addWidget(para);

        asunto = new QLineEdit(widget);
        asunto->setObjectName(QStringLiteral("asunto"));

        verticalLayout_17->addWidget(asunto);


        horizontalLayout_11->addLayout(verticalLayout_17);

        fr_DB = new QFrame(Configuracion);
        fr_DB->setObjectName(QStringLiteral("fr_DB"));
        fr_DB->setGeometry(QRect(540, 200, 541, 431));
        fr_DB->setFrameShape(QFrame::StyledPanel);
        fr_DB->setFrameShadow(QFrame::Raised);
        PB_DB = new QPushButton(fr_DB);
        PB_DB->setObjectName(QStringLiteral("PB_DB"));
        PB_DB->setGeometry(QRect(499, 4, 31, 31));
        PB_DB->setIcon(icon);
        PB_DB->setIconSize(QSize(25, 25));
        label_24 = new QLabel(fr_DB);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(21, 10, 272, 22));
        label_24->setFont(font);
        layoutWidget5 = new QWidget(fr_DB);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(11, 40, 521, 168));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_4->setSpacing(1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(1);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_25 = new QLabel(layoutWidget5);
        label_25->setObjectName(QStringLiteral("label_25"));

        verticalLayout_7->addWidget(label_25);

        label_21 = new QLabel(layoutWidget5);
        label_21->setObjectName(QStringLiteral("label_21"));

        verticalLayout_7->addWidget(label_21);

        label_26 = new QLabel(layoutWidget5);
        label_26->setObjectName(QStringLiteral("label_26"));

        verticalLayout_7->addWidget(label_26);

        label_27 = new QLabel(layoutWidget5);
        label_27->setObjectName(QStringLiteral("label_27"));

        verticalLayout_7->addWidget(label_27);

        label_28 = new QLabel(layoutWidget5);
        label_28->setObjectName(QStringLiteral("label_28"));

        verticalLayout_7->addWidget(label_28);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(1);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        servidor_DB = new QLineEdit(layoutWidget5);
        servidor_DB->setObjectName(QStringLiteral("servidor_DB"));

        verticalLayout_9->addWidget(servidor_DB);

        puerto_DB = new QLineEdit(layoutWidget5);
        puerto_DB->setObjectName(QStringLiteral("puerto_DB"));

        verticalLayout_9->addWidget(puerto_DB);

        DataBaseName = new QLineEdit(layoutWidget5);
        DataBaseName->setObjectName(QStringLiteral("DataBaseName"));

        verticalLayout_9->addWidget(DataBaseName);

        Usuario_DB = new QLineEdit(layoutWidget5);
        Usuario_DB->setObjectName(QStringLiteral("Usuario_DB"));
        Usuario_DB->setEchoMode(QLineEdit::Normal);

        verticalLayout_9->addWidget(Usuario_DB);

        password_DB = new QLineEdit(layoutWidget5);
        password_DB->setObjectName(QStringLiteral("password_DB"));
        password_DB->setEchoMode(QLineEdit::Password);

        verticalLayout_9->addWidget(password_DB);


        horizontalLayout_4->addLayout(verticalLayout_9);

        checkBox_ssh = new QCheckBox(fr_DB);
        checkBox_ssh->setObjectName(QStringLiteral("checkBox_ssh"));
        checkBox_ssh->setGeometry(QRect(10, 200, 147, 23));
        checkBox_ssh->setChecked(false);
        layoutWidget6 = new QWidget(fr_DB);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 230, 521, 196));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_9->setSpacing(1);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_11 = new QLabel(layoutWidget6);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_8->addWidget(label_11);

        label_30 = new QLabel(layoutWidget6);
        label_30->setObjectName(QStringLiteral("label_30"));

        verticalLayout_8->addWidget(label_30);

        label_31 = new QLabel(layoutWidget6);
        label_31->setObjectName(QStringLiteral("label_31"));

        verticalLayout_8->addWidget(label_31);

        label_19 = new QLabel(layoutWidget6);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout_8->addWidget(label_19);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(1);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_20 = new QLabel(layoutWidget6);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_7->addWidget(label_20);

        Btn_lupa_2 = new QPushButton(layoutWidget6);
        Btn_lupa_2->setObjectName(QStringLiteral("Btn_lupa_2"));
        Btn_lupa_2->setIcon(icon1);

        horizontalLayout_7->addWidget(Btn_lupa_2);


        verticalLayout_8->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(1);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_32 = new QLabel(layoutWidget6);
        label_32->setObjectName(QStringLiteral("label_32"));

        horizontalLayout_8->addWidget(label_32);

        Btn_lupa_3 = new QPushButton(layoutWidget6);
        Btn_lupa_3->setObjectName(QStringLiteral("Btn_lupa_3"));
        Btn_lupa_3->setIcon(icon1);

        horizontalLayout_8->addWidget(Btn_lupa_3);


        verticalLayout_8->addLayout(horizontalLayout_8);


        horizontalLayout_9->addLayout(verticalLayout_8);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        servidor_SSH = new QLineEdit(layoutWidget6);
        servidor_SSH->setObjectName(QStringLiteral("servidor_SSH"));

        verticalLayout_11->addWidget(servidor_SSH);

        usuario_ssh_BD = new QLineEdit(layoutWidget6);
        usuario_ssh_BD->setObjectName(QStringLiteral("usuario_ssh_BD"));

        verticalLayout_11->addWidget(usuario_ssh_BD);

        clave_ssh_BD = new QLineEdit(layoutWidget6);
        clave_ssh_BD->setObjectName(QStringLiteral("clave_ssh_BD"));
        clave_ssh_BD->setEchoMode(QLineEdit::Password);

        verticalLayout_11->addWidget(clave_ssh_BD);

        puerto_Remoto_ssh = new QLineEdit(layoutWidget6);
        puerto_Remoto_ssh->setObjectName(QStringLiteral("puerto_Remoto_ssh"));

        verticalLayout_11->addWidget(puerto_Remoto_ssh);

        keyfile_publica = new QLineEdit(layoutWidget6);
        keyfile_publica->setObjectName(QStringLiteral("keyfile_publica"));

        verticalLayout_11->addWidget(keyfile_publica);

        keyfile_privada = new QLineEdit(layoutWidget6);
        keyfile_privada->setObjectName(QStringLiteral("keyfile_privada"));

        verticalLayout_11->addWidget(keyfile_privada);


        horizontalLayout_9->addLayout(verticalLayout_11);

        QWidget::setTabOrder(tecnico, clave);
        QWidget::setTabOrder(clave, usuario_remoto);
        QWidget::setTabOrder(usuario_remoto, puerto);
        QWidget::setTabOrder(puerto, password);
        QWidget::setTabOrder(password, clave_cifrado);
        QWidget::setTabOrder(clave_cifrado, clave_remoto);
        QWidget::setTabOrder(clave_remoto, servidor);
        QWidget::setTabOrder(servidor, rb_rdesktop);
        QWidget::setTabOrder(rb_rdesktop, rb_freerdp);
        QWidget::setTabOrder(rb_freerdp, cb_resolucion);

        retranslateUi(Configuracion);
        QObject::connect(buttonBox, SIGNAL(accepted()), Configuracion, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Configuracion, SLOT(reject()));

        QMetaObject::connectSlotsByName(Configuracion);
    } // setupUi

    void retranslateUi(QDialog *Configuracion)
    {
        Configuracion->setWindowTitle(QApplication::translate("Configuracion", "Configuraci\303\263n", Q_NULLPTR));
        label_17->setText(QString());
        PB_TS->setText(QString());
        label_16->setText(QApplication::translate("Configuracion", "Configuraci\303\263n de Terminal Server", Q_NULLPTR));
        label_7->setText(QApplication::translate("Configuracion", "Servidor AD", Q_NULLPTR));
        label_22->setText(QApplication::translate("Configuracion", "Usuario", Q_NULLPTR));
        label_23->setText(QApplication::translate("Configuracion", "Clave", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        servidor->setToolTip(QApplication::translate("Configuracion", "IP del servidor terminal server donde nos queremos conectar", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        usuario_ad->setToolTip(QApplication::translate("Configuracion", "Nombre de usuario del t\303\251cnico en el dominio (si_manolito)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        clave_ad->setToolTip(QApplication::translate("Configuracion", "Clave del t\303\251cnico en el dominio", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        rb_rdesktop->setToolTip(QApplication::translate("Configuracion", "Elegir freerdp para acceder al servidor AD", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        rb_rdesktop->setText(QApplication::translate("Configuracion", "rdes&ktop", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rb_freerdp->setToolTip(QApplication::translate("Configuracion", "Elegir freerdp para acceder al servidor AD", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        rb_freerdp->setText(QApplication::translate("Configuracion", "f&reerdp", Q_NULLPTR));
        cb_resolucion->clear();
        cb_resolucion->insertItems(0, QStringList()
         << QApplication::translate("Configuracion", "1920x1080", Q_NULLPTR)
         << QApplication::translate("Configuracion", "1024x740", Q_NULLPTR)
         << QApplication::translate("Configuracion", "800x600", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        cb_resolucion->setToolTip(QApplication::translate("Configuracion", "Resoluci\303\263n de pantalla del servidor AD", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        buttonBox->setToolTip(QApplication::translate("Configuracion", "<html><head/><body><p>dd</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("Configuracion", "Actualizar ticket Kerberos", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Btn_Kerberos->setToolTip(QApplication::translate("Configuracion", "Renueva el token de kerberos", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Btn_Kerberos->setText(QApplication::translate("Configuracion", "KeyAD", Q_NULLPTR));
        label_29->setText(QApplication::translate("Configuracion", "Configuraci\303\263n de Kerberos", Q_NULLPTR));
        PB_kerberos->setText(QString());
        lb_rutas->setText(QApplication::translate("Configuracion", "Configuraci\303\263n de Rutas", Q_NULLPTR));
        PB_rutas->setText(QString());
        label_15->setText(QApplication::translate("Configuracion", "Ruta CorreoWeb", Q_NULLPTR));
        label_14->setText(QApplication::translate("Configuracion", "Ruta a Cronos", Q_NULLPTR));
        label_10->setText(QApplication::translate("Configuracion", "Ruta a ISL", Q_NULLPTR));
        Btn_lupa->setText(QString());
        label_12->setText(QApplication::translate("Configuracion", "Ruta a GLPI", Q_NULLPTR));
        label_13->setText(QApplication::translate("Configuracion", "Ruta OCS", Q_NULLPTR));
        label_18->setText(QApplication::translate("Configuracion", "Ruta Beiro", Q_NULLPTR));
        label_45->setText(QApplication::translate("Configuracion", "Atalaya", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        OCS->setToolTip(QApplication::translate("Configuracion", "Usuario administrador de los equipos linux", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("Configuracion", "T\303\251cnico", Q_NULLPTR));
        label_2->setText(QApplication::translate("Configuracion", "Clave", Q_NULLPTR));
        label->setText(QApplication::translate("Configuracion", "Usuario Remoto", Q_NULLPTR));
        label_8->setText(QApplication::translate("Configuracion", "Puerto", Q_NULLPTR));
        label_3->setText(QApplication::translate("Configuracion", "Password", Q_NULLPTR));
        label_5->setText(QApplication::translate("Configuracion", "Clave Cifrado", Q_NULLPTR));
        label_6->setText(QApplication::translate("Configuracion", "Clave Remoto", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tecnico->setToolTip(QApplication::translate("Configuracion", "Nombre de usuario del t\303\251cnico en el dominio (si_manolito)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        clave->setToolTip(QApplication::translate("Configuracion", "Clave del t\303\251cnico en el dominio", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        puerto->setToolTip(QApplication::translate("Configuracion", "Puerto de acceso ssh en los equipos linux", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        password->setToolTip(QApplication::translate("Configuracion", "Clave del usuario administrador de los equipos linux", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        clave_cifrado->setToolTip(QApplication::translate("Configuracion", "Clave del cifrado en los equipos", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_34->setText(QApplication::translate("Configuracion", "Configuraci\303\263n de acceso remoto a los equipos Linux", Q_NULLPTR));
        PB_linux->setText(QString());
#ifndef QT_NO_TOOLTIP
        cuerpo->setToolTip(QApplication::translate("Configuracion", "<html><head/><body><p>%1 - Municipio</p><p>%2 - Direcci\303\263n</p><p>%3 - ADSL</p><p>%4 - N\303\272mero Administrativo</p><p>%5 - IP</p><p>%6 - Servicio</p><p>%7 - Caudal</p><p>%8 - N\302\272Serie</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cuerpo->setStatusTip(QApplication::translate("Configuracion", "66", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        cuerpo->setHtml(QApplication::translate("Configuracion", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif';\">Buenos d\303\255as.<br /><br />Hay una linea con problemas de conexi\303\263n.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif';\">Hemos comprobado que no es problema de su red.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif';\">Haced el favor de echarle un vistazo.</s"
                        "pan></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif';\"><br /></p></body></html>", Q_NULLPTR));
        label_42->setText(QApplication::translate("Configuracion", "Leyenda", Q_NULLPTR));
        label_33->setText(QApplication::translate("Configuracion", "%1 - Municipio", Q_NULLPTR));
        label_35->setText(QApplication::translate("Configuracion", "%2 - Direcci\303\263n", Q_NULLPTR));
        label_36->setText(QApplication::translate("Configuracion", "%3 - ADSL", Q_NULLPTR));
        label_37->setText(QApplication::translate("Configuracion", "%4 - N\302\272 Admin.", Q_NULLPTR));
        label_38->setText(QApplication::translate("Configuracion", "5% - IP", Q_NULLPTR));
        label_39->setText(QApplication::translate("Configuracion", "6% - Servicio", Q_NULLPTR));
        label_40->setText(QApplication::translate("Configuracion", "7% - Caudal", Q_NULLPTR));
        label_41->setText(QApplication::translate("Configuracion", "8% - N\302\272Serie", Q_NULLPTR));
        label_43->setText(QApplication::translate("Configuracion", "Para:", Q_NULLPTR));
        label_44->setText(QApplication::translate("Configuracion", "Asunto:", Q_NULLPTR));
        para->setText(QApplication::translate("Configuracion", "<ie2.cg22@telefonica.com><op.cg22@telefonica.com><marialeticia.larapalomino@telefonica.com>", Q_NULLPTR));
        asunto->setText(QApplication::translate("Configuracion", "Problemas de conexi\303\263n en %1", Q_NULLPTR));
        PB_DB->setText(QString());
        label_24->setText(QApplication::translate("Configuracion", "Configuraci\303\263n de la Base de Datos", Q_NULLPTR));
        label_25->setText(QApplication::translate("Configuracion", "Servidor BD", Q_NULLPTR));
        label_21->setText(QApplication::translate("Configuracion", "Puerto", Q_NULLPTR));
        label_26->setText(QApplication::translate("Configuracion", "Nombre de la BD", Q_NULLPTR));
        label_27->setText(QApplication::translate("Configuracion", "Usuario BD", Q_NULLPTR));
        label_28->setText(QApplication::translate("Configuracion", "Password BD", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        servidor_DB->setToolTip(QApplication::translate("Configuracion", "IP del servidor terminal server donde nos queremos conectar", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        DataBaseName->setToolTip(QApplication::translate("Configuracion", "Nombre de usuario del t\303\251cnico en el dominio (si_manolito)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Usuario_DB->setToolTip(QApplication::translate("Configuracion", "Clave del t\303\251cnico en el dominio", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        password_DB->setToolTip(QApplication::translate("Configuracion", "Nombre de usuario del t\303\251cnico en el dominio (si_manolito)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkBox_ssh->setText(QApplication::translate("Configuracion", "Usar tunel cifrado", Q_NULLPTR));
        label_11->setText(QApplication::translate("Configuracion", "Servidor SSH", Q_NULLPTR));
        label_30->setText(QApplication::translate("Configuracion", "Usuario ssh", Q_NULLPTR));
        label_31->setText(QApplication::translate("Configuracion", "Clave ssh", Q_NULLPTR));
        label_19->setText(QApplication::translate("Configuracion", "Puerto Remoto", Q_NULLPTR));
        label_20->setText(QApplication::translate("Configuracion", "KeyFile Publica", Q_NULLPTR));
        Btn_lupa_2->setText(QString());
        label_32->setText(QApplication::translate("Configuracion", "KeyFile Privada", Q_NULLPTR));
        Btn_lupa_3->setText(QString());
        puerto_Remoto_ssh->setInputMask(QApplication::translate("Configuracion", "99999", Q_NULLPTR));
        keyfile_publica->setInputMask(QString());
    } // retranslateUi

};

namespace Ui {
    class Configuracion: public Ui_Configuracion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURACION_H
