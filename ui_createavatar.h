/********************************************************************************
** Form generated from reading UI file 'createavatar.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEAVATAR_H
#define UI_CREATEAVATAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateAvatar
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *body_type_label;
    QComboBox *SexComboBox;
    QLabel *race_label;
    QSlider *HSlid;
    QLabel *hair_label;
    QSlider *HSlid1;
    QLabel *eyes_label;
    QSlider *HSlid3;
    QLabel *rot_label;
    QSlider *HSlid4;
    QGraphicsView *graphicsView_backg;
    QPushButton *pushButton_Save;
    QGraphicsView *graphicsView_frame;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_Load;

    void setupUi(QMainWindow *CreateAvatar)
    {
        if (CreateAvatar->objectName().isEmpty())
            CreateAvatar->setObjectName(QStringLiteral("CreateAvatar"));
        CreateAvatar->resize(411, 370);
        centralwidget = new QWidget(CreateAvatar);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 161, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        body_type_label = new QLabel(layoutWidget);
        body_type_label->setObjectName(QStringLiteral("body_type_label"));
        QFont font;
        font.setPointSize(12);
        body_type_label->setFont(font);
        body_type_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(body_type_label);

        SexComboBox = new QComboBox(layoutWidget);
        SexComboBox->setObjectName(QStringLiteral("SexComboBox"));
        SexComboBox->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));

        verticalLayout->addWidget(SexComboBox);

        race_label = new QLabel(layoutWidget);
        race_label->setObjectName(QStringLiteral("race_label"));
        race_label->setFont(font);
        race_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(race_label);

        HSlid = new QSlider(layoutWidget);
        HSlid->setObjectName(QStringLiteral("HSlid"));
        HSlid->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));
        HSlid->setMinimum(0);
        HSlid->setMaximum(5);
        HSlid->setPageStep(1);
        HSlid->setValue(0);
        HSlid->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(HSlid);

        hair_label = new QLabel(layoutWidget);
        hair_label->setObjectName(QStringLiteral("hair_label"));
        hair_label->setFont(font);
        hair_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(hair_label);

        HSlid1 = new QSlider(layoutWidget);
        HSlid1->setObjectName(QStringLiteral("HSlid1"));
        HSlid1->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));
        HSlid1->setMaximum(5);
        HSlid1->setPageStep(1);
        HSlid1->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(HSlid1);

        eyes_label = new QLabel(layoutWidget);
        eyes_label->setObjectName(QStringLiteral("eyes_label"));
        eyes_label->setFont(font);
        eyes_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(eyes_label);

        HSlid3 = new QSlider(layoutWidget);
        HSlid3->setObjectName(QStringLiteral("HSlid3"));
        HSlid3->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));
        HSlid3->setMaximum(5);
        HSlid3->setPageStep(1);
        HSlid3->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(HSlid3);

        rot_label = new QLabel(layoutWidget);
        rot_label->setObjectName(QStringLiteral("rot_label"));
        rot_label->setFont(font);
        rot_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(rot_label);

        HSlid4 = new QSlider(layoutWidget);
        HSlid4->setObjectName(QStringLiteral("HSlid4"));
        HSlid4->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));
        HSlid4->setMaximum(5);
        HSlid4->setPageStep(1);
        HSlid4->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(HSlid4);

        graphicsView_backg = new QGraphicsView(centralwidget);
        graphicsView_backg->setObjectName(QStringLiteral("graphicsView_backg"));
        graphicsView_backg->setEnabled(true);
        graphicsView_backg->setGeometry(QRect(-10, -10, 451, 381));
        graphicsView_backg->setMinimumSize(QSize(424, 331));
        graphicsView_backg->setMaximumSize(QSize(10000, 10000));
        graphicsView_backg->setStyleSheet(QStringLiteral("background-image: url(:/res/res/backg_taverna.png);"));
        pushButton_Save = new QPushButton(centralwidget);
        pushButton_Save->setObjectName(QStringLiteral("pushButton_Save"));
        pushButton_Save->setGeometry(QRect(20, 270, 80, 21));
        pushButton_Save->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));
        graphicsView_frame = new QGraphicsView(centralwidget);
        graphicsView_frame->setObjectName(QStringLiteral("graphicsView_frame"));
        graphicsView_frame->setGeometry(QRect(190, 15, 203, 293));
        graphicsView_frame->setAutoFillBackground(true);
        graphicsView_frame->setStyleSheet(QStringLiteral("background-image: url(:/res/res/frame.png);"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(210, 30, 161, 261));
        graphicsView->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        graphicsView->setBackgroundBrush(brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        graphicsView->setForegroundBrush(brush1);
        pushButton_Load = new QPushButton(centralwidget);
        pushButton_Load->setObjectName(QStringLiteral("pushButton_Load"));
        pushButton_Load->setGeometry(QRect(100, 270, 80, 21));
        pushButton_Load->setStyleSheet(QStringLiteral("font: 12pt \"Bernard MT Condensed\";"));
        CreateAvatar->setCentralWidget(centralwidget);
        graphicsView_backg->raise();
        layoutWidget->raise();
        pushButton_Save->raise();
        graphicsView_frame->raise();
        pushButton_Load->raise();
        graphicsView->raise();

        retranslateUi(CreateAvatar);

        QMetaObject::connectSlotsByName(CreateAvatar);
    } // setupUi

    void retranslateUi(QMainWindow *CreateAvatar)
    {
        CreateAvatar->setWindowTitle(QApplication::translate("CreateAvatar", "MainWindow", Q_NULLPTR));
        body_type_label->setText(QApplication::translate("CreateAvatar", "Body Type", Q_NULLPTR));
        race_label->setText(QApplication::translate("CreateAvatar", "Race", Q_NULLPTR));
        hair_label->setText(QApplication::translate("CreateAvatar", "Hair", Q_NULLPTR));
        eyes_label->setText(QApplication::translate("CreateAvatar", "Eyes", Q_NULLPTR));
        rot_label->setText(QApplication::translate("CreateAvatar", "Rot", Q_NULLPTR));
        pushButton_Save->setText(QApplication::translate("CreateAvatar", "Save", Q_NULLPTR));
        pushButton_Load->setText(QApplication::translate("CreateAvatar", "Load", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CreateAvatar: public Ui_CreateAvatar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEAVATAR_H
