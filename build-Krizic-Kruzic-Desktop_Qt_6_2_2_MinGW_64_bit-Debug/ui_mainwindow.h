/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionU_itaj_igru;
    QAction *actionNova_Igra;
    QWidget *centralwidget;
    QLabel *label_MenuSlika;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_NovaIgra;
    QPushButton *pushButton_Ucitaj;
    QMenuBar *menubar;
    QMenu *menuOpcije;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(760, 511);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionU_itaj_igru = new QAction(MainWindow);
        actionU_itaj_igru->setObjectName(QString::fromUtf8("actionU_itaj_igru"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Ikone/Slike/LoadIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionU_itaj_igru->setIcon(icon);
        actionNova_Igra = new QAction(MainWindow);
        actionNova_Igra->setObjectName(QString::fromUtf8("actionNova_Igra"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Ikone/Slike/NewGameIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNova_Igra->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_MenuSlika = new QLabel(centralwidget);
        label_MenuSlika->setObjectName(QString::fromUtf8("label_MenuSlika"));
        label_MenuSlika->setEnabled(true);
        label_MenuSlika->setGeometry(QRect(50, 50, 421, 391));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(50);
        sizePolicy1.setHeightForWidth(label_MenuSlika->sizePolicy().hasHeightForWidth());
        label_MenuSlika->setSizePolicy(sizePolicy1);
        label_MenuSlika->setCursor(QCursor(Qt::WhatsThisCursor));
        label_MenuSlika->setLayoutDirection(Qt::LeftToRight);
        label_MenuSlika->setAutoFillBackground(false);
        label_MenuSlika->setFrameShape(QFrame::NoFrame);
        label_MenuSlika->setFrameShadow(QFrame::Plain);
        label_MenuSlika->setMidLineWidth(0);
        label_MenuSlika->setAlignment(Qt::AlignCenter);
        label_MenuSlika->setWordWrap(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(510, 0, 231, 451));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_NovaIgra = new QPushButton(layoutWidget);
        pushButton_NovaIgra->setObjectName(QString::fromUtf8("pushButton_NovaIgra"));
        sizePolicy.setHeightForWidth(pushButton_NovaIgra->sizePolicy().hasHeightForWidth());
        pushButton_NovaIgra->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton_NovaIgra);

        pushButton_Ucitaj = new QPushButton(layoutWidget);
        pushButton_Ucitaj->setObjectName(QString::fromUtf8("pushButton_Ucitaj"));
        sizePolicy.setHeightForWidth(pushButton_Ucitaj->sizePolicy().hasHeightForWidth());
        pushButton_Ucitaj->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton_Ucitaj);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 760, 26));
        menuOpcije = new QMenu(menubar);
        menuOpcije->setObjectName(QString::fromUtf8("menuOpcije"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOpcije->menuAction());
        menuOpcije->addAction(actionU_itaj_igru);
        menuOpcije->addAction(actionNova_Igra);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionU_itaj_igru->setText(QCoreApplication::translate("MainWindow", "U\304\215itaj_igru", nullptr));
#if QT_CONFIG(shortcut)
        actionU_itaj_igru->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNova_Igra->setText(QCoreApplication::translate("MainWindow", "Nova_igra", nullptr));
#if QT_CONFIG(shortcut)
        actionNova_Igra->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        label_MenuSlika->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h1 style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:xx-large; font-weight:700; text-decoration: underline;\">Kri\305\276i\304\207-Kru\305\276i\304\207</span></h1></body></html>", nullptr));
        pushButton_NovaIgra->setText(QCoreApplication::translate("MainWindow", "Nova igra", nullptr));
        pushButton_Ucitaj->setText(QCoreApplication::translate("MainWindow", "Nastavi spremljenu igru", nullptr));
        menuOpcije->setTitle(QCoreApplication::translate("MainWindow", "Opcije", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
