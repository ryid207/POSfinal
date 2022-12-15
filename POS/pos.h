#ifndef POS_H
#define POS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class POS; }
QT_END_NAMESPACE

class POS : public QMainWindow
{
    Q_OBJECT

public:
    POS(QWidget *parent = nullptr);
    ~POS();

private slots:
    void on_orderView_clicked(const QModelIndex &index);

    void on_shrimpButton_clicked();

    void on_enchiladasButton_clicked();

    void on_fishTacosButton_clicked();

    void on_salmonButton_clicked();

    void on_crabCakeButton_clicked();

    void on_potatoBitesbutton_clicked();

    void on_carrotsButton_clicked();

    void on_riceButton_clicked();

    void on_cheeseCakeButton_clicked();

    void on_applePieButton_clicked();

    void on_browniesButton_clicked();

    void on_CakeButton_clicked();

    void on_SodaButton_clicked();

    void on_mixDrinkButton_clicked();

    void on_shakesButton_clicked();

    void on_lemonadesButton_clicked();

private:
    Ui::POS *ui;
};
#endif // POS_H
