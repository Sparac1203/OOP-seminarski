#include "igrac.h"
#include "ui_igrac.h"
#include "gameplay.h"
#include <QMessageBox>

Igrac::Igrac(QWidget *parent) : QDialog(parent), ui(new Ui::Igrac)
{
    ui->setupUi(this);
}

Igrac::~Igrac()
{
    delete ui;
}

void Igrac::on_pushButton_clicked()
{
    QString igrac1 = ui->lineEdit_igrac1->text();
    QString igrac2 = ui->lineEdit_igrac2->text();

    if (igrac1 == "")
    {
        QMessageBox::warning(this, "IGRAC 1", "Ime prvog igraca nije unešeno!");
    }
    else if (igrac2 == "")
    {
        QMessageBox::warning(this, "IGRAC 2", "Ime drugog igraca nije unešeno!");
    }
    else
    {
        hide();
        GamePlay _gameplay;
        _gameplay.setModal(true);
        _gameplay.exec();
    }
}
