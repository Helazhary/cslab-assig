#ifndef BUY_SELL_H
#define BUY_SELL_H

#include <QMainWindow>
class regcustoemr;
;



QT_BEGIN_NAMESPACE
namespace Ui { class BUY_SELL; }
QT_END_NAMESPACE

class BUY_SELL : public QMainWindow
{
    Q_OBJECT

public:
    BUY_SELL(QWidget *parent = nullptr);
    ~BUY_SELL();

private slots:
    void on_pbcustomer_clicked();

    void on_pbseller_clicked();

private:
    Ui::BUY_SELL *ui;

    registration* regwin;

};

#endif // BUY_SELL_H
