#ifndef SHAKKIKELLO_H
#define SHAKKIKELLO_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class shakkikello; }
QT_END_NAMESPACE

class shakkikello : public QMainWindow
{
    Q_OBJECT

public:
    shakkikello(QWidget *parent = nullptr);
    ~shakkikello();
    int player1RemainingTime;
    int player2RemainingTime;

private slots:
    void updateProgressBar();

    void setGameIntoText(QString);

    void on_Start_clicked();

    void on_Stop_clicked();

    void on_sec_clicked();

    void on_min_clicked();

    void on_switchPlayer1_clicked();

    void on_switchPlayer2_clicked();

private:
    Ui::shakkikello *ui;
    QTimer * player1Timer;
    QTimer * player2Timer;
    QTimer * progressUpdateTimer;
    int player1Time;
    int player2Time;
};
#endif // SHAKKIKELLO_H
