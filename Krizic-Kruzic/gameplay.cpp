#include "gameplay.h"
#include "ui_gameplay.h"
#include "igrac.h"
#include <QMessageBox>
#include <QPixmap>

#define MAX_tablica 3

/*O brojacu ovisi koji je igrac na redu*/
int brojac = 0;
/*provjera == 1 ako je netko pobjedio, provjera == 2 ako je nerijesno*/
int provjera = 0;

char xo[MAX_tablica][MAX_tablica] = {'1', '2', '3',
                                     '4', '5', '6',
                                     '7', '8', '9'}; //oznake svakog polja

GamePlay::GamePlay(QWidget *parent) : QDialog(parent), ui(new Ui::GamePlay)
{
    ui->setupUi(this);

    /*Postavljanje slike X za igraca 1*/
    QPixmap krizic(":/Ikone/Slike/Krizic.png");
    int width_krizic = ui->label_krizic->width();
    int height_krizic = ui->label_krizic->height();
    ui->label_krizic->setPixmap(krizic.scaled(width_krizic, height_krizic, Qt::KeepAspectRatio));

    /*Postavljanje slike O za igraca 2*/
    QPixmap kruzic(":/Ikone/Slike/Kruzic.png");
    int width_kruzic = ui->label_kruzic->width();
    int height_kruzic = ui->label_kruzic->height();
    ui->label_kruzic->setPixmap(kruzic.scaled(width_kruzic, height_kruzic, Qt::KeepAspectRatio));

    /*Prilikom pokretanja nove igre tablicu inicijalizira na pocetnu vrijednost*/
    char broj = '1';
    for (int i = 0; i < MAX_tablica; i++)
    {
        for (int j = 0; j < MAX_tablica; j++)
        {
            xo[i][j] = broj;
            broj++;
        }
    }
    brojac = 0;
}

GamePlay::~GamePlay()
{
    delete ui;
}

void GamePlay::on_pushButton_NewGame_clicked()
{
    hide();
    GamePlay _gameplay;
    _gameplay.setModal(true);
    _gameplay.exec();
}

void GamePlay::on_pushButton_1_clicked()
{
    if (xo[0][0] != 'X' && xo[0][0] != 'O')
    {
        brojac++;
        if (brojac % 2 != 0)
        {
            xo[0][0] = 'X';
            ui->pushButton_1->setText("X");
        }
        else
        {
            xo[0][0] = 'O';
            ui->pushButton_1->setText("O");
        }
        Stanje(brojac, provjera);
    }
    else
    {
        QMessageBox::critical(this, "GRESKA", "Ovo polje je vec odigrano");
    }
}

void GamePlay::on_pushButton_2_clicked()
{
    if (xo[0][1] != 'X' && xo[0][1] != 'O')
    {
        brojac++;
        if (brojac % 2 != 0)
        {
            xo[0][1] = 'X';
            ui->pushButton_2->setText("X");
        }
        else
        {
            xo[0][1] = 'O';
            ui->pushButton_2->setText("O");
        }
        Stanje(brojac, provjera);
    }
    else
    {
        QMessageBox::critical(this, "GRESKA", "Ovo polje je vec odigrano");
    }
}

void GamePlay::on_pushButton_3_clicked()
{
    if (xo[0][2] != 'X' && xo[0][2] != 'O')
    {
        brojac++;
        if (brojac % 2 != 0)
        {
            xo[0][2] = 'X';
            ui->pushButton_3->setText("X");
        }
        else
        {
            xo[0][2] = 'O';
            ui->pushButton_3->setText("O");
        }
        Stanje(brojac, provjera);
    }
    else
    {
        QMessageBox::critical(this, "GRESKA", "Ovo polje je vec odigrano");
    }
}

void GamePlay::on_pushButton_4_clicked()
{
    if (xo[1][0] != 'X' && xo[1][0] != 'O')
    {
        brojac++;
        if (brojac % 2 != 0)
        {
            xo[1][0] = 'X';
            ui->pushButton_4->setText("X");
        }
        else
        {
            xo[1][0] = 'O';
            ui->pushButton_4->setText("O");
        }
        Stanje(brojac, provjera);
    }
    else
    {
        QMessageBox::critical(this, "GRESKA", "Ovo polje je vec odigrano");
    }
}

void GamePlay::on_pushButton_5_clicked()
{
    if (xo[1][1] != 'X' && xo[1][1] != 'O')
    {
        brojac++;
        if (brojac % 2 != 0)
        {
            xo[1][1] = 'X';
            ui->pushButton_5->setText("X");
        }
        else
        {
            xo[1][1] = 'O';
            ui->pushButton_5->setText("O");
        }
        Stanje(brojac, provjera);
    }
    else
    {
        QMessageBox::critical(this, "GRESKA", "Ovo polje je vec odigrano");
    }
}

void GamePlay::on_pushButton_6_clicked()
{
    if (xo[1][2] != 'X' && xo[1][2] != 'O')
    {
        brojac++;
        if (brojac % 2 != 0)
        {
            xo[1][2] = 'X';
            ui->pushButton_6->setText("X");
        }
        else
        {
            xo[1][2] = 'O';
            ui->pushButton_6->setText("O");
        }
        Stanje(brojac, provjera);
    }
    else
    {
        QMessageBox::critical(this, "GRESKA", "Ovo polje je vec odigrano");
    }
}

void GamePlay::on_pushButton_7_clicked()
{
    if (xo[2][0] != 'X' && xo[2][0] != 'O')
    {
        brojac++;
        if (brojac % 2 != 0)
        {
            xo[2][0] = 'X';
            ui->pushButton_7->setText("X");
        }
        else
        {
            xo[2][0] = 'O';
            ui->pushButton_7->setText("O");
        }
        Stanje(brojac, provjera);
    }
    else
    {
        QMessageBox::critical(this, "GRESKA", "Ovo polje je vec odigrano");
    }
}

void GamePlay::on_pushButton_8_clicked()
{
    if (xo[2][1] != 'X' && xo[2][1] != 'O')
    {
        brojac++;
        if (brojac % 2 != 0)
        {
            xo[2][1] = 'X';
            ui->pushButton_8->setText("X");
        }
        else
        {
            xo[2][1] = 'O';
            ui->pushButton_8->setText("O");
        }
        Stanje(brojac, provjera);
    }
    else
    {
        QMessageBox::critical(this, "GRESKA", "Ovo polje je vec odigrano");
    }
}

void GamePlay::on_pushButton_9_clicked()
{
    if (xo[2][2] != 'X' && xo[2][2] != 'O')
    {
        brojac++;
        if (brojac % 2 != 0)
        {
            xo[2][2] = 'X';
            ui->pushButton_9->setText("X");
        }
        else
        {
            xo[2][2] = 'O';
            ui->pushButton_9->setText("O");
        }
        Stanje(brojac, provjera);
    }
    else
    {
        QMessageBox::critical(this, "GRESKA", "Ovo polje je vec odigrano");
    }
}

int GamePlay::Provjera_Pobjede(char xo[MAX_tablica][MAX_tablica])
{
    if (xo[0][0] == xo[0][1] && xo[0][1] == xo[0][2])
    {
        return 1;
    }
    else if (xo[1][0] == xo[1][1] && xo[1][1] == xo[1][2])
    {
        return 1;
    }
    else if (xo[2][0] == xo[2][1] && xo[2][1] == xo[2][2])
    {
        return 1;
    }
    else if (xo[0][0] == xo[1][0] && xo[1][0] == xo[2][0])
    {
        return 1;
    }
    else if (xo[0][1] == xo[1][1] && xo[1][1] == xo[2][1])
    {
        return 1;
    }
    else if (xo[0][2] == xo[1][2] && xo[1][2] == xo[2][2])
    {
        return 1;
    }
    else if (xo[0][0] == xo[1][1] && xo[1][1] == xo[2][2])
    {
        return 1;
    }
    else if (xo[0][2] == xo[1][1] && xo[1][1] == xo[2][0])
    {
        return 1;
    }
    else if (xo[0][0] != '1' && xo[0][1] != '2' && xo[0][2] != '3' && xo[1][0] != '4' && xo[1][1] != '5' && xo[1][2] != '6' && xo[2][0] != '7' && xo[2][1] != '8' && xo[2][2] != '9')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

void GamePlay::Stanje(int brojac, int provjera)
{
    provjera = Provjera_Pobjede(xo);
    QMessageBox::StandardButton odgovor;
    if (provjera == 1)
    {
        if (brojac % 2 != 0)
        {
            odgovor = QMessageBox::question(this, "POBJEDA", "POBJEDIO JE 1. IGRAC\nZelite li odigrati uzvrat", QMessageBox::Yes | QMessageBox::No);
        }
        else
        {
            odgovor = QMessageBox::question(this, "POBJEDA", "POBJEDIO JE 2. IGRAC!\nZelite li odigrati uzvrat", QMessageBox::Yes | QMessageBox::No);
        }
        if (odgovor == QMessageBox::Yes)
        {
            hide();
            GamePlay _gameplay;
            _gameplay.setModal(true);
            _gameplay.exec();
        }
        else
        {
        }
        hide();
    }
    else if (provjera == 2)
    {
        odgovor = QMessageBox::question(this, "NERIJESENO", "OVA PARTIJA JE NERIJESENA!\nZelite li odigrati uzvrat", QMessageBox::Yes | QMessageBox::No);
        if (odgovor == QMessageBox::Yes)
        {
            hide();
            GamePlay _gameplay;
            _gameplay.setModal(true);
            _gameplay.exec();
        }
        else
        {
        }
        hide();
    }
}
