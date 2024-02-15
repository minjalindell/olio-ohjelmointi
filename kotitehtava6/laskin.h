#ifndef LASKIN_H
#define LASKIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Laskin; }
QT_END_NAMESPACE

class Laskin : public QMainWindow
{
    Q_OBJECT

public:
    Laskin(QWidget *parent = nullptr);
    ~Laskin();
    int numero = 1;

private slots:
    void on_Count_clicked();

    void on_Reset_clicked();

private:
    Ui::Laskin *ui;
};
#endif // LASKIN_H
