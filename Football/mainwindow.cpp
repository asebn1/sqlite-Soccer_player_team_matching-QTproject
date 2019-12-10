#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE" , "CONNECTION NAME");
    db.setDatabaseName("football.db");
    db.open();


    model = new QSqlTableModel(this, db);
    model->setTable("tableview");
    model->select();
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setModel(model);
    ui->tableView->hideColumn(0);
    ui->tableView->setColumnWidth(1,130);
    ui->tableView->setColumnWidth(2,75);
    ui->tableView->setColumnWidth(3,120);
    ui->tableView->setColumnWidth(4,110);
    ui->tableView->setColumnWidth(5,55);
    ui->tableView->setColumnWidth(6,50);
    ui->tableView->setColumnWidth(7,50);

    selected_row =  ui->tableView->selectionModel()->currentIndex().row();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    money = value * 1500;
    QString val = QString::number(money)+" 만원";
    ui->Valuelabel->setText(val);
}

void MainWindow::on_pushButton_7_clicked()
{
    QMessageBox MsgBox;
    MsgBox.setText("Do you Really want to Quit?");
    MsgBox.setStandardButtons(QMessageBox::Ok |QMessageBox::Cancel);
    MsgBox.setDefaultButton(QMessageBox::Ok);
    if ( MsgBox.exec() == QMessageBox::Ok )
        this->close();
}

void MainWindow::on_pushButton_6_clicked()
{
    QSqlQuery query2(db);
    query2.prepare("select uid from (select uid from player where (age >= " + QString::number(lower_age) + " AND age <=" + QString::number(upper_age) + ") AND (Aincome <= "+ QString::number(money) +") AND (predict = " + predict +") order by finishing desc) limit 1");
    query2.exec();
    query2.next();
    recommend = query2.value(0).toInt();
    qDebug()<<recommend<<lower_age<<upper_age<<money;
    RcmdWidget recom(id, recommend);
    recom.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    addwidget add;
    add.exec();
}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    search = arg1;
}

void MainWindow::on_pushButton_clicked()
{
    if (search_type == 0)
        QMessageBox::information(this,"Error!","Choose Type!");
    else if (search_type ==1)
    {
        model->setTable("tableview");
        QString query = "name LIKE '%"+search+"%'";
        model->setFilter(query);

    }
    else if (search_type==2)
    {
        model->setTable("tableview");
        QString query = "country like '%"+search+"%'";
        model->setFilter(query);

    }
    else if (search_type==3)
    {
        model->setTable("tableview");
        QString query = "team like '%"+search+"%'";
        model->setFilter(query);

    }
    else if (search_type==4)
    {
        model->setTable("tableview");
        QString query = "position like '%"+search+"%'";
        model->setFilter(query);
    }
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->hideColumn(0);
    ui->tableView->setColumnWidth(1,130);
    ui->tableView->setColumnWidth(2,75);
    ui->tableView->setColumnWidth(3,120);
    ui->tableView->setColumnWidth(4,110);
    ui->tableView->setColumnWidth(5,55);
    ui->tableView->setColumnWidth(6,50);
    ui->tableView->setColumnWidth(7,50);

}


void MainWindow::on_comboBox_activated(int index)
{
    search_type = index;
}




void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    selected_row =  index.row();
    id = model->index(selected_row,0).data().toInt();
    position = model->index(selected_row,2).data().toString();

    ui->position->setText(position);
    ui->name->setText(model->index(selected_row,1).data().toString());
    ui->nation->setText(model->index(selected_row,3).data().toString());
    ui->team->setText(model->index(selected_row,4).data().toString());
    ui->age->setText(model->index(selected_row,5).data().toString());
    ui->height->setText(model->index(selected_row,6).data().toString());
    ui->weight->setText(model->index(selected_row,7).data().toString());
    QString query_str = "select * FROM position where position = '"+position+"'";
    QSqlQuery query(db);
    query.exec(query_str);
    query.next();
    QString stat1 = query.value(1).toString();
    QString stat2 = query.value(2).toString();
    QString stat3 = query.value(3).toString();
    QString stat4 = query.value(4).toString();
    QString stat5 = query.value(5).toString();
    QString stat6 = query.value(6).toString();
    QString stat7 = query.value(7).toString();
    QString stat8 = query.value(8).toString();

    ui->ss1->setText(stat1);
    ui->ss2->setText(stat2);
    ui->ss3->setText(stat3);
    ui->ss4->setText(stat4);
    ui->ss5->setText(stat5);
    ui->ss6->setText(stat6);
    ui->ss7->setText(stat7);
    ui->ss8->setText(stat8);

    QSqlQuery query2(db);
    query2.prepare("select "+ stat1+","+ stat2 + ","+ stat3 + ","+ stat4 +","+ stat5 +","+ stat6+","+stat7+","+
                   stat8+", aincome, predict"
               " from player where uid="+QString::number(id));

    query2.exec();

    query2.next();
    ui->stat1->setText(query2.value(0).toString());
    ui->stat2->setText(query2.value(1).toString());
    ui->stat3->setText(query2.value(2).toString());
    ui->stat4->setText(query2.value(3).toString());
    ui->stat5->setText(query2.value(4).toString());
    ui->stat6->setText(query2.value(5).toString());
    ui->stat7->setText(query2.value(6).toString());
    ui->stat8->setText(query2.value(7).toString());
    predict = query2.value(9).toString();

    ui->income->setText(query2.value(8).toString());

    ui->image->setAlignment(Qt::AlignCenter);
    QPixmap pix;
    QString fileName = ":/image/PlayerImage/"+QString::number(id)+".png";
    if (pix.load(fileName))
    {
        pix = pix.scaled(ui->image->size(),Qt::KeepAspectRatio);
        ui->image->setPixmap(pix);
    }

}

void MainWindow::on_pushButton_4_clicked()
{
    QString query_str = "DELETE FROM PLAYER where UID="+QString::number(id);
    QSqlQuery query(db);
    query.exec(query_str);
    model->select();
    ui->tableView->setModel(model);
    QMessageBox::information(this,"Alert!","Deleted!!");
}

void MainWindow::on_dateEdit_userDateChanged(const QDate &date)
{
    upper_age = date.daysTo(QDate::currentDate())/365;
}

void MainWindow::on_dateEdit_2_userDateChanged(const QDate &date)
{
    lower_age = date.daysTo(QDate::currentDate())/365;
}
