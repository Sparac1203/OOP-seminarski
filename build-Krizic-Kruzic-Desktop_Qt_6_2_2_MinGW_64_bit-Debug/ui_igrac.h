/********************************************************************************
** Form generated from reading UI file 'igrac.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IGRAC_H
#define UI_IGRAC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Igrac
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_igrac1;
    QLineEdit *lineEdit_igrac1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_igrac2;
    QLineEdit *lineEdit_igrac2;
    QPushButton *pushButton;

    void setupUi(QDialog *Igrac)
    {
        if (Igrac->objectName().isEmpty())
            Igrac->setObjectName(QString::fromUtf8("Igrac"));
        Igrac->resize(421, 332);
        gridLayout = new QGridLayout(Igrac);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(Igrac);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_igrac1 = new QLabel(Igrac);
        label_igrac1->setObjectName(QString::fromUtf8("label_igrac1"));

        horizontalLayout->addWidget(label_igrac1);

        lineEdit_igrac1 = new QLineEdit(Igrac);
        lineEdit_igrac1->setObjectName(QString::fromUtf8("lineEdit_igrac1"));

        horizontalLayout->addWidget(lineEdit_igrac1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_igrac2 = new QLabel(Igrac);
        label_igrac2->setObjectName(QString::fromUtf8("label_igrac2"));

        horizontalLayout_2->addWidget(label_igrac2);

        lineEdit_igrac2 = new QLineEdit(Igrac);
        lineEdit_igrac2->setObjectName(QString::fromUtf8("lineEdit_igrac2"));

        horizontalLayout_2->addWidget(lineEdit_igrac2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        pushButton = new QPushButton(Igrac);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(Igrac);

        QMetaObject::connectSlotsByName(Igrac);
    } // setupUi

    void retranslateUi(QDialog *Igrac)
    {
        Igrac->setWindowTitle(QCoreApplication::translate("Igrac", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Igrac", "<html><head/><body><h2 style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Unos igra\304\215a:</span></h2></body></html>", nullptr));
        label_igrac1->setText(QCoreApplication::translate("Igrac", "Igrac 1:", nullptr));
        label_igrac2->setText(QCoreApplication::translate("Igrac", "Igrac 2:", nullptr));
        pushButton->setText(QCoreApplication::translate("Igrac", "U redu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Igrac: public Ui_Igrac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IGRAC_H
