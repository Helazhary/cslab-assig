#include "buy_sell.h"
#include "ui_buy_sell.h"
#include "regseller.h"

BUY_SELL::BUY_SELL(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BUY_SELL)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/Salma Youssef/Downloads/local-market-place-with-vegetables-and-fruits-vector-26872866.jpg");
ui->labelpic->setPixmap(pix);

}

BUY_SELL::~BUY_SELL()
{
    delete ui;
}



void BUY_SELL::on_pbcustomer_clicked()
{

regwin = new registration();
regwin->show();
this->close();

}


void BUY_SELL::on_pbseller_clicked()
{
    regwin = new registration();
    regwin->show();
    this->close();
}

