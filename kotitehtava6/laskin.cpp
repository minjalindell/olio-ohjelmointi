#include "laskin.h"
#include "ui_laskin.h"

Laskin::Laskin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Laskin)
{
    ui->setupUi(this);
}

Laskin::~Laskin()
{
    delete ui;
}


void Laskin::on_Count_clicked()
{
    QString num = QString::number(numero);
    ui->lineEdit->setText(num);
    numero++;
}


void Laskin::on_Reset_clicked()
{
    ui->lineEdit->clear();
    numero = 1;
}

