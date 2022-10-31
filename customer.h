#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QDialog>
#include <vector>
#include "product.h"
using namespace std;


namespace Ui {
class customer;
}

class customer : public QDialog
{
    Q_OBJECT

public:
    explicit customer(QWidget *parent = nullptr);
    ~customer();

private:
    Ui::customer *ui;
    QString name, address, phone_number, email;
    vector <product> cart;
};

#endif // CUSTOMER_H
