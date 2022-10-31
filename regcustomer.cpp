#include "regcustomer.h"
#include "ui_registrations.h"

registrations::registrations(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrations)
{
    ui->setupUi(this);
}

registrations::~registrations()
{
    delete ui;
}
