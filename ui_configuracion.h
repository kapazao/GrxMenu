/********************************************************************************
** Form generated from reading UI file 'configuracion.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURACION_H
#define UI_CONFIGURACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Configuracion
{
public:
    QLabel *label_11;
    QFrame *fr_DB;
    QPushButton *PB_DB;
    QLabel *label_24;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *servidor_DB;
    QLineEdit *DataBaseName;
    QLineEdit *Usuario_DB;
    QLineEdit *password_DB;
    QFrame *fr_TS;
    QLabel *label_17;
    QWidget *layoutWidget1;
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
    QPushButton *PB_TS;
    QLabel *label_16;
    QDialogButtonBox *buttonBox;
    QFrame *fr_kerberos;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QPushButton *Btn_Kerberos;
    QLabel *label_29;
    QPushButton *PB_kerberos;
    QFrame *fr_rutas;
    QLabel *lb_rutas;
    QPushButton *PB_rutas;
    QWidget *widget;
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
    QVBoxLayout *verticalLayout_10;
    QLineEdit *correoweb;
    QLineEdit *cronos;
    QLineEdit *ISL;
    QLineEdit *GLPI;
    QLineEdit *OCS;
    QLineEdit *beiro;
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
    QPushButton *pushButton_2;

    void setupUi(QDialog *Configuracion)
    {
        if (Configuracion->objectName().isEmpty())
            Configuracion->setObjectName(QStringLiteral("Configuracion"));
        Configuracion->resize(950, 511);
        label_11 = new QLabel(Configuracion);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(506, 43, 16, 17));
        fr_DB = new QFrame(Configuracion);
        fr_DB->setObjectName(QStringLiteral("fr_DB"));
        fr_DB->setGeometry(QRect(540, 210, 411, 181));
        fr_DB->setFrameShape(QFrame::StyledPanel);
        fr_DB->setFrameShadow(QFrame::Raised);
        PB_DB = new QPushButton(fr_DB);
        PB_DB->setObjectName(QStringLiteral("PB_DB"));
        PB_DB->setGeometry(QRect(370, 10, 31, 25));
        QIcon icon;
        icon.addFile(QStringLiteral("iconos/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        PB_DB->setIcon(icon);
        PB_DB->setIconSize(QSize(25, 25));
        label_24 = new QLabel(fr_DB);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(20, 10, 349, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_24->setFont(font);
        layoutWidget = new QWidget(fr_DB);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 381, 122));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_25 = new QLabel(layoutWidget);
        label_25->setObjectName(QStringLiteral("label_25"));

        verticalLayout_7->addWidget(label_25);

        label_26 = new QLabel(layoutWidget);
        label_26->setObjectName(QStringLiteral("label_26"));

        verticalLayout_7->addWidget(label_26);

        label_27 = new QLabel(layoutWidget);
        label_27->setObjectName(QStringLiteral("label_27"));

        verticalLayout_7->addWidget(label_27);

        label_28 = new QLabel(layoutWidget);
        label_28->setObjectName(QStringLiteral("label_28"));

        verticalLayout_7->addWidget(label_28);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        servidor_DB = new QLineEdit(layoutWidget);
        servidor_DB->setObjectName(QStringLiteral("servidor_DB"));

        verticalLayout_8->addWidget(servidor_DB);

        DataBaseName = new QLineEdit(layoutWidget);
        DataBaseName->setObjectName(QStringLiteral("DataBaseName"));

        verticalLayout_8->addWidget(DataBaseName);

        Usuario_DB = new QLineEdit(layoutWidget);
        Usuario_DB->setObjectName(QStringLiteral("Usuario_DB"));
        Usuario_DB->setEchoMode(QLineEdit::Normal);

        verticalLayout_8->addWidget(Usuario_DB);

        password_DB = new QLineEdit(layoutWidget);
        password_DB->setObjectName(QStringLiteral("password_DB"));
        password_DB->setEchoMode(QLineEdit::Password);

        verticalLayout_8->addWidget(password_DB);


        horizontalLayout_4->addLayout(verticalLayout_8);

        fr_TS = new QFrame(Configuracion);
        fr_TS->setObjectName(QStringLiteral("fr_TS"));
        fr_TS->setGeometry(QRect(540, 0, 411, 211));
        fr_TS->setFrameShape(QFrame::StyledPanel);
        fr_TS->setFrameShadow(QFrame::Raised);
        label_17 = new QLabel(fr_TS);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(11, 101, 16, 17));
        layoutWidget1 = new QWidget(fr_TS);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 40, 381, 151));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_3->addWidget(label_7);

        label_22 = new QLabel(layoutWidget1);
        label_22->setObjectName(QStringLiteral("label_22"));

        verticalLayout_3->addWidget(label_22);

        label_23 = new QLabel(layoutWidget1);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout_3->addWidget(label_23);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        servidor = new QLineEdit(layoutWidget1);
        servidor->setObjectName(QStringLiteral("servidor"));

        verticalLayout_4->addWidget(servidor);

        usuario_ad = new QLineEdit(layoutWidget1);
        usuario_ad->setObjectName(QStringLiteral("usuario_ad"));

        verticalLayout_4->addWidget(usuario_ad);

        clave_ad = new QLineEdit(layoutWidget1);
        clave_ad->setObjectName(QStringLiteral("clave_ad"));
        clave_ad->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(clave_ad);


        gridLayout->addLayout(verticalLayout_4, 0, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        rb_rdesktop = new QRadioButton(layoutWidget1);
        rb_rdesktop->setObjectName(QStringLiteral("rb_rdesktop"));
        rb_rdesktop->setAcceptDrops(true);
        rb_rdesktop->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(rb_rdesktop);

        rb_freerdp = new QRadioButton(layoutWidget1);
        rb_freerdp->setObjectName(QStringLiteral("rb_freerdp"));

        horizontalLayout_2->addWidget(rb_freerdp);

        cb_resolucion = new QComboBox(layoutWidget1);
        cb_resolucion->setObjectName(QStringLiteral("cb_resolucion"));

        horizontalLayout_2->addWidget(cb_resolucion);


        verticalLayout_6->addLayout(horizontalLayout_2);

        PB_TS = new QPushButton(fr_TS);
        PB_TS->setObjectName(QStringLiteral("PB_TS"));
        PB_TS->setGeometry(QRect(370, 10, 30, 25));
        PB_TS->setIcon(icon);
        PB_TS->setIconSize(QSize(25, 25));
        label_16 = new QLabel(fr_TS);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 10, 349, 19));
        label_16->setFont(font);
        buttonBox = new QDialogButtonBox(Configuracion);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(790, 470, 160, 25));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        fr_kerberos = new QFrame(Configuracion);
        fr_kerberos->setObjectName(QStringLiteral("fr_kerberos"));
        fr_kerberos->setGeometry(QRect(540, 390, 411, 71));
        fr_kerberos->setFrameShape(QFrame::StyledPanel);
        fr_kerberos->setFrameShadow(QFrame::Raised);
        layoutWidget2 = new QWidget(fr_kerberos);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 40, 311, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout->addWidget(label_9);

        Btn_Kerberos = new QPushButton(layoutWidget2);
        Btn_Kerberos->setObjectName(QStringLiteral("Btn_Kerberos"));

        horizontalLayout->addWidget(Btn_Kerberos);

        label_29 = new QLabel(fr_kerberos);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(20, 10, 349, 21));
        label_29->setFont(font);
        PB_kerberos = new QPushButton(fr_kerberos);
        PB_kerberos->setObjectName(QStringLiteral("PB_kerberos"));
        PB_kerberos->setGeometry(QRect(370, 10, 31, 25));
        PB_kerberos->setIcon(icon);
        PB_kerberos->setIconSize(QSize(25, 25));
        fr_rutas = new QFrame(Configuracion);
        fr_rutas->setObjectName(QStringLiteral("fr_rutas"));
        fr_rutas->setGeometry(QRect(0, 240, 541, 221));
        fr_rutas->setFrameShape(QFrame::StyledPanel);
        fr_rutas->setFrameShadow(QFrame::Raised);
        lb_rutas = new QLabel(fr_rutas);
        lb_rutas->setObjectName(QStringLiteral("lb_rutas"));
        lb_rutas->setGeometry(QRect(10, 10, 339, 18));
        lb_rutas->setFont(font);
        lb_rutas->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        PB_rutas = new QPushButton(fr_rutas);
        PB_rutas->setObjectName(QStringLiteral("PB_rutas"));
        PB_rutas->setGeometry(QRect(500, 10, 31, 25));
        PB_rutas->setIcon(icon);
        PB_rutas->setIconSize(QSize(25, 25));
        widget = new QWidget(fr_rutas);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(12, 41, 521, 171));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_15 = new QLabel(widget);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_5->addWidget(label_15);

        label_14 = new QLabel(widget);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_5->addWidget(label_14);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_5->addWidget(label_10);

        Btn_lupa = new QPushButton(widget);
        Btn_lupa->setObjectName(QStringLiteral("Btn_lupa"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("iconos/lupa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Btn_lupa->setIcon(icon1);

        horizontalLayout_5->addWidget(Btn_lupa);


        verticalLayout_5->addLayout(horizontalLayout_5);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_5->addWidget(label_12);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_5->addWidget(label_13);

        label_18 = new QLabel(widget);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_5->addWidget(label_18);


        horizontalLayout_6->addLayout(verticalLayout_5);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(1);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        correoweb = new QLineEdit(widget);
        correoweb->setObjectName(QStringLiteral("correoweb"));

        verticalLayout_10->addWidget(correoweb);

        cronos = new QLineEdit(widget);
        cronos->setObjectName(QStringLiteral("cronos"));

        verticalLayout_10->addWidget(cronos);

        ISL = new QLineEdit(widget);
        ISL->setObjectName(QStringLiteral("ISL"));

        verticalLayout_10->addWidget(ISL);

        GLPI = new QLineEdit(widget);
        GLPI->setObjectName(QStringLiteral("GLPI"));

        verticalLayout_10->addWidget(GLPI);

        OCS = new QLineEdit(widget);
        OCS->setObjectName(QStringLiteral("OCS"));

        verticalLayout_10->addWidget(OCS);

        beiro = new QLineEdit(widget);
        beiro->setObjectName(QStringLiteral("beiro"));

        verticalLayout_10->addWidget(beiro);


        horizontalLayout_6->addLayout(verticalLayout_10);

        layoutWidget->raise();
        lb_rutas->raise();
        PB_rutas->raise();
        Btn_lupa->raise();
        fr_linux = new QFrame(Configuracion);
        fr_linux->setObjectName(QStringLiteral("fr_linux"));
        fr_linux->setGeometry(QRect(0, 0, 541, 241));
        fr_linux->setFrameShape(QFrame::StyledPanel);
        fr_linux->setFrameShadow(QFrame::Raised);
        layoutWidget3 = new QWidget(fr_linux);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 40, 521, 191));
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
        label_34->setGeometry(QRect(10, 10, 461, 18));
        label_34->setFont(font);
        PB_linux = new QPushButton(fr_linux);
        PB_linux->setObjectName(QStringLiteral("PB_linux"));
        PB_linux->setGeometry(QRect(500, 10, 31, 25));
        PB_linux->setIcon(icon);
        PB_linux->setIconSize(QSize(25, 25));
        pushButton_2 = new QPushButton(Configuracion);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 470, 89, 25));
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
        label_11->setText(QString());
        PB_DB->setText(QString());
        label_24->setText(QApplication::translate("Configuracion", "Configuraci\303\263n de la Base de Datos", Q_NULLPTR));
        label_25->setText(QApplication::translate("Configuracion", "Servidor BD", Q_NULLPTR));
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
        label_17->setText(QString());
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
        rb_freerdp->setText(QApplication::translate("Configuracion", "&freerdp", Q_NULLPTR));
        cb_resolucion->clear();
        cb_resolucion->insertItems(0, QStringList()
         << QApplication::translate("Configuracion", "1920x1080", Q_NULLPTR)
         << QApplication::translate("Configuracion", "1024x740", Q_NULLPTR)
         << QApplication::translate("Configuracion", "800x600", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        cb_resolucion->setToolTip(QApplication::translate("Configuracion", "Resoluci\303\263n de pantalla del servidor AD", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        PB_TS->setText(QString());
        label_16->setText(QApplication::translate("Configuracion", "Configuraci\303\263n de Terminal Server", Q_NULLPTR));
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
        pushButton_2->setText(QApplication::translate("Configuracion", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Configuracion: public Ui_Configuracion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURACION_H
