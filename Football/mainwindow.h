#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QSqlTableModel>
#include <QTableView>
#include <QSqlQuery>
#include "addwidget.h"
#include "rcmdwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();

    void on_comboBox_activated(int index);



    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_pushButton_4_clicked();

    void on_dateEdit_userDateChanged(const QDate &date);

    void on_dateEdit_2_userDateChanged(const QDate &date);

private:
    Ui::MainWindow *ui;
    enum Column
    {
       NAME, POSITION ,AGE, TEAM, NATION
    };
    QString search;
    int search_type;

    int selected_row;
    int money;
    QString predict;
    int lower_age;
    int upper_age;
    QSqlTableModel *model;
    QString position;
protected:
    QSqlDatabase db;
    int id;
    int recommend;
};
#endif // MAINWINDOW_H
