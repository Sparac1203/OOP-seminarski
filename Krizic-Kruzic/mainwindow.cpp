#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "igrac.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*Postavljanje slike na menu*/
    QPixmap TicTacToe_pic(":/Ikone/Slike/StartingMenuPic.png");
    int width_menu = ui->label_MenuSlika->width();
    int height_menu = ui->label_MenuSlika->height();
    ui->label_MenuSlika->setPixmap(TicTacToe_pic.scaled(width_menu, height_menu, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_NovaIgra_clicked()
{
    Igrac _igrac;
    _igrac.setModal(true);
    _igrac.exec();
}

void MainWindow::on_actionNova_Igra_triggered()
{
    Igrac _igrac;
    _igrac.setModal(true);
    _igrac.exec();
}
