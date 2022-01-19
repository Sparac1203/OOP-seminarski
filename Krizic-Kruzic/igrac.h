#ifndef IGRAC_H
#define IGRAC_H

#include <QDialog>

namespace Ui
{
    class Igrac;
}

class Igrac : public QDialog
{
    Q_OBJECT

public:
    explicit Igrac(QWidget *parent = nullptr);
    QString igrac1;
    QString igrac2;
    ~Igrac();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Igrac *ui;
};

#endif // IGRAC_H
