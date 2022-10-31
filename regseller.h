#ifndef REGSELLER_H
#define REGSELLER_H

#include <QDialog>

class buy_sell;

namespace Ui {
class registration;
}

class registration : public QDialog
{
    Q_OBJECT

public:
    explicit registration(QWidget *parent = nullptr);
    ~registration();

private:
    Ui::registration *ui;


    QString name,address,email,number;

};

#endif // REGSELLER_H
