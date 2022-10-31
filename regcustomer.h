#ifndef REGCUSTOMER_H
#define REGCUSTOMER_H

#include <QDialog>

namespace Ui {
class registrations;
}

class registrations : public QDialog
{
    Q_OBJECT

public:
    explicit registrations(QWidget *parent = nullptr);
    ~registrations();

private:
    Ui::registrations *ui;
};

#endif // REGCUSTOMER_H
