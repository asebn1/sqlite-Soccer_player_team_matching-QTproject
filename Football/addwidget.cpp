#include "addwidget.h"
#include "ui_addwidget.h"

addwidget::addwidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addwidget)
{
    ui->setupUi(this);
}

addwidget::~addwidget()
{
    delete ui;
}

void addwidget::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Alert!","Succeed!!");
    this->close();
}

void addwidget::on_pushButton_3_clicked()
{
    close();
}
