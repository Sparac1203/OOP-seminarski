#include "prosle_igre.h"
#include "ui_prosle_igre.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDir>

Prosle_igre::Prosle_igre(QWidget *parent) : QDialog(parent), ui(new Ui::Prosle_igre)
{
    ui->setupUi(this);
    this->setWindowTitle("Rezultati odigranih igara");
}

Prosle_igre::~Prosle_igre()
{
    delete ui;
}

void Prosle_igre::on_pushButton_load_clicked()
{
    QString path = QDir::homePath();
    QString filter = "All file (*.*) ;; Text file (*.txt*)";
    QString file_name = QFileDialog::getOpenFileName(this, "Učitaj rezultat", path, filter);
    QFile file(file_name);
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "GREŠKA", "File nije otvoren");
    }
    
    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
    file.close();
}
