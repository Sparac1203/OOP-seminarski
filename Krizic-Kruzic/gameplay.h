#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include <QDialog>
#define MAX_tablica 3

namespace Ui
{
    class GamePlay;
}

class GamePlay : public QDialog
{
    Q_OBJECT

public:
    explicit GamePlay(QWidget *parent = nullptr);
    void setIgrac(QString wigrac1, QString wigrac2, int w1, int w2, int x);
    QString Igrac1;
    QString Igrac2;

    ~GamePlay();

private slots:
    void on_pushButton_NewGame_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    /*  -Proglasava pobjedu/nerijeseno- */
    void Stanje(int brojac, int provjera);
    /*  -Nakon svakog poteza provjerava ima li pobjednika-  */
    int Provjera_Pobjede(char xo[MAX_tablica][MAX_tablica]);

    void on_pushButton_PredajPartiju_clicked();

    void on_pushButton_SaveGame_clicked();

private:
    Ui::GamePlay *ui;
};

#endif // GAMEPLAY_H
