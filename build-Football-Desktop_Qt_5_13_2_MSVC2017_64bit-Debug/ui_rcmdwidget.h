/********************************************************************************
** Form generated from reading UI file 'rcmdwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RCMDWIDGET_H
#define UI_RCMDWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RcmdWidget
{
public:
    QFrame *frame;
    QLabel *image1;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *ss_13;
    QLabel *ss_11;
    QLabel *ss_12;
    QLabel *ss_14;
    QLabel *stat_11;
    QLabel *stat_12;
    QLabel *stat_13;
    QLabel *stat_14;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *ss_16;
    QLabel *ss_15;
    QLabel *ss_17;
    QLabel *ss_18;
    QLabel *stat_18;
    QLabel *stat_17;
    QLabel *stat_16;
    QLabel *stat_15;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_4;
    QLabel *oName;
    QLabel *label_6;
    QLabel *oPosition;
    QLabel *label_11;
    QLabel *oAge;
    QLabel *label_13;
    QLabel *oValue;
    QLabel *label_14;
    QLabel *oH;
    QLabel *label_15;
    QLabel *oW;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *frame_2;
    QLabel *image2;
    QWidget *formLayoutWidget_7;
    QFormLayout *formLayout_7;
    QLabel *ss_23;
    QLabel *ss_21;
    QLabel *ss_22;
    QLabel *ss_24;
    QLabel *stat_21;
    QLabel *stat_22;
    QLabel *stat_23;
    QLabel *stat_24;
    QWidget *formLayoutWidget_8;
    QFormLayout *formLayout_8;
    QLabel *ss_26;
    QLabel *ss_25;
    QLabel *ss_27;
    QLabel *ss_28;
    QLabel *stat_28;
    QLabel *stat_27;
    QLabel *stat_26;
    QLabel *stat_25;
    QWidget *formLayoutWidget_9;
    QFormLayout *formLayout_9;
    QLabel *label_49;
    QLabel *rName;
    QLabel *label_51;
    QLabel *rPosition;
    QLabel *label_52;
    QLabel *rAge;
    QLabel *label_54;
    QLabel *rValue;
    QLabel *label_17;
    QLabel *rH;
    QLabel *label_16;
    QLabel *rW;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QPushButton *pushButton_7;
    QLabel *label_3;
    QLabel *label_55;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *RcmdWidget)
    {
        if (RcmdWidget->objectName().isEmpty())
            RcmdWidget->setObjectName(QString::fromUtf8("RcmdWidget"));
        RcmdWidget->resize(701, 388);
        RcmdWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 30, 30);\n"
"color: rgb(255, 255, 255);"));
        frame = new QFrame(RcmdWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 10, 291, 311));
        frame->setStyleSheet(QString::fromUtf8("\n"
"background: gray;"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        image1 = new QLabel(frame);
        image1->setObjectName(QString::fromUtf8("image1"));
        image1->setGeometry(QRect(10, 10, 111, 161));
        QFont font;
        font.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        image1->setFont(font);
        image1->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";;"));
        image1->setFrameShape(QFrame::NoFrame);
        image1->setAlignment(Qt::AlignCenter);
        formLayoutWidget = new QWidget(frame);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 190, 101, 111));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        ss_13 = new QLabel(formLayoutWidget);
        ss_13->setObjectName(QString::fromUtf8("ss_13"));
        ss_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout->setWidget(2, QFormLayout::LabelRole, ss_13);

        ss_11 = new QLabel(formLayoutWidget);
        ss_11->setObjectName(QString::fromUtf8("ss_11"));
        ss_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout->setWidget(0, QFormLayout::LabelRole, ss_11);

        ss_12 = new QLabel(formLayoutWidget);
        ss_12->setObjectName(QString::fromUtf8("ss_12"));
        ss_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout->setWidget(1, QFormLayout::LabelRole, ss_12);

        ss_14 = new QLabel(formLayoutWidget);
        ss_14->setObjectName(QString::fromUtf8("ss_14"));
        ss_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout->setWidget(3, QFormLayout::LabelRole, ss_14);

        stat_11 = new QLabel(formLayoutWidget);
        stat_11->setObjectName(QString::fromUtf8("stat_11"));
        stat_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_11->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, stat_11);

        stat_12 = new QLabel(formLayoutWidget);
        stat_12->setObjectName(QString::fromUtf8("stat_12"));
        stat_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_12->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, stat_12);

        stat_13 = new QLabel(formLayoutWidget);
        stat_13->setObjectName(QString::fromUtf8("stat_13"));
        stat_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_13->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, stat_13);

        stat_14 = new QLabel(formLayoutWidget);
        stat_14->setObjectName(QString::fromUtf8("stat_14"));
        stat_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_14->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, stat_14);

        formLayoutWidget_2 = new QWidget(frame);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(150, 190, 111, 112));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        ss_16 = new QLabel(formLayoutWidget_2);
        ss_16->setObjectName(QString::fromUtf8("ss_16"));
        ss_16->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, ss_16);

        ss_15 = new QLabel(formLayoutWidget_2);
        ss_15->setObjectName(QString::fromUtf8("ss_15"));
        ss_15->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, ss_15);

        ss_17 = new QLabel(formLayoutWidget_2);
        ss_17->setObjectName(QString::fromUtf8("ss_17"));
        ss_17->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, ss_17);

        ss_18 = new QLabel(formLayoutWidget_2);
        ss_18->setObjectName(QString::fromUtf8("ss_18"));
        ss_18->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, ss_18);

        stat_18 = new QLabel(formLayoutWidget_2);
        stat_18->setObjectName(QString::fromUtf8("stat_18"));
        stat_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_18->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, stat_18);

        stat_17 = new QLabel(formLayoutWidget_2);
        stat_17->setObjectName(QString::fromUtf8("stat_17"));
        stat_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_17->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, stat_17);

        stat_16 = new QLabel(formLayoutWidget_2);
        stat_16->setObjectName(QString::fromUtf8("stat_16"));
        stat_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_16->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, stat_16);

        stat_15 = new QLabel(formLayoutWidget_2);
        stat_15->setObjectName(QString::fromUtf8("stat_15"));
        stat_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_15->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, stat_15);

        formLayoutWidget_3 = new QWidget(frame);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(140, 15, 141, 151));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_4);

        oName = new QLabel(formLayoutWidget_3);
        oName->setObjectName(QString::fromUtf8("oName"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, oName);

        label_6 = new QLabel(formLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_6);

        oPosition = new QLabel(formLayoutWidget_3);
        oPosition->setObjectName(QString::fromUtf8("oPosition"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, oPosition);

        label_11 = new QLabel(formLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_11);

        oAge = new QLabel(formLayoutWidget_3);
        oAge->setObjectName(QString::fromUtf8("oAge"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, oAge);

        label_13 = new QLabel(formLayoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("font: 10t \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_13);

        oValue = new QLabel(formLayoutWidget_3);
        oValue->setObjectName(QString::fromUtf8("oValue"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, oValue);

        label_14 = new QLabel(formLayoutWidget_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setStyleSheet(QString::fromUtf8("font: 10t \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_14);

        oH = new QLabel(formLayoutWidget_3);
        oH->setObjectName(QString::fromUtf8("oH"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, oH);

        label_15 = new QLabel(formLayoutWidget_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setStyleSheet(QString::fromUtf8("font: 10t \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_15);

        oW = new QLabel(formLayoutWidget_3);
        oW->setObjectName(QString::fromUtf8("oW"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, oW);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 170, 281, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(120, 190, 20, 111));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(frame);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(120, 10, 20, 161));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        frame_2 = new QFrame(RcmdWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(390, 10, 291, 311));
        frame_2->setStyleSheet(QString::fromUtf8("\n"
"background: gray;"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Plain);
        image2 = new QLabel(frame_2);
        image2->setObjectName(QString::fromUtf8("image2"));
        image2->setGeometry(QRect(10, 10, 111, 161));
        image2->setFont(font);
        image2->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);font: 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        image2->setFrameShape(QFrame::NoFrame);
        image2->setAlignment(Qt::AlignCenter);
        formLayoutWidget_7 = new QWidget(frame_2);
        formLayoutWidget_7->setObjectName(QString::fromUtf8("formLayoutWidget_7"));
        formLayoutWidget_7->setGeometry(QRect(10, 190, 101, 112));
        formLayout_7 = new QFormLayout(formLayoutWidget_7);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        ss_23 = new QLabel(formLayoutWidget_7);
        ss_23->setObjectName(QString::fromUtf8("ss_23"));
        ss_23->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout_7->setWidget(2, QFormLayout::LabelRole, ss_23);

        ss_21 = new QLabel(formLayoutWidget_7);
        ss_21->setObjectName(QString::fromUtf8("ss_21"));
        ss_21->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, ss_21);

        ss_22 = new QLabel(formLayoutWidget_7);
        ss_22->setObjectName(QString::fromUtf8("ss_22"));
        ss_22->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout_7->setWidget(1, QFormLayout::LabelRole, ss_22);

        ss_24 = new QLabel(formLayoutWidget_7);
        ss_24->setObjectName(QString::fromUtf8("ss_24"));
        ss_24->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout_7->setWidget(3, QFormLayout::LabelRole, ss_24);

        stat_21 = new QLabel(formLayoutWidget_7);
        stat_21->setObjectName(QString::fromUtf8("stat_21"));
        stat_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_21->setAlignment(Qt::AlignCenter);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, stat_21);

        stat_22 = new QLabel(formLayoutWidget_7);
        stat_22->setObjectName(QString::fromUtf8("stat_22"));
        stat_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_22->setAlignment(Qt::AlignCenter);

        formLayout_7->setWidget(1, QFormLayout::FieldRole, stat_22);

        stat_23 = new QLabel(formLayoutWidget_7);
        stat_23->setObjectName(QString::fromUtf8("stat_23"));
        stat_23->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_23->setAlignment(Qt::AlignCenter);

        formLayout_7->setWidget(2, QFormLayout::FieldRole, stat_23);

        stat_24 = new QLabel(formLayoutWidget_7);
        stat_24->setObjectName(QString::fromUtf8("stat_24"));
        stat_24->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_24->setAlignment(Qt::AlignCenter);

        formLayout_7->setWidget(3, QFormLayout::FieldRole, stat_24);

        formLayoutWidget_8 = new QWidget(frame_2);
        formLayoutWidget_8->setObjectName(QString::fromUtf8("formLayoutWidget_8"));
        formLayoutWidget_8->setGeometry(QRect(150, 190, 111, 112));
        formLayout_8 = new QFormLayout(formLayoutWidget_8);
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        formLayout_8->setContentsMargins(0, 0, 0, 0);
        ss_26 = new QLabel(formLayoutWidget_8);
        ss_26->setObjectName(QString::fromUtf8("ss_26"));
        ss_26->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout_8->setWidget(1, QFormLayout::LabelRole, ss_26);

        ss_25 = new QLabel(formLayoutWidget_8);
        ss_25->setObjectName(QString::fromUtf8("ss_25"));
        ss_25->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, ss_25);

        ss_27 = new QLabel(formLayoutWidget_8);
        ss_27->setObjectName(QString::fromUtf8("ss_27"));
        ss_27->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout_8->setWidget(2, QFormLayout::LabelRole, ss_27);

        ss_28 = new QLabel(formLayoutWidget_8);
        ss_28->setObjectName(QString::fromUtf8("ss_28"));
        ss_28->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));

        formLayout_8->setWidget(3, QFormLayout::LabelRole, ss_28);

        stat_28 = new QLabel(formLayoutWidget_8);
        stat_28->setObjectName(QString::fromUtf8("stat_28"));
        stat_28->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_28->setAlignment(Qt::AlignCenter);

        formLayout_8->setWidget(3, QFormLayout::FieldRole, stat_28);

        stat_27 = new QLabel(formLayoutWidget_8);
        stat_27->setObjectName(QString::fromUtf8("stat_27"));
        stat_27->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_27->setAlignment(Qt::AlignCenter);

        formLayout_8->setWidget(2, QFormLayout::FieldRole, stat_27);

        stat_26 = new QLabel(formLayoutWidget_8);
        stat_26->setObjectName(QString::fromUtf8("stat_26"));
        stat_26->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_26->setAlignment(Qt::AlignCenter);

        formLayout_8->setWidget(1, QFormLayout::FieldRole, stat_26);

        stat_25 = new QLabel(formLayoutWidget_8);
        stat_25->setObjectName(QString::fromUtf8("stat_25"));
        stat_25->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\355\234\264\353\250\274\354\230\233\354\262\264\";"));
        stat_25->setAlignment(Qt::AlignCenter);

        formLayout_8->setWidget(0, QFormLayout::FieldRole, stat_25);

        formLayoutWidget_9 = new QWidget(frame_2);
        formLayoutWidget_9->setObjectName(QString::fromUtf8("formLayoutWidget_9"));
        formLayoutWidget_9->setGeometry(QRect(140, 10, 141, 161));
        formLayout_9 = new QFormLayout(formLayoutWidget_9);
        formLayout_9->setObjectName(QString::fromUtf8("formLayout_9"));
        formLayout_9->setContentsMargins(0, 0, 0, 0);
        label_49 = new QLabel(formLayoutWidget_9);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setStyleSheet(QString::fromUtf8("font: 10t \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_9->setWidget(1, QFormLayout::LabelRole, label_49);

        rName = new QLabel(formLayoutWidget_9);
        rName->setObjectName(QString::fromUtf8("rName"));

        formLayout_9->setWidget(1, QFormLayout::FieldRole, rName);

        label_51 = new QLabel(formLayoutWidget_9);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setStyleSheet(QString::fromUtf8("font: 10t \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_9->setWidget(2, QFormLayout::LabelRole, label_51);

        rPosition = new QLabel(formLayoutWidget_9);
        rPosition->setObjectName(QString::fromUtf8("rPosition"));

        formLayout_9->setWidget(2, QFormLayout::FieldRole, rPosition);

        label_52 = new QLabel(formLayoutWidget_9);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setStyleSheet(QString::fromUtf8("font: 10t \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_9->setWidget(3, QFormLayout::LabelRole, label_52);

        rAge = new QLabel(formLayoutWidget_9);
        rAge->setObjectName(QString::fromUtf8("rAge"));

        formLayout_9->setWidget(3, QFormLayout::FieldRole, rAge);

        label_54 = new QLabel(formLayoutWidget_9);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setStyleSheet(QString::fromUtf8("font: 10t \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_9->setWidget(4, QFormLayout::LabelRole, label_54);

        rValue = new QLabel(formLayoutWidget_9);
        rValue->setObjectName(QString::fromUtf8("rValue"));

        formLayout_9->setWidget(4, QFormLayout::FieldRole, rValue);

        label_17 = new QLabel(formLayoutWidget_9);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setStyleSheet(QString::fromUtf8("font: 10t \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_9->setWidget(5, QFormLayout::LabelRole, label_17);

        rH = new QLabel(formLayoutWidget_9);
        rH->setObjectName(QString::fromUtf8("rH"));

        formLayout_9->setWidget(5, QFormLayout::FieldRole, rH);

        label_16 = new QLabel(formLayoutWidget_9);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setStyleSheet(QString::fromUtf8("font: 10t \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_9->setWidget(6, QFormLayout::LabelRole, label_16);

        rW = new QLabel(formLayoutWidget_9);
        rW->setObjectName(QString::fromUtf8("rW"));

        formLayout_9->setWidget(6, QFormLayout::FieldRole, rW);

        line_4 = new QFrame(frame_2);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(120, 10, 20, 161));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(frame_2);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(10, 170, 271, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(frame_2);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(120, 190, 20, 111));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        pushButton_7 = new QPushButton(RcmdWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(630, 350, 51, 21));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(166, 209, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"\n"
"font: 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"\n"
""));
        label_3 = new QLabel(RcmdWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(500, 340, 71, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_55 = new QLabel(RcmdWidget);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(120, 340, 71, 21));
        label_55->setStyleSheet(QString::fromUtf8("font: 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        pushButton = new QPushButton(RcmdWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 350, 91, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 11pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icon/youtube (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(25, 25));
        label_2 = new QLabel(RcmdWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 130, 61, 71));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icon/icon/match (2).png")));
        label_2->setScaledContents(true);

        retranslateUi(RcmdWidget);

        QMetaObject::connectSlotsByName(RcmdWidget);
    } // setupUi

    void retranslateUi(QDialog *RcmdWidget)
    {
        RcmdWidget->setWindowTitle(QCoreApplication::translate("RcmdWidget", "Dialog", nullptr));
        image1->setText(QCoreApplication::translate("RcmdWidget", "\354\204\240\354\210\230\354\202\254\354\247\204", nullptr));
        ss_13->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2573", nullptr));
        ss_11->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2571", nullptr));
        ss_12->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2572", nullptr));
        ss_14->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2574", nullptr));
        stat_11->setText(QString());
        stat_12->setText(QString());
        stat_13->setText(QString());
        stat_14->setText(QString());
        ss_16->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2576", nullptr));
        ss_15->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2575", nullptr));
        ss_17->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2577", nullptr));
        ss_18->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2578", nullptr));
        stat_18->setText(QString());
        stat_17->setText(QString());
        stat_16->setText(QString());
        stat_15->setText(QString());
        label_4->setText(QCoreApplication::translate("RcmdWidget", "\354\235\264\353\246\204 :", nullptr));
        oName->setText(QCoreApplication::translate("RcmdWidget", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("RcmdWidget", "\355\217\254\354\247\200\354\205\230 :", nullptr));
        oPosition->setText(QCoreApplication::translate("RcmdWidget", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("RcmdWidget", "\353\202\230\354\235\264 :", nullptr));
        oAge->setText(QCoreApplication::translate("RcmdWidget", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("RcmdWidget", "\353\252\270\352\260\222 :", nullptr));
        oValue->setText(QCoreApplication::translate("RcmdWidget", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("RcmdWidget", "\355\202\244 : ", nullptr));
        oH->setText(QCoreApplication::translate("RcmdWidget", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("RcmdWidget", "\353\252\270\353\254\264\352\262\214 :", nullptr));
        oW->setText(QCoreApplication::translate("RcmdWidget", "TextLabel", nullptr));
        image2->setText(QCoreApplication::translate("RcmdWidget", "\354\204\240\354\210\230\354\202\254\354\247\204", nullptr));
        ss_23->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2573", nullptr));
        ss_21->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2571", nullptr));
        ss_22->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2572", nullptr));
        ss_24->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2574", nullptr));
        stat_21->setText(QString());
        stat_22->setText(QString());
        stat_23->setText(QString());
        stat_24->setText(QString());
        ss_26->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2576", nullptr));
        ss_25->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2575", nullptr));
        ss_27->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2577", nullptr));
        ss_28->setText(QCoreApplication::translate("RcmdWidget", "\354\212\244\355\203\2578", nullptr));
        stat_28->setText(QString());
        stat_27->setText(QString());
        stat_26->setText(QString());
        stat_25->setText(QString());
        label_49->setText(QCoreApplication::translate("RcmdWidget", "\354\235\264\353\246\204 :", nullptr));
        rName->setText(QCoreApplication::translate("RcmdWidget", "TextLabel", nullptr));
        label_51->setText(QCoreApplication::translate("RcmdWidget", "\355\217\254\354\247\200\354\205\230 :", nullptr));
        rPosition->setText(QCoreApplication::translate("RcmdWidget", "TextLabel", nullptr));
        label_52->setText(QCoreApplication::translate("RcmdWidget", "\353\202\230\354\235\264 :", nullptr));
        rAge->setText(QCoreApplication::translate("RcmdWidget", "TextLabel", nullptr));
        label_54->setText(QCoreApplication::translate("RcmdWidget", "\353\252\270\352\260\222 :", nullptr));
        rValue->setText(QCoreApplication::translate("RcmdWidget", "TextLabel", nullptr));
        label_17->setText(QCoreApplication::translate("RcmdWidget", "\355\202\244 : ", nullptr));
        rH->setText(QCoreApplication::translate("RcmdWidget", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("RcmdWidget", "\353\252\270\353\254\264\352\262\214 :", nullptr));
        rW->setText(QCoreApplication::translate("RcmdWidget", "TextLabel", nullptr));
        pushButton_7->setText(QCoreApplication::translate("RcmdWidget", "\353\213\253\352\270\260", nullptr));
        label_3->setText(QCoreApplication::translate("RcmdWidget", "\354\266\224\354\262\234\354\204\240\354\210\230", nullptr));
        label_55->setText(QCoreApplication::translate("RcmdWidget", "\353\263\264\354\234\240\354\204\240\354\210\230", nullptr));
        pushButton->setText(QCoreApplication::translate("RcmdWidget", "\352\264\200\353\240\250\354\230\201\354\203\201", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RcmdWidget: public Ui_RcmdWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RCMDWIDGET_H
