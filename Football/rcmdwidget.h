#ifndef RCMDWIDGET_H
#define RCMDWIDGET_H

#include <QDialog>
#include "mainwindow.h"
#include <QtSql/QSqlDatabase>
#include <QString>
#include <QDebug>
#include <QSqlQuery>
#include <string>
#include <QDesktopServices>
#include <QUrl>

namespace Ui {
class RcmdWidget;
}

class RcmdWidget : public QDialog
{
    Q_OBJECT

public:
    explicit RcmdWidget(int id, int rec, QWidget *parent = nullptr);
    ~RcmdWidget();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

private:
    Ui::RcmdWidget *ui;
    QSqlDatabase dbase;
    int id;
    int rec;
    QString rec_name;
};

#endif // RCMDWIDGET_H
