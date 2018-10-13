/********************************************************************************
** Form generated from reading UI file 'playeranketa.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERANKETA_H
#define UI_PLAYERANKETA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayerAnketa
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView_Avatar;
    QTextEdit *bio_textEdit;
    QGraphicsView *graphicsView_background;
    QGroupBox *BodyDategroupBox;
    QComboBox *SexComboBox;
    QLabel *HeightLabel;
    QLabel *SexLabel;
    QLabel *AgeLabel;
    QLabel *WeightLabel;
    QDoubleSpinBox *HeightdoubleSpinBox;
    QDoubleSpinBox *WeightdoubleSpinBox;
    QSpinBox *AgedoubleSpinBox;
    QLabel *label_year;
    QLabel *label_kg;
    QLabel *label_sm;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_Button;
    QPushButton *LoadpushButton;
    QPushButton *CreatepushButton;
    QGroupBox *StatsgroupBox;
    QSpinBox *Cha_spinBox;
    QLabel *Cha_label;
    QLabel *Str_label;
    QSpinBox *Str_spinBox;
    QLabel *Dex_label;
    QSpinBox *Dex_spinBox;
    QSpinBox *Con_spinBox;
    QLabel *Con_label;
    QLabel *Int_label;
    QSpinBox *Int_spinBox;
    QLabel *Wis_label;
    QSpinBox *Wis_spinBox;
    QLabel *custom_label_2;
    QLabel *custom_label_4;
    QLabel *custom_label_3;
    QLabel *custom_label_6;
    QLabel *custom_label_5;
    QLabel *custom_label;
    QLabel *Stats_label;
    QLabel *Stats_res_label;
    QLabel *Race_mod_label;
    QLabel *custom_label_7;
    QLabel *custom_label_8;
    QLabel *custom_label_9;
    QLabel *custom_label_10;
    QLabel *custom_label_11;
    QLabel *custom_label_12;
    QLabel *str_stats_label;
    QLabel *dex_stats_label;
    QLabel *int_stats_label;
    QLabel *con_stats_label;
    QLabel *wis_stats_label;
    QLabel *cha_stats_label;
    QLabel *race_mod_con_label;
    QLabel *race_mod_str_label;
    QLabel *race_mod_dex_label;
    QLabel *race_mod_wis_label;
    QLabel *race_mod_int_label;
    QLabel *race_mod_cha_label;
    QLabel *biograf_label;
    QGroupBox *RaceClassAliggroupBox;
    QLabel *RaceLabel;
    QLabel *SubRaceLabel;
    QComboBox *RaceComboBox;
    QLineEdit *SubRaceTextEdit;
    QLabel *ClassesLabel;
    QComboBox *ClassesComboBox;
    QLabel *AlignmentLabel;
    QComboBox *AlignmentComboBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_saveAnket;
    QPushButton *ExitPushButton;
    QGraphicsView *graphicsView_frame;
    QGroupBox *NamegroupBox;
    QLineEdit *NameTextEdit;

    void setupUi(QMainWindow *PlayerAnketa)
    {
        if (PlayerAnketa->objectName().isEmpty())
            PlayerAnketa->setObjectName(QStringLiteral("PlayerAnketa"));
        PlayerAnketa->resize(691, 648);
        centralWidget = new QWidget(PlayerAnketa);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView_Avatar = new QGraphicsView(centralWidget);
        graphicsView_Avatar->setObjectName(QStringLiteral("graphicsView_Avatar"));
        graphicsView_Avatar->setGeometry(QRect(500, 36, 161, 261));
        graphicsView_Avatar->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        bio_textEdit = new QTextEdit(centralWidget);
        bio_textEdit->setObjectName(QStringLiteral("bio_textEdit"));
        bio_textEdit->setGeometry(QRect(400, 370, 271, 231));
        QFont font;
        font.setFamily(QStringLiteral("Bodoni MT"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        bio_textEdit->setFont(font);
        graphicsView_background = new QGraphicsView(centralWidget);
        graphicsView_background->setObjectName(QStringLiteral("graphicsView_background"));
        graphicsView_background->setGeometry(QRect(0, 0, 691, 651));
        graphicsView_background->setStyleSheet(QStringLiteral("background-image: url(:/res/res/fon01.png);"));
        BodyDategroupBox = new QGroupBox(centralWidget);
        BodyDategroupBox->setObjectName(QStringLiteral("BodyDategroupBox"));
        BodyDategroupBox->setGeometry(QRect(255, 70, 221, 90));
        BodyDategroupBox->setStyleSheet(QLatin1String("background-color: rgba(75, 75, 75, 150);\n"
"color: rgb(255, 255, 255);"));
        SexComboBox = new QComboBox(BodyDategroupBox);
        SexComboBox->setObjectName(QStringLiteral("SexComboBox"));
        SexComboBox->setGeometry(QRect(0, 20, 81, 22));
        SexComboBox->setFont(font);
        HeightLabel = new QLabel(BodyDategroupBox);
        HeightLabel->setObjectName(QStringLiteral("HeightLabel"));
        HeightLabel->setGeometry(QRect(110, 0, 51, 19));
        HeightLabel->setFont(font);
        HeightLabel->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        SexLabel = new QLabel(BodyDategroupBox);
        SexLabel->setObjectName(QStringLiteral("SexLabel"));
        SexLabel->setGeometry(QRect(0, 0, 31, 19));
        SexLabel->setFont(font);
        SexLabel->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        AgeLabel = new QLabel(BodyDategroupBox);
        AgeLabel->setObjectName(QStringLiteral("AgeLabel"));
        AgeLabel->setGeometry(QRect(0, 40, 31, 19));
        AgeLabel->setFont(font);
        AgeLabel->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        WeightLabel = new QLabel(BodyDategroupBox);
        WeightLabel->setObjectName(QStringLiteral("WeightLabel"));
        WeightLabel->setGeometry(QRect(110, 40, 51, 19));
        WeightLabel->setFont(font);
        WeightLabel->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        HeightdoubleSpinBox = new QDoubleSpinBox(BodyDategroupBox);
        HeightdoubleSpinBox->setObjectName(QStringLiteral("HeightdoubleSpinBox"));
        HeightdoubleSpinBox->setGeometry(QRect(110, 20, 80, 21));
        HeightdoubleSpinBox->setFont(font);
        WeightdoubleSpinBox = new QDoubleSpinBox(BodyDategroupBox);
        WeightdoubleSpinBox->setObjectName(QStringLiteral("WeightdoubleSpinBox"));
        WeightdoubleSpinBox->setGeometry(QRect(110, 60, 80, 22));
        WeightdoubleSpinBox->setFont(font);
        AgedoubleSpinBox = new QSpinBox(BodyDategroupBox);
        AgedoubleSpinBox->setObjectName(QStringLiteral("AgedoubleSpinBox"));
        AgedoubleSpinBox->setGeometry(QRect(0, 60, 80, 22));
        AgedoubleSpinBox->setFont(font);
        label_year = new QLabel(BodyDategroupBox);
        label_year->setObjectName(QStringLiteral("label_year"));
        label_year->setGeometry(QRect(80, 60, 21, 21));
        label_year->setFont(font);
        label_year->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255, 0);"));
        label_kg = new QLabel(BodyDategroupBox);
        label_kg->setObjectName(QStringLiteral("label_kg"));
        label_kg->setGeometry(QRect(190, 60, 21, 21));
        label_kg->setFont(font);
        label_kg->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255, 0);"));
        label_sm = new QLabel(BodyDategroupBox);
        label_sm->setObjectName(QStringLiteral("label_sm"));
        label_sm->setGeometry(QRect(190, 20, 21, 21));
        label_sm->setFont(font);
        label_sm->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255, 0);"));
        layoutWidget_4 = new QWidget(centralWidget);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(480, 320, 194, 31));
        horizontalLayout_Button = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_Button->setSpacing(6);
        horizontalLayout_Button->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_Button->setObjectName(QStringLiteral("horizontalLayout_Button"));
        horizontalLayout_Button->setContentsMargins(0, 0, 0, 0);
        LoadpushButton = new QPushButton(layoutWidget_4);
        LoadpushButton->setObjectName(QStringLiteral("LoadpushButton"));
        LoadpushButton->setFont(font);

        horizontalLayout_Button->addWidget(LoadpushButton);

        CreatepushButton = new QPushButton(layoutWidget_4);
        CreatepushButton->setObjectName(QStringLiteral("CreatepushButton"));
        CreatepushButton->setFont(font);

        horizontalLayout_Button->addWidget(CreatepushButton);

        StatsgroupBox = new QGroupBox(centralWidget);
        StatsgroupBox->setObjectName(QStringLiteral("StatsgroupBox"));
        StatsgroupBox->setGeometry(QRect(10, 170, 321, 321));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Fangsong Std R"));
        font1.setPointSize(12);
        StatsgroupBox->setFont(font1);
        StatsgroupBox->setStyleSheet(QLatin1String("background-color: rgba(75, 75, 75, 150);\n"
"color: rgb(255, 255, 255);"));
        Cha_spinBox = new QSpinBox(StatsgroupBox);
        Cha_spinBox->setObjectName(QStringLiteral("Cha_spinBox"));
        Cha_spinBox->setGeometry(QRect(10, 294, 39, 19));
        Cha_label = new QLabel(StatsgroupBox);
        Cha_label->setObjectName(QStringLiteral("Cha_label"));
        Cha_label->setGeometry(QRect(10, 274, 39, 19));
        Cha_label->setFont(font);
        Cha_label->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(240, 0, 4);"));
        Str_label = new QLabel(StatsgroupBox);
        Str_label->setObjectName(QStringLiteral("Str_label"));
        Str_label->setGeometry(QRect(10, 24, 19, 20));
        Str_label->setFont(font);
        Str_label->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        Str_spinBox = new QSpinBox(StatsgroupBox);
        Str_spinBox->setObjectName(QStringLiteral("Str_spinBox"));
        Str_spinBox->setGeometry(QRect(10, 40, 39, 19));
        Dex_label = new QLabel(StatsgroupBox);
        Dex_label->setObjectName(QStringLiteral("Dex_label"));
        Dex_label->setGeometry(QRect(10, 74, 26, 20));
        Dex_label->setFont(font);
        Dex_label->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(179, 255, 0);"));
        Dex_spinBox = new QSpinBox(StatsgroupBox);
        Dex_spinBox->setObjectName(QStringLiteral("Dex_spinBox"));
        Dex_spinBox->setGeometry(QRect(10, 91, 39, 19));
        Con_spinBox = new QSpinBox(StatsgroupBox);
        Con_spinBox->setObjectName(QStringLiteral("Con_spinBox"));
        Con_spinBox->setGeometry(QRect(10, 142, 39, 19));
        Con_label = new QLabel(StatsgroupBox);
        Con_label->setObjectName(QStringLiteral("Con_label"));
        Con_label->setGeometry(QRect(10, 124, 26, 20));
        Con_label->setFont(font);
        Con_label->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 170, 0);"));
        Int_label = new QLabel(StatsgroupBox);
        Int_label->setObjectName(QStringLiteral("Int_label"));
        Int_label->setGeometry(QRect(10, 174, 39, 19));
        QPalette palette;
        QBrush brush(QColor(255, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        Int_label->setPalette(palette);
        Int_label->setFont(font);
        Int_label->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 0);\n"
""));
        Int_spinBox = new QSpinBox(StatsgroupBox);
        Int_spinBox->setObjectName(QStringLiteral("Int_spinBox"));
        Int_spinBox->setGeometry(QRect(10, 192, 39, 20));
        Wis_label = new QLabel(StatsgroupBox);
        Wis_label->setObjectName(QStringLiteral("Wis_label"));
        Wis_label->setGeometry(QRect(10, 224, 39, 19));
        Wis_label->setFont(font);
        Wis_label->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        Wis_spinBox = new QSpinBox(StatsgroupBox);
        Wis_spinBox->setObjectName(QStringLiteral("Wis_spinBox"));
        Wis_spinBox->setGeometry(QRect(10, 243, 39, 20));
        custom_label_2 = new QLabel(StatsgroupBox);
        custom_label_2->setObjectName(QStringLiteral("custom_label_2"));
        custom_label_2->setGeometry(QRect(90, 35, 16, 24));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Fan Heiti Std B"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        custom_label_2->setFont(font2);
        custom_label_2->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        custom_label_4 = new QLabel(StatsgroupBox);
        custom_label_4->setObjectName(QStringLiteral("custom_label_4"));
        custom_label_4->setGeometry(QRect(90, 86, 16, 24));
        custom_label_4->setFont(font2);
        custom_label_4->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        custom_label_3 = new QLabel(StatsgroupBox);
        custom_label_3->setObjectName(QStringLiteral("custom_label_3"));
        custom_label_3->setGeometry(QRect(90, 137, 16, 24));
        custom_label_3->setFont(font2);
        custom_label_3->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        custom_label_6 = new QLabel(StatsgroupBox);
        custom_label_6->setObjectName(QStringLiteral("custom_label_6"));
        custom_label_6->setGeometry(QRect(90, 238, 16, 24));
        custom_label_6->setFont(font2);
        custom_label_6->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        custom_label_5 = new QLabel(StatsgroupBox);
        custom_label_5->setObjectName(QStringLiteral("custom_label_5"));
        custom_label_5->setGeometry(QRect(90, 187, 16, 24));
        custom_label_5->setFont(font2);
        custom_label_5->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        custom_label = new QLabel(StatsgroupBox);
        custom_label->setObjectName(QStringLiteral("custom_label"));
        custom_label->setGeometry(QRect(90, 289, 16, 24));
        custom_label->setFont(font2);
        custom_label->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        Stats_label = new QLabel(StatsgroupBox);
        Stats_label->setObjectName(QStringLiteral("Stats_label"));
        Stats_label->setGeometry(QRect(10, 4, 32, 20));
        Stats_label->setFont(font);
        Stats_label->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        Stats_res_label = new QLabel(StatsgroupBox);
        Stats_res_label->setObjectName(QStringLiteral("Stats_res_label"));
        Stats_res_label->setGeometry(QRect(230, 4, 76, 20));
        Stats_res_label->setFont(font);
        Stats_res_label->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        Race_mod_label = new QLabel(StatsgroupBox);
        Race_mod_label->setObjectName(QStringLiteral("Race_mod_label"));
        Race_mod_label->setGeometry(QRect(125, 4, 66, 20));
        Race_mod_label->setFont(font);
        Race_mod_label->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        custom_label_7 = new QLabel(StatsgroupBox);
        custom_label_7->setObjectName(QStringLiteral("custom_label_7"));
        custom_label_7->setGeometry(QRect(214, 36, 16, 24));
        custom_label_7->setFont(font2);
        custom_label_7->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        custom_label_8 = new QLabel(StatsgroupBox);
        custom_label_8->setObjectName(QStringLiteral("custom_label_8"));
        custom_label_8->setGeometry(QRect(214, 87, 16, 24));
        custom_label_8->setFont(font2);
        custom_label_8->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        custom_label_9 = new QLabel(StatsgroupBox);
        custom_label_9->setObjectName(QStringLiteral("custom_label_9"));
        custom_label_9->setGeometry(QRect(214, 138, 16, 24));
        custom_label_9->setFont(font2);
        custom_label_9->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        custom_label_10 = new QLabel(StatsgroupBox);
        custom_label_10->setObjectName(QStringLiteral("custom_label_10"));
        custom_label_10->setGeometry(QRect(214, 188, 16, 24));
        custom_label_10->setFont(font2);
        custom_label_10->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        custom_label_11 = new QLabel(StatsgroupBox);
        custom_label_11->setObjectName(QStringLiteral("custom_label_11"));
        custom_label_11->setGeometry(QRect(214, 239, 16, 24));
        custom_label_11->setFont(font2);
        custom_label_11->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        custom_label_12 = new QLabel(StatsgroupBox);
        custom_label_12->setObjectName(QStringLiteral("custom_label_12"));
        custom_label_12->setGeometry(QRect(214, 290, 16, 24));
        custom_label_12->setFont(font2);
        custom_label_12->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        str_stats_label = new QLabel(StatsgroupBox);
        str_stats_label->setObjectName(QStringLiteral("str_stats_label"));
        str_stats_label->setGeometry(QRect(260, 36, 60, 20));
        str_stats_label->setFont(font);
        str_stats_label->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        dex_stats_label = new QLabel(StatsgroupBox);
        dex_stats_label->setObjectName(QStringLiteral("dex_stats_label"));
        dex_stats_label->setGeometry(QRect(260, 87, 60, 20));
        dex_stats_label->setFont(font);
        dex_stats_label->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        int_stats_label = new QLabel(StatsgroupBox);
        int_stats_label->setObjectName(QStringLiteral("int_stats_label"));
        int_stats_label->setGeometry(QRect(260, 188, 60, 20));
        int_stats_label->setFont(font);
        int_stats_label->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        con_stats_label = new QLabel(StatsgroupBox);
        con_stats_label->setObjectName(QStringLiteral("con_stats_label"));
        con_stats_label->setGeometry(QRect(260, 138, 60, 20));
        con_stats_label->setFont(font);
        con_stats_label->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        wis_stats_label = new QLabel(StatsgroupBox);
        wis_stats_label->setObjectName(QStringLiteral("wis_stats_label"));
        wis_stats_label->setGeometry(QRect(260, 239, 60, 20));
        wis_stats_label->setFont(font);
        wis_stats_label->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        cha_stats_label = new QLabel(StatsgroupBox);
        cha_stats_label->setObjectName(QStringLiteral("cha_stats_label"));
        cha_stats_label->setGeometry(QRect(260, 290, 60, 20));
        cha_stats_label->setFont(font);
        cha_stats_label->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        race_mod_con_label = new QLabel(StatsgroupBox);
        race_mod_con_label->setObjectName(QStringLiteral("race_mod_con_label"));
        race_mod_con_label->setGeometry(QRect(150, 139, 70, 20));
        race_mod_con_label->setFont(font);
        race_mod_con_label->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        race_mod_str_label = new QLabel(StatsgroupBox);
        race_mod_str_label->setObjectName(QStringLiteral("race_mod_str_label"));
        race_mod_str_label->setGeometry(QRect(150, 39, 70, 20));
        race_mod_str_label->setFont(font);
        race_mod_str_label->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        race_mod_dex_label = new QLabel(StatsgroupBox);
        race_mod_dex_label->setObjectName(QStringLiteral("race_mod_dex_label"));
        race_mod_dex_label->setGeometry(QRect(150, 89, 70, 20));
        race_mod_dex_label->setFont(font);
        race_mod_dex_label->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        race_mod_wis_label = new QLabel(StatsgroupBox);
        race_mod_wis_label->setObjectName(QStringLiteral("race_mod_wis_label"));
        race_mod_wis_label->setGeometry(QRect(150, 243, 70, 20));
        race_mod_wis_label->setFont(font);
        race_mod_wis_label->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        race_mod_int_label = new QLabel(StatsgroupBox);
        race_mod_int_label->setObjectName(QStringLiteral("race_mod_int_label"));
        race_mod_int_label->setGeometry(QRect(150, 192, 70, 20));
        race_mod_int_label->setFont(font);
        race_mod_int_label->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        race_mod_cha_label = new QLabel(StatsgroupBox);
        race_mod_cha_label->setObjectName(QStringLiteral("race_mod_cha_label"));
        race_mod_cha_label->setGeometry(QRect(150, 294, 70, 20));
        race_mod_cha_label->setFont(font);
        race_mod_cha_label->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0);"));
        biograf_label = new QLabel(centralWidget);
        biograf_label->setObjectName(QStringLiteral("biograf_label"));
        biograf_label->setGeometry(QRect(400, 355, 47, 13));
        biograf_label->setFont(font);
        biograf_label->setStyleSheet(QLatin1String("background-color: rgba(75, 75, 75, 0);\n"
"color: rgb(255, 255, 255);"));
        RaceClassAliggroupBox = new QGroupBox(centralWidget);
        RaceClassAliggroupBox->setObjectName(QStringLiteral("RaceClassAliggroupBox"));
        RaceClassAliggroupBox->setGeometry(QRect(10, 70, 240, 90));
        RaceClassAliggroupBox->setStyleSheet(QLatin1String("background-color: rgba(75, 75, 75, 150);\n"
"color: rgb(255, 255, 255);"));
        RaceLabel = new QLabel(RaceClassAliggroupBox);
        RaceLabel->setObjectName(QStringLiteral("RaceLabel"));
        RaceLabel->setGeometry(QRect(0, 0, 80, 20));
        RaceLabel->setFont(font);
        RaceLabel->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        SubRaceLabel = new QLabel(RaceClassAliggroupBox);
        SubRaceLabel->setObjectName(QStringLiteral("SubRaceLabel"));
        SubRaceLabel->setGeometry(QRect(120, 0, 80, 20));
        SubRaceLabel->setFont(font);
        SubRaceLabel->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        RaceComboBox = new QComboBox(RaceClassAliggroupBox);
        RaceComboBox->setObjectName(QStringLiteral("RaceComboBox"));
        RaceComboBox->setGeometry(QRect(0, 20, 100, 20));
        RaceComboBox->setFont(font);
        SubRaceTextEdit = new QLineEdit(RaceClassAliggroupBox);
        SubRaceTextEdit->setObjectName(QStringLiteral("SubRaceTextEdit"));
        SubRaceTextEdit->setGeometry(QRect(120, 20, 100, 20));
        SubRaceTextEdit->setFont(font);
        ClassesLabel = new QLabel(RaceClassAliggroupBox);
        ClassesLabel->setObjectName(QStringLiteral("ClassesLabel"));
        ClassesLabel->setGeometry(QRect(0, 40, 80, 20));
        ClassesLabel->setFont(font);
        ClassesLabel->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        ClassesComboBox = new QComboBox(RaceClassAliggroupBox);
        ClassesComboBox->setObjectName(QStringLiteral("ClassesComboBox"));
        ClassesComboBox->setGeometry(QRect(0, 60, 100, 20));
        ClassesComboBox->setFont(font);
        AlignmentLabel = new QLabel(RaceClassAliggroupBox);
        AlignmentLabel->setObjectName(QStringLiteral("AlignmentLabel"));
        AlignmentLabel->setGeometry(QRect(120, 40, 80, 20));
        AlignmentLabel->setFont(font);
        AlignmentLabel->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        AlignmentComboBox = new QComboBox(RaceClassAliggroupBox);
        AlignmentComboBox->setObjectName(QStringLiteral("AlignmentComboBox"));
        AlignmentComboBox->setGeometry(QRect(120, 60, 100, 20));
        AlignmentComboBox->setFont(font);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(500, 610, 171, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_saveAnket = new QPushButton(horizontalLayoutWidget);
        pushButton_saveAnket->setObjectName(QStringLiteral("pushButton_saveAnket"));
        pushButton_saveAnket->setFont(font);

        horizontalLayout->addWidget(pushButton_saveAnket);

        ExitPushButton = new QPushButton(horizontalLayoutWidget);
        ExitPushButton->setObjectName(QStringLiteral("ExitPushButton"));
        ExitPushButton->setFont(font);

        horizontalLayout->addWidget(ExitPushButton);

        graphicsView_frame = new QGraphicsView(centralWidget);
        graphicsView_frame->setObjectName(QStringLiteral("graphicsView_frame"));
        graphicsView_frame->setGeometry(QRect(480, 20, 203, 293));
        graphicsView_frame->setStyleSheet(QStringLiteral("background-image: url(:/res/res/frame.png);"));
        NamegroupBox = new QGroupBox(centralWidget);
        NamegroupBox->setObjectName(QStringLiteral("NamegroupBox"));
        NamegroupBox->setGeometry(QRect(10, 20, 461, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Bodoni MT"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        NamegroupBox->setFont(font3);
        NamegroupBox->setStyleSheet(QLatin1String("background-color: rgba(75, 75, 75, 150);\n"
"color: rgb(255, 255, 255);"));
        NameTextEdit = new QLineEdit(NamegroupBox);
        NameTextEdit->setObjectName(QStringLiteral("NameTextEdit"));
        NameTextEdit->setGeometry(QRect(0, 20, 461, 21));
        NameTextEdit->setFont(font);
        PlayerAnketa->setCentralWidget(centralWidget);
        graphicsView_background->raise();
        bio_textEdit->raise();
        BodyDategroupBox->raise();
        layoutWidget_4->raise();
        StatsgroupBox->raise();
        biograf_label->raise();
        RaceClassAliggroupBox->raise();
        horizontalLayoutWidget->raise();
        graphicsView_frame->raise();
        graphicsView_Avatar->raise();
        NamegroupBox->raise();

        retranslateUi(PlayerAnketa);

        QMetaObject::connectSlotsByName(PlayerAnketa);
    } // setupUi

    void retranslateUi(QMainWindow *PlayerAnketa)
    {
        PlayerAnketa->setWindowTitle(QApplication::translate("PlayerAnketa", "PlayerAnketa", Q_NULLPTR));
        BodyDategroupBox->setTitle(QString());
        HeightLabel->setText(QApplication::translate("PlayerAnketa", "Height", Q_NULLPTR));
        SexLabel->setText(QApplication::translate("PlayerAnketa", "Sex", Q_NULLPTR));
        AgeLabel->setText(QApplication::translate("PlayerAnketa", "Age", Q_NULLPTR));
        WeightLabel->setText(QApplication::translate("PlayerAnketa", "Weight", Q_NULLPTR));
        label_year->setText(QApplication::translate("PlayerAnketa", "yr", Q_NULLPTR));
        label_kg->setText(QApplication::translate("PlayerAnketa", "kg", Q_NULLPTR));
        label_sm->setText(QApplication::translate("PlayerAnketa", "sm", Q_NULLPTR));
        LoadpushButton->setText(QApplication::translate("PlayerAnketa", "Load avatar", Q_NULLPTR));
        CreatepushButton->setText(QApplication::translate("PlayerAnketa", "Create avatar", Q_NULLPTR));
        StatsgroupBox->setTitle(QString());
        Cha_label->setText(QApplication::translate("PlayerAnketa", "Cha", Q_NULLPTR));
        Str_label->setText(QApplication::translate("PlayerAnketa", "Str", Q_NULLPTR));
        Dex_label->setText(QApplication::translate("PlayerAnketa", "Dex", Q_NULLPTR));
        Con_label->setText(QApplication::translate("PlayerAnketa", "Con", Q_NULLPTR));
        Int_label->setText(QApplication::translate("PlayerAnketa", "Int", Q_NULLPTR));
        Wis_label->setText(QApplication::translate("PlayerAnketa", "Wis", Q_NULLPTR));
        custom_label_2->setText(QApplication::translate("PlayerAnketa", "+", Q_NULLPTR));
        custom_label_4->setText(QApplication::translate("PlayerAnketa", "+", Q_NULLPTR));
        custom_label_3->setText(QApplication::translate("PlayerAnketa", "+", Q_NULLPTR));
        custom_label_6->setText(QApplication::translate("PlayerAnketa", "+", Q_NULLPTR));
        custom_label_5->setText(QApplication::translate("PlayerAnketa", "+", Q_NULLPTR));
        custom_label->setText(QApplication::translate("PlayerAnketa", "+", Q_NULLPTR));
        Stats_label->setText(QApplication::translate("PlayerAnketa", "Stats", Q_NULLPTR));
        Stats_res_label->setText(QApplication::translate("PlayerAnketa", "Result stats", Q_NULLPTR));
        Race_mod_label->setText(QApplication::translate("PlayerAnketa", "Race mod", Q_NULLPTR));
        custom_label_7->setText(QApplication::translate("PlayerAnketa", "=", Q_NULLPTR));
        custom_label_8->setText(QApplication::translate("PlayerAnketa", "=", Q_NULLPTR));
        custom_label_9->setText(QApplication::translate("PlayerAnketa", "=", Q_NULLPTR));
        custom_label_10->setText(QApplication::translate("PlayerAnketa", "=", Q_NULLPTR));
        custom_label_11->setText(QApplication::translate("PlayerAnketa", "=", Q_NULLPTR));
        custom_label_12->setText(QApplication::translate("PlayerAnketa", "=", Q_NULLPTR));
        str_stats_label->setText(QApplication::translate("PlayerAnketa", "str_stats", Q_NULLPTR));
        dex_stats_label->setText(QApplication::translate("PlayerAnketa", "dex_stats", Q_NULLPTR));
        int_stats_label->setText(QApplication::translate("PlayerAnketa", "int_stats", Q_NULLPTR));
        con_stats_label->setText(QApplication::translate("PlayerAnketa", "con_stats", Q_NULLPTR));
        wis_stats_label->setText(QApplication::translate("PlayerAnketa", "wis_stats", Q_NULLPTR));
        cha_stats_label->setText(QApplication::translate("PlayerAnketa", "cha_stats", Q_NULLPTR));
        race_mod_con_label->setText(QApplication::translate("PlayerAnketa", "race_mode", Q_NULLPTR));
        race_mod_str_label->setText(QApplication::translate("PlayerAnketa", "race_mode", Q_NULLPTR));
        race_mod_dex_label->setText(QApplication::translate("PlayerAnketa", "race_mode", Q_NULLPTR));
        race_mod_wis_label->setText(QApplication::translate("PlayerAnketa", "race_mode", Q_NULLPTR));
        race_mod_int_label->setText(QApplication::translate("PlayerAnketa", "race_mode", Q_NULLPTR));
        race_mod_cha_label->setText(QApplication::translate("PlayerAnketa", "race_mode", Q_NULLPTR));
        biograf_label->setText(QApplication::translate("PlayerAnketa", "Bio:", Q_NULLPTR));
        RaceClassAliggroupBox->setTitle(QString());
        RaceLabel->setText(QApplication::translate("PlayerAnketa", "Race", Q_NULLPTR));
        SubRaceLabel->setText(QApplication::translate("PlayerAnketa", "Subrace", Q_NULLPTR));
        ClassesLabel->setText(QApplication::translate("PlayerAnketa", "Classes", Q_NULLPTR));
        AlignmentLabel->setText(QApplication::translate("PlayerAnketa", "Alignment", Q_NULLPTR));
        pushButton_saveAnket->setText(QApplication::translate("PlayerAnketa", "SaveAnket", Q_NULLPTR));
        ExitPushButton->setText(QApplication::translate("PlayerAnketa", "Exit", Q_NULLPTR));
        NamegroupBox->setTitle(QApplication::translate("PlayerAnketa", "Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlayerAnketa: public Ui_PlayerAnketa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERANKETA_H
