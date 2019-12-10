#include "rcmdwidget.h"
#include "ui_rcmdwidget.h"

RcmdWidget::RcmdWidget(int in_id, int rec_id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RcmdWidget)
{
    ui->setupUi(this);
    id = in_id;
    rec = rec_id;

    dbase = QSqlDatabase::addDatabase("QSQLITE" , "CONNECTION");
    dbase.setDatabaseName("football.db");
    dbase.open();

    QString stat1 = "Finishing";
    QString stat2 = "OffTheBall";
    QString stat3 = "FirstTouch";
    QString stat4 = "Heading";
    QString stat5 = "Strength";
    QString stat6 = "Technique";
    QString stat7 = "Agility";
    QString stat8 = "Flair";

    ui->ss_11->setText(stat1);
    ui->ss_12->setText(stat2);
    ui->ss_13->setText(stat3);
    ui->ss_14->setText(stat4);
    ui->ss_15->setText(stat5);
    ui->ss_16->setText(stat6);
    ui->ss_17->setText(stat7);
    ui->ss_18->setText(stat8);
    ui->ss_21->setText(stat1);
    ui->ss_22->setText(stat2);
    ui->ss_23->setText(stat3);
    ui->ss_24->setText(stat4);
    ui->ss_25->setText(stat5);
    ui->ss_26->setText(stat6);
    ui->ss_27->setText(stat7);
    ui->ss_28->setText(stat8);

    QSqlQuery query1(dbase);
    query1.prepare("select Finishing,OffTheBall,FirstTouch,Heading,Strength,Technique,Agility,Flair,name, position, weight, height, aincome, age from player where uid="+QString::number(in_id));

    query1.exec();
    query1.next();
    ui->stat_11->setText(query1.value(0).toString());
    ui->stat_12->setText(query1.value(1).toString());
    ui->stat_13->setText(query1.value(2).toString());
    ui->stat_14->setText(query1.value(3).toString());
    ui->stat_15->setText(query1.value(4).toString());
    ui->stat_16->setText(query1.value(5).toString());
    ui->stat_17->setText(query1.value(6).toString());
    ui->stat_18->setText(query1.value(7).toString());
    ui->oName->setText(query1.value(8).toString());
    ui->oPosition->setText(query1.value(9).toString());
    ui->oW->setText(query1.value(10).toString());
    ui->oH->setText(query1.value(11).toString());
    ui->oValue->setText(query1.value(12).toString());
    ui->oAge->setText(query1.value(13).toString());

    QSqlQuery query2(dbase);
    query2.prepare("select Finishing,OffTheBall,FirstTouch,Heading,Strength,Technique,Agility,Flair,name, position, weight, height, aincome, age from player where uid="+QString::number(rec_id));

    query2.exec();
    query2.next();
    ui->stat_21->setText(query2.value(0).toString());
    ui->stat_22->setText(query2.value(1).toString());
    ui->stat_23->setText(query2.value(2).toString());
    ui->stat_24->setText(query2.value(3).toString());
    ui->stat_25->setText(query2.value(4).toString());
    ui->stat_26->setText(query2.value(5).toString());
    ui->stat_27->setText(query2.value(6).toString());
    ui->stat_28->setText(query2.value(7).toString());
    ui->rName->setText(query2.value(8).toString());
    ui->rPosition->setText(query2.value(9).toString());
    ui->rW->setText(query2.value(10).toString());
    ui->rH->setText(query2.value(11).toString());
    ui->rValue->setText(query2.value(12).toString());
    ui->rAge->setText(query2.value(13).toString());

    rec_name = query2.value(8).toString();

    ui->image1->setAlignment(Qt::AlignCenter);
    QPixmap pix;
    QString fileName = ":/image/PlayerImage/"+QString::number(id)+".png";
    if (pix.load(fileName))
    {
        pix = pix.scaled(ui->image1->size(),Qt::KeepAspectRatio);
        ui->image1->setPixmap(pix);
    }
    ui->image2->setAlignment(Qt::AlignCenter);

    QPixmap pix2;
    QString fileName2 = ":/image/PlayerImage/"+QString::number(rec)+".png";
    if (pix2.load(fileName2))
    {
        pix2 = pix2.scaled(ui->image2->size(),Qt::KeepAspectRatio);
        ui->image2->setPixmap(pix2);
    }

}

RcmdWidget::~RcmdWidget()
{
    delete ui;
}

void RcmdWidget::on_pushButton_7_clicked()
{
    close();
}

void RcmdWidget::on_pushButton_clicked()
{
    QString link = "www.youtube.com/results?search_query="+rec_name;
    QDesktopServices::openUrl(QUrl(link));
}
