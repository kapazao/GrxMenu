/********************************************************************************
** Form generated from reading UI file 'equipos.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUIPOS_H
#define UI_EQUIPOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equipos
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_14;
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_ip;
    QLabel *label_puertos;
    QLabel *label_tipo;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_ip;
    QLineEdit *lineEdit_puertos;
    QLineEdit *lineEdit_tipo;
    QLineEdit *lineEdit_4;
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

    void setupUi(QWidget *Equipos)
    {
        if (Equipos->objectName().isEmpty())
            Equipos->setObjectName(QStringLiteral("Equipos"));
        Equipos->resize(1255, 714);
        label = new QLabel(Equipos);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 252, 28));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        layoutWidget = new QWidget(Equipos);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 310, 311, 215));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout_2->addWidget(pushButton_7);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        verticalLayout->addWidget(pushButton_10);

        pushButton_14 = new QPushButton(layoutWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));

        verticalLayout->addWidget(pushButton_14);

        pushButton_13 = new QPushButton(layoutWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        verticalLayout->addWidget(pushButton_13);

        pushButton_12 = new QPushButton(layoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        verticalLayout->addWidget(pushButton_12);

        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        verticalLayout->addWidget(pushButton_11);


        horizontalLayout->addLayout(verticalLayout);

        widget = new QWidget(Equipos);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(21, 43, 661, 141));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_ip = new QLabel(widget);
        label_ip->setObjectName(QStringLiteral("label_ip"));

        verticalLayout_3->addWidget(label_ip);

        label_puertos = new QLabel(widget);
        label_puertos->setObjectName(QStringLiteral("label_puertos"));

        verticalLayout_3->addWidget(label_puertos);

        label_tipo = new QLabel(widget);
        label_tipo->setObjectName(QStringLiteral("label_tipo"));

        verticalLayout_3->addWidget(label_tipo);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lineEdit_ip = new QLineEdit(widget);
        lineEdit_ip->setObjectName(QStringLiteral("lineEdit_ip"));

        verticalLayout_4->addWidget(lineEdit_ip);

        lineEdit_puertos = new QLineEdit(widget);
        lineEdit_puertos->setObjectName(QStringLiteral("lineEdit_puertos"));

        verticalLayout_4->addWidget(lineEdit_puertos);

        lineEdit_tipo = new QLineEdit(widget);
        lineEdit_tipo->setObjectName(QStringLiteral("lineEdit_tipo"));

        verticalLayout_4->addWidget(lineEdit_tipo);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_4->addWidget(lineEdit_4);


        horizontalLayout_2->addLayout(verticalLayout_4);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_hostname = new QLabel(widget);
        label_hostname->setObjectName(QStringLiteral("label_hostname"));

        verticalLayout_6->addWidget(label_hostname);

        label_status = new QLabel(widget);
        label_status->setObjectName(QStringLiteral("label_status"));

        verticalLayout_6->addWidget(label_status);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_6->addWidget(label_8);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_6->addWidget(label_9);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        lineEdit_hostname = new QLineEdit(widget);
        lineEdit_hostname->setObjectName(QStringLiteral("lineEdit_hostname"));

        verticalLayout_5->addWidget(lineEdit_hostname);

        lineEdit_status = new QLineEdit(widget);
        lineEdit_status->setObjectName(QStringLiteral("lineEdit_status"));

        verticalLayout_5->addWidget(lineEdit_status);

        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        verticalLayout_5->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(widget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        verticalLayout_5->addWidget(lineEdit_8);


        horizontalLayout_3->addLayout(verticalLayout_5);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        retranslateUi(Equipos);

        QMetaObject::connectSlotsByName(Equipos);
    } // setupUi

    void retranslateUi(QWidget *Equipos)
    {
        Equipos->setWindowTitle(QApplication::translate("Equipos", "Equipos", 0));
        label->setText(QApplication::translate("Equipos", "Informaci\303\263n del Equipo", 0));
        pushButton->setText(QApplication::translate("Equipos", "Carpeta", 0));
        pushButton_2->setText(QApplication::translate("Equipos", "ssh", 0));
        pushButton_3->setText(QApplication::translate("Equipos", "systemconfig", 0));
        pushButton_4->setText(QApplication::translate("Equipos", "networkmanager", 0));
        pushButton_5->setText(QApplication::translate("Equipos", "CUPS", 0));
        pushButton_6->setText(QApplication::translate("Equipos", "PushButton", 0));
        pushButton_7->setText(QApplication::translate("Equipos", "PushButton", 0));
        pushButton_8->setText(QApplication::translate("Equipos", "PushButton", 0));
        pushButton_9->setText(QApplication::translate("Equipos", "PushButton", 0));
        pushButton_10->setText(QApplication::translate("Equipos", "PushButton", 0));
        pushButton_14->setText(QApplication::translate("Equipos", "PushButton", 0));
        pushButton_13->setText(QApplication::translate("Equipos", "PushButton", 0));
        pushButton_12->setText(QApplication::translate("Equipos", "PushButton", 0));
        pushButton_11->setText(QApplication::translate("Equipos", "PushButton", 0));
        label_ip->setText(QApplication::translate("Equipos", "IP", 0));
        label_puertos->setText(QApplication::translate("Equipos", "Puertos abiertos", 0));
        label_tipo->setText(QApplication::translate("Equipos", "Tipo", 0));
        label_4->setText(QApplication::translate("Equipos", "TextLabel", 0));
        label_hostname->setText(QApplication::translate("Equipos", "Hostname", 0));
        label_status->setText(QApplication::translate("Equipos", "Status", 0));
        label_8->setText(QApplication::translate("Equipos", "TextLabel", 0));
        label_9->setText(QApplication::translate("Equipos", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Equipos: public Ui_Equipos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPOS_H
