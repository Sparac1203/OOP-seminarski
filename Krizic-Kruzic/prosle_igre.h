#ifndef PROSLE_IGRE_H
#define PROSLE_IGRE_H

#include <QDialog>

namespace Ui
{
    class Prosle_igre;
}

class Prosle_igre : public QDialog
{
    Q_OBJECT

public:
    explicit Prosle_igre(QWidget *parent = nullptr);
    ~Prosle_igre();

private slots:
    void on_pushButton_load_clicked();

private:
    Ui::Prosle_igre *ui;
};

#endif // PROSLE_IGRE_H
