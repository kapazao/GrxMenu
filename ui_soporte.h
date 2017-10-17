/********************************************************************************
** Form generated from reading UI file 'soporte.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Soporte
{
public:
    QPlainTextEdit *TextoSalida;
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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Soporte)
    {
        if (Soporte->objectName().isEmpty())
            Soporte->setObjectName(QStringLiteral("Soporte"));
        Soporte->resize(811, 722);
        TextoSalida = new QPlainTextEdit(Soporte);
        TextoSalida->setObjectName(QStringLiteral("TextoSalida"));
        TextoSalida->setGeometry(QRect(10, 350, 781, 331));
        TextoSalida->setFocusPolicy(Qt::NoFocus);
        TextoSalida->setReadOnly(true);
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

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(Soporte);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(420, 290, 89, 25));

        retranslateUi(Soporte);
        QObject::connect(lineEdit_ip, SIGNAL(returnPressed()), Btn_Buscar, SLOT(click()));

        QMetaObject::connectSlotsByName(Soporte);
    } // setupUi

    void retranslateUi(QDialog *Soporte)
    {
        Soporte->setWindowTitle(QApplication::translate("Soporte", "Dialog", Q_NULLPTR));
        label_13->setText(QApplication::translate("Soporte", "Soporte Inform\303\241tico", Q_NULLPTR));
        label_2->setText(QApplication::translate("Soporte", "Sede", Q_NULLPTR));
        label->setText(QApplication::translate("Soporte", "Ip/red ", Q_NULLPTR));
        label_3->setText(QApplication::translate("Soporte", "Tel\303\251fono", Q_NULLPTR));
        label_4->setText(QApplication::translate("Soporte", "Extensi\303\263n", Q_NULLPTR));
        label_5->setText(QApplication::translate("Soporte", "Direcci\303\263n", Q_NULLPTR));
        label_6->setText(QApplication::translate("Soporte", "N\303\272mero", Q_NULLPTR));
        label_7->setText(QApplication::translate("Soporte", "ADSL", Q_NULLPTR));
        label_8->setText(QApplication::translate("Soporte", "N\302\272Adm", Q_NULLPTR));
        label_9->setText(QApplication::translate("Soporte", "Centro", Q_NULLPTR));
        label_10->setText(QApplication::translate("Soporte", "Tel\303\251fono", Q_NULLPTR));
        label_11->setText(QApplication::translate("Soporte", "Servicio", Q_NULLPTR));
        label_12->setText(QApplication::translate("Soporte", "Caudal", Q_NULLPTR));
        Btn_Buscar->setText(QApplication::translate("Soporte", "Escanear", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Soporte", "Ping", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Soporte", "Incidencia", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Soporte", "mtr", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Soporte", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Soporte: public Ui_Soporte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOPORTE_H
