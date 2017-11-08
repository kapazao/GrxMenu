/********************************************************************************
** Form generated from reading UI file 'soporte.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOPORTE_H
#define UI_SOPORTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Soporte
{
public:
    QLabel *label_13;
    QFrame *frame;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QComboBox *cb_sede;
    QLineEdit *lineEdit_ip;
    QLineEdit *lineEdit_telefono;
    QLineEdit *lineEdit_extension;
    QLineEdit *lineEdit_direccion;
    QLineEdit *lineEdit_numero;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_adsl;
    QLineEdit *lineEdit_n_adm;
    QLineEdit *lineEdit_centro;
    QLineEdit *lineEdit_telefono_centro;
    QLineEdit *lineEdit_servicio;
    QLineEdit *lineEdit_caudal;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Btn_Buscar;
    QPushButton *Btn_Ping;
    QPushButton *Btn_Incidencia;
    QPushButton *Btn_Mtr;
    QLabel *Estado;
    QPushButton *Btn_Limpiar;
    QTabWidget *tabWidget;
    QWidget *consola;
    QPlainTextEdit *TextoSalida;

    void setupUi(QDialog *Soporte)
    {
        if (Soporte->objectName().isEmpty())
            Soporte->setObjectName(QStringLiteral("Soporte"));
        Soporte->resize(792, 765);
        label_13 = new QLabel(Soporte);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(260, 10, 291, 31));
        QFont font;
        font.setPointSize(22);
        label_13->setFont(font);
        frame = new QFrame(Soporte);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 50, 781, 231));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(210, 239, 228, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        frame->setPalette(palette);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(2);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 761, 211));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        cb_sede = new QComboBox(layoutWidget);
        cb_sede->setObjectName(QStringLiteral("cb_sede"));
        cb_sede->setEditable(true);

        verticalLayout_2->addWidget(cb_sede);

        lineEdit_ip = new QLineEdit(layoutWidget);
        lineEdit_ip->setObjectName(QStringLiteral("lineEdit_ip"));
        lineEdit_ip->setMinimumSize(QSize(0, 27));
        lineEdit_ip->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_2->addWidget(lineEdit_ip);

        lineEdit_telefono = new QLineEdit(layoutWidget);
        lineEdit_telefono->setObjectName(QStringLiteral("lineEdit_telefono"));
        lineEdit_telefono->setMinimumSize(QSize(0, 27));

        verticalLayout_2->addWidget(lineEdit_telefono);

        lineEdit_extension = new QLineEdit(layoutWidget);
        lineEdit_extension->setObjectName(QStringLiteral("lineEdit_extension"));
        lineEdit_extension->setMinimumSize(QSize(0, 27));

        verticalLayout_2->addWidget(lineEdit_extension);

        lineEdit_direccion = new QLineEdit(layoutWidget);
        lineEdit_direccion->setObjectName(QStringLiteral("lineEdit_direccion"));
        lineEdit_direccion->setMinimumSize(QSize(0, 27));

        verticalLayout_2->addWidget(lineEdit_direccion);

        lineEdit_numero = new QLineEdit(layoutWidget);
        lineEdit_numero->setObjectName(QStringLiteral("lineEdit_numero"));
        lineEdit_numero->setMinimumSize(QSize(0, 27));

        verticalLayout_2->addWidget(lineEdit_numero);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_9);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_10);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_11);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_12);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lineEdit_adsl = new QLineEdit(layoutWidget);
        lineEdit_adsl->setObjectName(QStringLiteral("lineEdit_adsl"));
        lineEdit_adsl->setMinimumSize(QSize(0, 27));

        verticalLayout_4->addWidget(lineEdit_adsl);

        lineEdit_n_adm = new QLineEdit(layoutWidget);
        lineEdit_n_adm->setObjectName(QStringLiteral("lineEdit_n_adm"));
        lineEdit_n_adm->setMinimumSize(QSize(0, 27));

        verticalLayout_4->addWidget(lineEdit_n_adm);

        lineEdit_centro = new QLineEdit(layoutWidget);
        lineEdit_centro->setObjectName(QStringLiteral("lineEdit_centro"));
        lineEdit_centro->setMinimumSize(QSize(0, 27));

        verticalLayout_4->addWidget(lineEdit_centro);

        lineEdit_telefono_centro = new QLineEdit(layoutWidget);
        lineEdit_telefono_centro->setObjectName(QStringLiteral("lineEdit_telefono_centro"));
        lineEdit_telefono_centro->setMinimumSize(QSize(0, 27));

        verticalLayout_4->addWidget(lineEdit_telefono_centro);

        lineEdit_servicio = new QLineEdit(layoutWidget);
        lineEdit_servicio->setObjectName(QStringLiteral("lineEdit_servicio"));
        lineEdit_servicio->setMinimumSize(QSize(0, 27));

        verticalLayout_4->addWidget(lineEdit_servicio);

        lineEdit_caudal = new QLineEdit(layoutWidget);
        lineEdit_caudal->setObjectName(QStringLiteral("lineEdit_caudal"));
        lineEdit_caudal->setMinimumSize(QSize(0, 27));

        verticalLayout_4->addWidget(lineEdit_caudal);


        horizontalLayout->addLayout(verticalLayout_4);

        layoutWidget1 = new QWidget(Soporte);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 300, 361, 36));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Btn_Buscar = new QPushButton(layoutWidget1);
        Btn_Buscar->setObjectName(QStringLiteral("Btn_Buscar"));

        horizontalLayout_2->addWidget(Btn_Buscar);

        Btn_Ping = new QPushButton(layoutWidget1);
        Btn_Ping->setObjectName(QStringLiteral("Btn_Ping"));

        horizontalLayout_2->addWidget(Btn_Ping);

        Btn_Incidencia = new QPushButton(layoutWidget1);
        Btn_Incidencia->setObjectName(QStringLiteral("Btn_Incidencia"));

        horizontalLayout_2->addWidget(Btn_Incidencia);

        Btn_Mtr = new QPushButton(layoutWidget1);
        Btn_Mtr->setObjectName(QStringLiteral("Btn_Mtr"));

        horizontalLayout_2->addWidget(Btn_Mtr);

        Estado = new QLabel(Soporte);
        Estado->setObjectName(QStringLiteral("Estado"));
        Estado->setGeometry(QRect(10, 700, 59, 14));
        Btn_Limpiar = new QPushButton(Soporte);
        Btn_Limpiar->setObjectName(QStringLiteral("Btn_Limpiar"));
        Btn_Limpiar->setGeometry(QRect(700, 305, 80, 25));
        tabWidget = new QTabWidget(Soporte);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 340, 781, 421));
        tabWidget->setStyleSheet(QStringLiteral("color=blue"));
        consola = new QWidget();
        consola->setObjectName(QStringLiteral("consola"));
        TextoSalida = new QPlainTextEdit(consola);
        TextoSalida->setObjectName(QStringLiteral("TextoSalida"));
        TextoSalida->setGeometry(QRect(0, 1, 771, 381));
        TextoSalida->setFocusPolicy(Qt::NoFocus);
        TextoSalida->setStyleSheet(QStringLiteral("color=blue"));
        TextoSalida->setReadOnly(false);
        tabWidget->addTab(consola, QString());

        retranslateUi(Soporte);
        QObject::connect(lineEdit_ip, SIGNAL(returnPressed()), Btn_Buscar, SLOT(click()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Soporte);
    } // setupUi

    void retranslateUi(QDialog *Soporte)
    {
        Soporte->setWindowTitle(QApplication::translate("Soporte", "Soporte", 0));
        label_13->setText(QApplication::translate("Soporte", "Soporte Inform\303\241tico", 0));
        label_2->setText(QApplication::translate("Soporte", "Sede", 0));
        label->setText(QApplication::translate("Soporte", "Ip/red ", 0));
        label_3->setText(QApplication::translate("Soporte", "Tel\303\251fono", 0));
        label_4->setText(QApplication::translate("Soporte", "Extensi\303\263n", 0));
        label_5->setText(QApplication::translate("Soporte", "Direcci\303\263n", 0));
        label_6->setText(QApplication::translate("Soporte", "N\303\272mero", 0));
        label_7->setText(QApplication::translate("Soporte", "ADSL", 0));
        label_8->setText(QApplication::translate("Soporte", "N\302\272Adm", 0));
        label_9->setText(QApplication::translate("Soporte", "Centro", 0));
        label_10->setText(QApplication::translate("Soporte", "Tel\303\251fono", 0));
        label_11->setText(QApplication::translate("Soporte", "Servicio", 0));
        label_12->setText(QApplication::translate("Soporte", "Caudal", 0));
        Btn_Buscar->setText(QApplication::translate("Soporte", "Escanear", 0));
        Btn_Ping->setText(QApplication::translate("Soporte", "Ping", 0));
        Btn_Incidencia->setText(QApplication::translate("Soporte", "Incidencia", 0));
        Btn_Mtr->setText(QApplication::translate("Soporte", "mtr", 0));
        Estado->setText(QString());
        Btn_Limpiar->setText(QApplication::translate("Soporte", "Limpiar", 0));
        tabWidget->setTabText(tabWidget->indexOf(consola), QApplication::translate("Soporte", "Consola", 0));
    } // retranslateUi

};

namespace Ui {
    class Soporte: public Ui_Soporte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOPORTE_H
