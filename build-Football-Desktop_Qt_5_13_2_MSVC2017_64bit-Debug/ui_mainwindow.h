/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *image;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *ss1;
    QLabel *stat1;
    QLabel *ss2;
    QLabel *stat2;
    QLabel *ss3;
    QLabel *stat3;
    QLabel *ss4;
    QLabel *stat4;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *ss6;
    QLabel *ss5;
    QLabel *ss7;
    QLabel *ss8;
    QLabel *stat7;
    QLabel *stat6;
    QLabel *stat5;
    QLabel *stat8;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_4;
    QLabel *name;
    QLabel *label_8;
    QLabel *team;
    QLabel *label_6;
    QLabel *position;
    QLabel *label_11;
    QLabel *age;
    QLabel *label_9;
    QLabel *nation;
    QLabel *label_12;
    QLabel *height;
    QLabel *label_14;
    QLabel *weight;
    QLabel *label_13;
    QLabel *income;
    QLabel *label_15;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QSlider *horizontalSlider;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QDateEdit *dateEdit_2;
    QLabel *Valuelabel;
    QPushButton *pushButton_7;
    QLabel *label_10;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableView *tableView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(995, 545);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(660, 70, 331, 341));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);\n"
"color: rgb(117, 117, 117);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        image = new QLabel(frame);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(10, 10, 121, 160));
        image->setMinimumSize(QSize(0, 160));
        image->setMaximumSize(QSize(16777215, 160));
        QFont font;
        font.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        image->setFont(font);
        image->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        image->setFrameShape(QFrame::Box);
        image->setAlignment(Qt::AlignCenter);
        formLayoutWidget = new QWidget(frame);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 180, 121, 106));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        ss1 = new QLabel(formLayoutWidget);
        ss1->setObjectName(QString::fromUtf8("ss1"));
        ss1->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, ss1);

        stat1 = new QLabel(formLayoutWidget);
        stat1->setObjectName(QString::fromUtf8("stat1"));
        stat1->setStyleSheet(QString::fromUtf8("font: 14pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";\n"
"color: rgb(0, 0, 0);\n"
""));
        stat1->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, stat1);

        ss2 = new QLabel(formLayoutWidget);
        ss2->setObjectName(QString::fromUtf8("ss2"));
        ss2->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, ss2);

        stat2 = new QLabel(formLayoutWidget);
        stat2->setObjectName(QString::fromUtf8("stat2"));
        stat2->setStyleSheet(QString::fromUtf8("font: 14pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";\n"
"color: rgb(0, 0, 0);"));
        stat2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, stat2);

        ss3 = new QLabel(formLayoutWidget);
        ss3->setObjectName(QString::fromUtf8("ss3"));
        ss3->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, ss3);

        stat3 = new QLabel(formLayoutWidget);
        stat3->setObjectName(QString::fromUtf8("stat3"));
        stat3->setStyleSheet(QString::fromUtf8("font: 14pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";\n"
"color: rgb(0, 0, 0);"));
        stat3->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, stat3);

        ss4 = new QLabel(formLayoutWidget);
        ss4->setObjectName(QString::fromUtf8("ss4"));
        ss4->setStyleSheet(QString::fromUtf8("font: 10pt \"\353\247\221\354\235\200 \353\217\213\354\233\200\";\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, ss4);

        stat4 = new QLabel(formLayoutWidget);
        stat4->setObjectName(QString::fromUtf8("stat4"));
        stat4->setStyleSheet(QString::fromUtf8("font: 14pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";\n"
"color: rgb(0, 0, 0);"));
        stat4->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, stat4);

        formLayoutWidget_2 = new QWidget(frame);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(180, 180, 131, 101));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        ss6 = new QLabel(formLayoutWidget_2);
        ss6->setObjectName(QString::fromUtf8("ss6"));
        ss6->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, ss6);

        ss5 = new QLabel(formLayoutWidget_2);
        ss5->setObjectName(QString::fromUtf8("ss5"));
        ss5->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, ss5);

        ss7 = new QLabel(formLayoutWidget_2);
        ss7->setObjectName(QString::fromUtf8("ss7"));
        ss7->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, ss7);

        ss8 = new QLabel(formLayoutWidget_2);
        ss8->setObjectName(QString::fromUtf8("ss8"));
        ss8->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, ss8);

        stat7 = new QLabel(formLayoutWidget_2);
        stat7->setObjectName(QString::fromUtf8("stat7"));
        stat7->setStyleSheet(QString::fromUtf8("font: 14pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";\n"
"color: rgb(0, 0, 0);"));
        stat7->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, stat7);

        stat6 = new QLabel(formLayoutWidget_2);
        stat6->setObjectName(QString::fromUtf8("stat6"));
        stat6->setStyleSheet(QString::fromUtf8("font: 14pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";\n"
"color: rgb(0, 0, 0);"));
        stat6->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, stat6);

        stat5 = new QLabel(formLayoutWidget_2);
        stat5->setObjectName(QString::fromUtf8("stat5"));
        stat5->setStyleSheet(QString::fromUtf8("font: 14pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";\n"
"color: rgb(0, 0, 0);"));
        stat5->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, stat5);

        stat8 = new QLabel(formLayoutWidget_2);
        stat8->setObjectName(QString::fromUtf8("stat8"));
        stat8->setStyleSheet(QString::fromUtf8("font: 14pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";\n"
"color: rgb(0, 0, 0);"));
        stat8->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, stat8);

        formLayoutWidget_3 = new QWidget(frame);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(140, 10, 181, 151));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("\n"
"font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_4);

        name = new QLabel(formLayoutWidget_3);
        name->setObjectName(QString::fromUtf8("name"));
        name->setStyleSheet(QString::fromUtf8("font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";\n"
"color: rgb(0, 0, 0);"));
        name->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, name);

        label_8 = new QLabel(formLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("\n"
"font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_8);

        team = new QLabel(formLayoutWidget_3);
        team->setObjectName(QString::fromUtf8("team"));
        team->setStyleSheet(QString::fromUtf8("font: 9pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";\n"
"color: rgb(0, 0, 0);"));
        team->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, team);

        label_6 = new QLabel(formLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_6);

        position = new QLabel(formLayoutWidget_3);
        position->setObjectName(QString::fromUtf8("position"));
        position->setStyleSheet(QString::fromUtf8("font: 11pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";\n"
"color: rgb(0, 0, 0);"));
        position->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, position);

        label_11 = new QLabel(formLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_11);

        age = new QLabel(formLayoutWidget_3);
        age->setObjectName(QString::fromUtf8("age"));
        age->setStyleSheet(QString::fromUtf8("font: 11pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";\n"
"color: rgb(0, 0, 0);"));
        age->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, age);

        label_9 = new QLabel(formLayoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_9);

        nation = new QLabel(formLayoutWidget_3);
        nation->setObjectName(QString::fromUtf8("nation"));
        nation->setStyleSheet(QString::fromUtf8("font: 10pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";\n"
"color: rgb(0, 0, 0);"));
        nation->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, nation);

        label_12 = new QLabel(formLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_12);

        height = new QLabel(formLayoutWidget_3);
        height->setObjectName(QString::fromUtf8("height"));
        height->setStyleSheet(QString::fromUtf8("font: 11pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";\n"
"color: rgb(0, 0, 0);"));
        height->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, height);

        label_14 = new QLabel(formLayoutWidget_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(6, QFormLayout::LabelRole, label_14);

        weight = new QLabel(formLayoutWidget_3);
        weight->setObjectName(QString::fromUtf8("weight"));
        weight->setStyleSheet(QString::fromUtf8("font: 11pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";\n"
"color: rgb(0, 0, 0);"));
        weight->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(6, QFormLayout::FieldRole, weight);

        label_13 = new QLabel(frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(60, 310, 81, 31));
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\227\221\354\212\244\355\217\254\";"));
        income = new QLabel(frame);
        income->setObjectName(QString::fromUtf8("income"));
        income->setGeometry(QRect(140, 310, 81, 23));
        income->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));
        income->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(frame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(220, 310, 61, 23));
        label_15->setStyleSheet(QString::fromUtf8("font: 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 0, 0);"));
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 170, 311, 10));
        line->setMaximumSize(QSize(16777215, 10));
        line->setBaseSize(QSize(0, 0));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 290, 311, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(frame);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(150, 180, 20, 111));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(680, 420, 41, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(739, 421, 141, 21));
        dateEdit->setFont(font1);
        dateEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        dateEdit->setDateTime(QDateTime(QDate(1990, 1, 1), QTime(0, 0, 0)));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(720, 450, 16, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(730, 480, 161, 22));
        horizontalSlider->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 490, 61, 21));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 66, 66);\n"
"\n"
"font: 9pt \"\352\265\264\353\246\274\";\n"
"color:white;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(660, 480, 61, 21));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(590, 490, 61, 21));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 66, 66);\n"
"\n"
"font: 9pt \"\352\265\264\353\246\274\";\n"
"color:white;"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(900, 430, 71, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 66, 66);\n"
"\n"
"font: 15pt \"\352\265\264\353\246\274\";\n"
"color:white;"));
        dateEdit_2 = new QDateEdit(centralwidget);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(740, 450, 141, 21));
        dateEdit_2->setFont(font1);
        dateEdit_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        dateEdit_2->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        Valuelabel = new QLabel(centralwidget);
        Valuelabel->setObjectName(QString::fromUtf8("Valuelabel"));
        Valuelabel->setGeometry(QRect(760, 500, 91, 20));
        Valuelabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 13pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"text-decoration: underline;"));
        Valuelabel->setAlignment(Qt::AlignCenter);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 490, 101, 31));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(166, 209, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"font: 11pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"\n"
""));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 0, 221, 41));
        label_10->setStyleSheet(QString::fromUtf8("font: 63 20pt \"Lucida Bright\";\n"
"color: rgb(255, 0, 0);"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 40, 391, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaximumSize(QSize(70, 16777215));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(166, 209, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"font: 10pt \"\352\265\264\353\246\274\";\n"
""));

        horizontalLayout->addWidget(comboBox);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 9pt \"\352\265\264\353\246\274\";"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(60, 16777215));
        pushButton->setContextMenuPolicy(Qt::NoContextMenu);
        pushButton->setStyleSheet(QString::fromUtf8("color: black;\n"
"\n"
"font: 9pt \"\352\265\264\353\246\274\";\n"
"background-color: rgb(166, 209, 255);"));

        horizontalLayout->addWidget(pushButton);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 70, 641, 411));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);\n"
"color: rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        image->setText(QCoreApplication::translate("MainWindow", "\354\204\240\354\210\230\353\245\274 \354\266\224\352\260\200\355\225\230\354\204\270\354\232\224", nullptr));
        ss1->setText(QCoreApplication::translate("MainWindow", "\354\212\244\355\203\2571", nullptr));
        stat1->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        ss2->setText(QCoreApplication::translate("MainWindow", "\354\212\244\355\203\2572", nullptr));
        stat2->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        ss3->setText(QCoreApplication::translate("MainWindow", "\354\212\244\355\203\2573", nullptr));
        stat3->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        ss4->setText(QCoreApplication::translate("MainWindow", "\354\212\244\355\203\2574", nullptr));
        stat4->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        ss6->setText(QCoreApplication::translate("MainWindow", "\354\212\244\355\203\2576", nullptr));
        ss5->setText(QCoreApplication::translate("MainWindow", "\354\212\244\355\203\2575", nullptr));
        ss7->setText(QCoreApplication::translate("MainWindow", "\354\212\244\355\203\2577", nullptr));
        ss8->setText(QCoreApplication::translate("MainWindow", "\354\212\244\355\203\2578", nullptr));
        stat7->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        stat6->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        stat5->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        stat8->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\354\235\264\353\246\204 :", nullptr));
        name->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\354\206\214\354\206\215\355\214\200 :", nullptr));
        team->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\355\217\254\354\247\200\354\205\230 :", nullptr));
        position->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\353\202\230\354\235\264 :", nullptr));
        age->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\352\265\255\354\240\201 :", nullptr));
        nation->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\355\202\244 :", nullptr));
        height->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\353\252\270\353\254\264\352\262\214 :", nullptr));
        weight->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\354\230\210\354\203\201\353\252\270\352\260\222  :", nullptr));
        income->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\353\247\214\354\233\220", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\354\227\260\353\240\271 : ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "~", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\354\204\240\354\210\230\354\266\224\352\260\200", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\354\235\264\354\240\201\353\243\214 : ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\354\204\240\354\210\230\354\202\255\354\240\234", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\354\266\224\354\262\234", nullptr));
        Valuelabel->setText(QCoreApplication::translate("MainWindow", "0 \353\247\214\354\233\220", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\355\224\204\353\241\234\352\267\270\353\236\250 \354\242\205\353\243\214", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Football Scouter", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\353\266\204\353\245\230", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\354\235\264\353\246\204", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\352\265\255\354\240\201", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\354\206\214\354\206\215\355\214\200", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\355\217\254\354\247\200\354\205\230", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "\352\262\200\354\203\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
