/********************************************************************************
** Form generated from reading UI file 'gameplay.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEPLAY_H
#define UI_GAMEPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GamePlay
{
public:
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_igrac1ime;
    QLabel *label_krizic;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_igrac2ime;
    QLabel *label_kruzic;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_SaveGame;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_PredajPartiju;
    QPushButton *pushButton_NewGame;

    void setupUi(QDialog *GamePlay)
    {
        if (GamePlay->objectName().isEmpty())
            GamePlay->setObjectName(QString::fromUtf8("GamePlay"));
        GamePlay->resize(738, 471);
        verticalLayout_5 = new QVBoxLayout(GamePlay);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(GamePlay);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_5->addWidget(label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_1 = new QPushButton(GamePlay);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(50);
        pushButton_1->setFont(font);

        verticalLayout->addWidget(pushButton_1);

        pushButton_4 = new QPushButton(GamePlay);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font);

        verticalLayout->addWidget(pushButton_4);

        pushButton_7 = new QPushButton(GamePlay);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFont(font);

        verticalLayout->addWidget(pushButton_7);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_2 = new QPushButton(GamePlay);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font);

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(GamePlay);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font);

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_8 = new QPushButton(GamePlay);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font);

        verticalLayout_2->addWidget(pushButton_8);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton_3 = new QPushButton(GamePlay);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font);

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_6 = new QPushButton(GamePlay);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font);

        verticalLayout_3->addWidget(pushButton_6);

        pushButton_9 = new QPushButton(GamePlay);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFont(font);

        verticalLayout_3->addWidget(pushButton_9);


        horizontalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_igrac1ime = new QLabel(GamePlay);
        label_igrac1ime->setObjectName(QString::fromUtf8("label_igrac1ime"));
        label_igrac1ime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_igrac1ime);

        label_krizic = new QLabel(GamePlay);
        label_krizic->setObjectName(QString::fromUtf8("label_krizic"));

        horizontalLayout_3->addWidget(label_krizic);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_igrac2ime = new QLabel(GamePlay);
        label_igrac2ime->setObjectName(QString::fromUtf8("label_igrac2ime"));
        label_igrac2ime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_igrac2ime);

        label_kruzic = new QLabel(GamePlay);
        label_kruzic->setObjectName(QString::fromUtf8("label_kruzic"));

        horizontalLayout_4->addWidget(label_kruzic);


        verticalLayout_4->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_SaveGame = new QPushButton(GamePlay);
        pushButton_SaveGame->setObjectName(QString::fromUtf8("pushButton_SaveGame"));

        horizontalLayout->addWidget(pushButton_SaveGame);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_PredajPartiju = new QPushButton(GamePlay);
        pushButton_PredajPartiju->setObjectName(QString::fromUtf8("pushButton_PredajPartiju"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_PredajPartiju->sizePolicy().hasHeightForWidth());
        pushButton_PredajPartiju->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton_PredajPartiju);

        pushButton_NewGame = new QPushButton(GamePlay);
        pushButton_NewGame->setObjectName(QString::fromUtf8("pushButton_NewGame"));
        sizePolicy1.setHeightForWidth(pushButton_NewGame->sizePolicy().hasHeightForWidth());
        pushButton_NewGame->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton_NewGame);


        verticalLayout_5->addLayout(horizontalLayout);


        retranslateUi(GamePlay);

        QMetaObject::connectSlotsByName(GamePlay);
    } // setupUi

    void retranslateUi(QDialog *GamePlay)
    {
        GamePlay->setWindowTitle(QCoreApplication::translate("GamePlay", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GamePlay", "<html><head/><body><h3 align=\"center\" style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:large; font-weight:700;\">Na redu je &quot;xy&quot; igrac</span></h3></body></html>", nullptr));
        pushButton_1->setText(QString());
        pushButton_4->setText(QString());
        pushButton_7->setText(QString());
        pushButton_2->setText(QString());
        pushButton_5->setText(QString());
        pushButton_8->setText(QString());
        pushButton_3->setText(QString());
        pushButton_6->setText(QString());
        pushButton_9->setText(QString());
        label_igrac1ime->setText(QCoreApplication::translate("GamePlay", "1. igra\304\215:", nullptr));
        label_krizic->setText(QString());
        label_igrac2ime->setText(QCoreApplication::translate("GamePlay", "2. igra\304\215:", nullptr));
        label_kruzic->setText(QString());
        pushButton_SaveGame->setText(QCoreApplication::translate("GamePlay", "Spremi igru", nullptr));
        pushButton_PredajPartiju->setText(QCoreApplication::translate("GamePlay", "Predaj partiju", nullptr));
        pushButton_NewGame->setText(QCoreApplication::translate("GamePlay", "Nova igra", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GamePlay: public Ui_GamePlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPLAY_H
