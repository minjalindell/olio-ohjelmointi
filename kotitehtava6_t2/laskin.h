#ifndef LASKIN_H
#define LASKIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class laskin; }
QT_END_NAMESPACE

class laskin : public QMainWindow
{
    Q_OBJECT

public:
    laskin(QWidget *parent = nullptr);
    ~laskin();
    float num = 0;
    float result = 1;
    float num1 = 0;
    float num2 = 0;
    int special;
    int nub = 0;


private slots:

    void AddNum(const QString &digit);

    void on_Num1_clicked();

    void on_Num2_clicked();

    void on_Num3_clicked();

    void on_Num4_clicked();

    void on_Num5_clicked();

    void on_Num6_clicked();

    void on_Num7_clicked();

    void on_Num8_clicked();

    void on_Num9_clicked();

    void on_Num0_clicked();

    void on_Clear_clicked();

    void on_Enter_clicked();

    void on_Plus_clicked();

    void on_Miinus_clicked();

    void on_Kerto_clicked();

    void on_Jako_clicked();

private:
    Ui::laskin *ui;
};
#endif // LASKIN_H
