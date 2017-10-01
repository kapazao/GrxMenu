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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equipos
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;

    void setupUi(QWidget *Equipos)
    {
        if (Equipos->objectName().isEmpty())
            Equipos->setObjectName(QStringLiteral("Equipos"));
        Equipos->resize(400, 300);
        layoutWidget = new QWidget(Equipos);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 10, 125, 436));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        verticalLayout->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        verticalLayout->addWidget(pushButton_11);


        retranslateUi(Equipos);

        QMetaObject::connectSlotsByName(Equipos);
    } // setupUi

    void retranslateUi(QWidget *Equipos)
    {
        Equipos->setWindowTitle(QApplication::translate("Equipos", "Form", 0));
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
        pushButton_11->setText(QApplication::translate("Equipos", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Equipos: public Ui_Equipos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPOS_H
