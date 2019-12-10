#ifndef ADDWIDGET_H
#define ADDWIDGET_H

#include <QMessageBox>
#include <QDialog>


namespace Ui {
class addwidget;
}

class addwidget : public QDialog
{
    Q_OBJECT

public:
    explicit addwidget(QWidget *parent = nullptr);
    ~addwidget();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::addwidget *ui;
};

#endif // ADDWIDGET_H
