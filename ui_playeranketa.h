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
    QLabel *NameLabel;
    QGroupBox *BodyDategroupBox;
    QComboBox *SexComboBox;
    QLabel *HeightLabel;
    QLabel *SexLabel;
    QLabel *AgeLabel;
    QLabel *WeightLabel;
    QDoubleSpinBox *HeightdoubleSpinBox;
    QDoubleSpinBox *WeightdoubleSpinBox;
    QDoubleSpinBox *AgedoubleSpinBox;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_Button;
    QPushButton *CreatepushButton;
    QPushButton *LoadpushButton;
    QGroupBox *StatsgroupBox;
    QLabel *Stats_res_label;
    QLabel *Stats_label;
    QLabel *Race_mod_label;
    QSpinBox *Cha_spinBox;
    QSpinBox *Wis_spinBox;
    QLabel *Dex_label;
    QLabel *Int_label;
    QLabel *Con_label;
    QLabel *Cha_label;
    QSpinBox *Con_spinBox;
    QSpinBox *Dex_spinBox;
    QSpinBox *Str_spinBox;
    QSpinBox *Int_spinBox;
    QLabel *Wis_label;
    QLabel *Str_label;
    QLabel *custom_label_6;
    QLabel *custom_label_4;
    QLabel *custom_label;
    QLabel *custom_label_3;
    QLabel *custom_label_2;
    QLabel *custom_label_5;
    QLabel *race_mod_cha_label;
    QLabel *race_mod_con_label;
    QLabel *race_mod_str_label;
    QLabel *race_mod_int_label;
    QLabel *race_mod_wis_label;
    QLabel *race_mod_dex_label;
    QLabel *custom_label_12;
    QLabel *custom_label_11;
    QLabel *custom_label_8;
    QLabel *custom_label_10;
    QLabel *custom_label_7;
    QLabel *custom_label_9;
    QLabel *cha_stats_label;
    QLabel *str_stats_label;
    QLabel *con_stats_label;
    QLabel *int_stats_label;
    QLabel *wis_stats_label;
    QLabel *dex_stats_label;
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
    QLineEdit *NameTextEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_saveAnket;
    QPushButton *ExitPushButton;
    QGraphicsView *graphicsView_frame;

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
        graphicsView_background = new QGraphicsView(centralWidget);
        graphicsView_background->setObjectName(QStringLiteral("graphicsView_background"));
        graphicsView_background->setGeometry(QRect(0, 0, 691, 651));
        graphicsView_background->setStyleSheet(QStringLiteral("background-image: url(:/res/res/fon01.png);"));
        NameLabel = new QLabel(centralWidget);
        NameLabel->setObjectName(QStringLiteral("NameLabel"));
        NameLabel->setGeometry(QRect(10, 20, 46, 13));
        QFont font;
        font.setPointSize(12);
        NameLabel->setFont(font);
        BodyDategroupBox = new QGroupBox(centralWidget);
        BodyDategroupBox->setObjectName(QStringLiteral("BodyDategroupBox"));
        BodyDategroupBox->setGeometry(QRect(260, 80, 191, 131));
        SexComboBox = new QComboBox(BodyDategroupBox);
        SexComboBox->setObjectName(QStringLiteral("SexComboBox"));
        SexComboBox->setGeometry(QRect(10, 40, 81, 22));
        HeightLabel = new QLabel(BodyDategroupBox);
        HeightLabel->setObjectName(QStringLiteral("HeightLabel"));
        HeightLabel->setGeometry(QRect(100, 20, 51, 19));
        HeightLabel->setFont(font);
        SexLabel = new QLabel(BodyDategroupBox);
        SexLabel->setObjectName(QStringLiteral("SexLabel"));
        SexLabel->setGeometry(QRect(10, 20, 31, 19));
        SexLabel->setFont(font);
        AgeLabel = new QLabel(BodyDategroupBox);
        AgeLabel->setObjectName(QStringLiteral("AgeLabel"));
        AgeLabel->setGeometry(QRect(10, 80, 31, 19));
        AgeLabel->setFont(font);
        WeightLabel = new QLabel(BodyDategroupBox);
        WeightLabel->setObjectName(QStringLiteral("WeightLabel"));
        WeightLabel->setGeometry(QRect(100, 80, 51, 19));
        WeightLabel->setFont(font);
        HeightdoubleSpinBox = new QDoubleSpinBox(BodyDategroupBox);
        HeightdoubleSpinBox->setObjectName(QStringLiteral("HeightdoubleSpinBox"));
        HeightdoubleSpinBox->setGeometry(QRect(100, 40, 80, 22));
        WeightdoubleSpinBox = new QDoubleSpinBox(BodyDategroupBox);
        WeightdoubleSpinBox->setObjectName(QStringLiteral("WeightdoubleSpinBox"));
        WeightdoubleSpinBox->setGeometry(QRect(100, 100, 80, 22));
        AgedoubleSpinBox = new QDoubleSpinBox(BodyDategroupBox);
        AgedoubleSpinBox->setObjectName(QStringLiteral("AgedoubleSpinBox"));
        AgedoubleSpinBox->setGeometry(QRect(10, 100, 80, 22));
        layoutWidget_4 = new QWidget(centralWidget);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(500, 320, 174, 28));
        horizontalLayout_Button = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_Button->setSpacing(6);
        horizontalLayout_Button->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_Button->setObjectName(QStringLiteral("horizontalLayout_Button"));
        horizontalLayout_Button->setContentsMargins(0, 0, 0, 0);
        CreatepushButton = new QPushButton(layoutWidget_4);
        CreatepushButton->setObjectName(QStringLiteral("CreatepushButton"));
        QFont font1;
        font1.setPointSize(10);
        CreatepushButton->setFont(font1);

        horizontalLayout_Button->addWidget(CreatepushButton);

        LoadpushButton = new QPushButton(layoutWidget_4);
        LoadpushButton->setObjectName(QStringLiteral("LoadpushButton"));
        LoadpushButton->setFont(font1);

        horizontalLayout_Button->addWidget(LoadpushButton);

        StatsgroupBox = new QGroupBox(centralWidget);
        StatsgroupBox->setObjectName(QStringLiteral("StatsgroupBox"));
        StatsgroupBox->setGeometry(QRect(10, 220, 341, 391));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Fangsong Std R"));
        font2.setPointSize(12);
        StatsgroupBox->setFont(font2);
        StatsgroupBox->setStyleSheet(QLatin1String("background-color: rgba(75, 75, 75, 150);\n"
"color: rgb(255, 255, 255);"));
        Stats_res_label = new QLabel(StatsgroupBox);
        Stats_res_label->setObjectName(QStringLiteral("Stats_res_label"));
        Stats_res_label->setGeometry(QRect(240, 30, 80, 20));
        Stats_res_label->setFont(font);
        Stats_label = new QLabel(StatsgroupBox);
        Stats_label->setObjectName(QStringLiteral("Stats_label"));
        Stats_label->setGeometry(QRect(15, 30, 80, 20));
        Stats_label->setFont(font);
        Race_mod_label = new QLabel(StatsgroupBox);
        Race_mod_label->setObjectName(QStringLiteral("Race_mod_label"));
        Race_mod_label->setGeometry(QRect(110, 30, 80, 20));
        Race_mod_label->setFont(font);
        Cha_spinBox = new QSpinBox(StatsgroupBox);
        Cha_spinBox->setObjectName(QStringLiteral("Cha_spinBox"));
        Cha_spinBox->setGeometry(QRect(15, 350, 35, 25));
        Wis_spinBox = new QSpinBox(StatsgroupBox);
        Wis_spinBox->setObjectName(QStringLiteral("Wis_spinBox"));
        Wis_spinBox->setGeometry(QRect(15, 296, 35, 25));
        Dex_label = new QLabel(StatsgroupBox);
        Dex_label->setObjectName(QStringLiteral("Dex_label"));
        Dex_label->setGeometry(QRect(15, 109, 35, 25));
        Dex_label->setFont(font);
        Int_label = new QLabel(StatsgroupBox);
        Int_label->setObjectName(QStringLiteral("Int_label"));
        Int_label->setGeometry(QRect(15, 217, 35, 25));
        Int_label->setFont(font);
        Con_label = new QLabel(StatsgroupBox);
        Con_label->setObjectName(QStringLiteral("Con_label"));
        Con_label->setGeometry(QRect(15, 163, 35, 25));
        Con_label->setFont(font);
        Cha_label = new QLabel(StatsgroupBox);
        Cha_label->setObjectName(QStringLiteral("Cha_label"));
        Cha_label->setGeometry(QRect(15, 325, 35, 25));
        Cha_label->setFont(font);
        Con_spinBox = new QSpinBox(StatsgroupBox);
        Con_spinBox->setObjectName(QStringLiteral("Con_spinBox"));
        Con_spinBox->setGeometry(QRect(15, 188, 35, 25));
        Dex_spinBox = new QSpinBox(StatsgroupBox);
        Dex_spinBox->setObjectName(QStringLiteral("Dex_spinBox"));
        Dex_spinBox->setGeometry(QRect(15, 134, 35, 25));
        Str_spinBox = new QSpinBox(StatsgroupBox);
        Str_spinBox->setObjectName(QStringLiteral("Str_spinBox"));
        Str_spinBox->setGeometry(QRect(15, 80, 35, 25));
        Int_spinBox = new QSpinBox(StatsgroupBox);
        Int_spinBox->setObjectName(QStringLiteral("Int_spinBox"));
        Int_spinBox->setGeometry(QRect(15, 242, 35, 25));
        Wis_label = new QLabel(StatsgroupBox);
        Wis_label->setObjectName(QStringLiteral("Wis_label"));
        Wis_label->setGeometry(QRect(15, 271, 35, 25));
        Wis_label->setFont(font);
        Str_label = new QLabel(StatsgroupBox);
        Str_label->setObjectName(QStringLiteral("Str_label"));
        Str_label->setGeometry(QRect(15, 55, 35, 25));
        Str_label->setFont(font);
        custom_label_6 = new QLabel(StatsgroupBox);
        custom_label_6->setObjectName(QStringLiteral("custom_label_6"));
        custom_label_6->setGeometry(QRect(80, 350, 20, 20));
        QFont font3;
        font3.setPointSize(14);
        custom_label_6->setFont(font3);
        custom_label_4 = new QLabel(StatsgroupBox);
        custom_label_4->setObjectName(QStringLiteral("custom_label_4"));
        custom_label_4->setGeometry(QRect(80, 242, 20, 20));
        custom_label_4->setFont(font3);
        custom_label = new QLabel(StatsgroupBox);
        custom_label->setObjectName(QStringLiteral("custom_label"));
        custom_label->setGeometry(QRect(80, 80, 20, 20));
        custom_label->setFont(font3);
        custom_label_3 = new QLabel(StatsgroupBox);
        custom_label_3->setObjectName(QStringLiteral("custom_label_3"));
        custom_label_3->setGeometry(QRect(80, 188, 20, 20));
        custom_label_3->setFont(font3);
        custom_label_2 = new QLabel(StatsgroupBox);
        custom_label_2->setObjectName(QStringLiteral("custom_label_2"));
        custom_label_2->setGeometry(QRect(80, 134, 20, 20));
        custom_label_2->setFont(font3);
        custom_label_5 = new QLabel(StatsgroupBox);
        custom_label_5->setObjectName(QStringLiteral("custom_label_5"));
        custom_label_5->setGeometry(QRect(80, 296, 20, 20));
        custom_label_5->setFont(font3);
        race_mod_cha_label = new QLabel(StatsgroupBox);
        race_mod_cha_label->setObjectName(QStringLiteral("race_mod_cha_label"));
        race_mod_cha_label->setGeometry(QRect(130, 350, 80, 25));
        race_mod_cha_label->setFont(font);
        race_mod_con_label = new QLabel(StatsgroupBox);
        race_mod_con_label->setObjectName(QStringLiteral("race_mod_con_label"));
        race_mod_con_label->setGeometry(QRect(130, 188, 80, 25));
        race_mod_con_label->setFont(font);
        race_mod_str_label = new QLabel(StatsgroupBox);
        race_mod_str_label->setObjectName(QStringLiteral("race_mod_str_label"));
        race_mod_str_label->setGeometry(QRect(130, 80, 80, 25));
        race_mod_str_label->setFont(font);
        race_mod_int_label = new QLabel(StatsgroupBox);
        race_mod_int_label->setObjectName(QStringLiteral("race_mod_int_label"));
        race_mod_int_label->setGeometry(QRect(130, 242, 80, 25));
        race_mod_int_label->setFont(font);
        race_mod_wis_label = new QLabel(StatsgroupBox);
        race_mod_wis_label->setObjectName(QStringLiteral("race_mod_wis_label"));
        race_mod_wis_label->setGeometry(QRect(130, 296, 80, 25));
        race_mod_wis_label->setFont(font);
        race_mod_dex_label = new QLabel(StatsgroupBox);
        race_mod_dex_label->setObjectName(QStringLiteral("race_mod_dex_label"));
        race_mod_dex_label->setGeometry(QRect(130, 134, 80, 25));
        race_mod_dex_label->setFont(font);
        custom_label_12 = new QLabel(StatsgroupBox);
        custom_label_12->setObjectName(QStringLiteral("custom_label_12"));
        custom_label_12->setGeometry(QRect(210, 350, 20, 20));
        custom_label_12->setFont(font3);
        custom_label_11 = new QLabel(StatsgroupBox);
        custom_label_11->setObjectName(QStringLiteral("custom_label_11"));
        custom_label_11->setGeometry(QRect(210, 296, 20, 20));
        custom_label_11->setFont(font3);
        custom_label_8 = new QLabel(StatsgroupBox);
        custom_label_8->setObjectName(QStringLiteral("custom_label_8"));
        custom_label_8->setGeometry(QRect(210, 134, 20, 20));
        custom_label_8->setFont(font3);
        custom_label_10 = new QLabel(StatsgroupBox);
        custom_label_10->setObjectName(QStringLiteral("custom_label_10"));
        custom_label_10->setGeometry(QRect(210, 242, 20, 20));
        custom_label_10->setFont(font3);
        custom_label_7 = new QLabel(StatsgroupBox);
        custom_label_7->setObjectName(QStringLiteral("custom_label_7"));
        custom_label_7->setGeometry(QRect(210, 80, 20, 20));
        custom_label_7->setFont(font3);
        custom_label_9 = new QLabel(StatsgroupBox);
        custom_label_9->setObjectName(QStringLiteral("custom_label_9"));
        custom_label_9->setGeometry(QRect(210, 188, 20, 20));
        custom_label_9->setFont(font3);
        cha_stats_label = new QLabel(StatsgroupBox);
        cha_stats_label->setObjectName(QStringLiteral("cha_stats_label"));
        cha_stats_label->setGeometry(QRect(250, 350, 80, 20));
        cha_stats_label->setFont(font);
        str_stats_label = new QLabel(StatsgroupBox);
        str_stats_label->setObjectName(QStringLiteral("str_stats_label"));
        str_stats_label->setGeometry(QRect(250, 80, 80, 20));
        str_stats_label->setFont(font);
        con_stats_label = new QLabel(StatsgroupBox);
        con_stats_label->setObjectName(QStringLiteral("con_stats_label"));
        con_stats_label->setGeometry(QRect(250, 188, 80, 20));
        con_stats_label->setFont(font);
        int_stats_label = new QLabel(StatsgroupBox);
        int_stats_label->setObjectName(QStringLiteral("int_stats_label"));
        int_stats_label->setGeometry(QRect(250, 242, 80, 20));
        int_stats_label->setFont(font);
        wis_stats_label = new QLabel(StatsgroupBox);
        wis_stats_label->setObjectName(QStringLiteral("wis_stats_label"));
        wis_stats_label->setGeometry(QRect(250, 296, 80, 20));
        wis_stats_label->setFont(font);
        dex_stats_label = new QLabel(StatsgroupBox);
        dex_stats_label->setObjectName(QStringLiteral("dex_stats_label"));
        dex_stats_label->setGeometry(QRect(250, 134, 80, 20));
        dex_stats_label->setFont(font);
        biograf_label = new QLabel(centralWidget);
        biograf_label->setObjectName(QStringLiteral("biograf_label"));
        biograf_label->setGeometry(QRect(400, 350, 47, 13));
        biograf_label->setFont(font);
        RaceClassAliggroupBox = new QGroupBox(centralWidget);
        RaceClassAliggroupBox->setObjectName(QStringLiteral("RaceClassAliggroupBox"));
        RaceClassAliggroupBox->setGeometry(QRect(10, 60, 241, 151));
        RaceLabel = new QLabel(RaceClassAliggroupBox);
        RaceLabel->setObjectName(QStringLiteral("RaceLabel"));
        RaceLabel->setGeometry(QRect(20, 30, 80, 20));
        RaceLabel->setFont(font);
        SubRaceLabel = new QLabel(RaceClassAliggroupBox);
        SubRaceLabel->setObjectName(QStringLiteral("SubRaceLabel"));
        SubRaceLabel->setGeometry(QRect(130, 30, 80, 20));
        SubRaceLabel->setFont(font);
        RaceComboBox = new QComboBox(RaceClassAliggroupBox);
        RaceComboBox->setObjectName(QStringLiteral("RaceComboBox"));
        RaceComboBox->setGeometry(QRect(10, 50, 100, 20));
        SubRaceTextEdit = new QLineEdit(RaceClassAliggroupBox);
        SubRaceTextEdit->setObjectName(QStringLiteral("SubRaceTextEdit"));
        SubRaceTextEdit->setGeometry(QRect(120, 50, 100, 20));
        ClassesLabel = new QLabel(RaceClassAliggroupBox);
        ClassesLabel->setObjectName(QStringLiteral("ClassesLabel"));
        ClassesLabel->setGeometry(QRect(20, 90, 80, 20));
        ClassesLabel->setFont(font);
        ClassesComboBox = new QComboBox(RaceClassAliggroupBox);
        ClassesComboBox->setObjectName(QStringLiteral("ClassesComboBox"));
        ClassesComboBox->setGeometry(QRect(10, 110, 100, 20));
        AlignmentLabel = new QLabel(RaceClassAliggroupBox);
        AlignmentLabel->setObjectName(QStringLiteral("AlignmentLabel"));
        AlignmentLabel->setGeometry(QRect(130, 90, 80, 20));
        AlignmentLabel->setFont(font);
        AlignmentComboBox = new QComboBox(RaceClassAliggroupBox);
        AlignmentComboBox->setObjectName(QStringLiteral("AlignmentComboBox"));
        AlignmentComboBox->setGeometry(QRect(120, 110, 100, 20));
        NameTextEdit = new QLineEdit(centralWidget);
        NameTextEdit->setObjectName(QStringLiteral("NameTextEdit"));
        NameTextEdit->setGeometry(QRect(10, 40, 431, 21));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(520, 620, 168, 25));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_saveAnket = new QPushButton(horizontalLayoutWidget);
        pushButton_saveAnket->setObjectName(QStringLiteral("pushButton_saveAnket"));

        horizontalLayout->addWidget(pushButton_saveAnket);

        ExitPushButton = new QPushButton(horizontalLayoutWidget);
        ExitPushButton->setObjectName(QStringLiteral("ExitPushButton"));

        horizontalLayout->addWidget(ExitPushButton);

        graphicsView_frame = new QGraphicsView(centralWidget);
        graphicsView_frame->setObjectName(QStringLiteral("graphicsView_frame"));
        graphicsView_frame->setGeometry(QRect(480, 20, 203, 293));
        graphicsView_frame->setStyleSheet(QStringLiteral("background-image: url(:/res/res/frame.png);"));
        PlayerAnketa->setCentralWidget(centralWidget);
        graphicsView_background->raise();
        bio_textEdit->raise();
        NameLabel->raise();
        BodyDategroupBox->raise();
        layoutWidget_4->raise();
        StatsgroupBox->raise();
        biograf_label->raise();
        RaceClassAliggroupBox->raise();
        NameTextEdit->raise();
        horizontalLayoutWidget->raise();
        graphicsView_frame->raise();
        graphicsView_Avatar->raise();

        retranslateUi(PlayerAnketa);

        QMetaObject::connectSlotsByName(PlayerAnketa);
    } // setupUi

    void retranslateUi(QMainWindow *PlayerAnketa)
    {
        PlayerAnketa->setWindowTitle(QApplication::translate("PlayerAnketa", "PlayerAnketa", Q_NULLPTR));
        NameLabel->setText(QApplication::translate("PlayerAnketa", "Name", Q_NULLPTR));
        BodyDategroupBox->setTitle(QApplication::translate("PlayerAnketa", "Body", Q_NULLPTR));
        HeightLabel->setText(QApplication::translate("PlayerAnketa", "Height", Q_NULLPTR));
        SexLabel->setText(QApplication::translate("PlayerAnketa", "Sex", Q_NULLPTR));
        AgeLabel->setText(QApplication::translate("PlayerAnketa", "Age", Q_NULLPTR));
        WeightLabel->setText(QApplication::translate("PlayerAnketa", "Weight", Q_NULLPTR));
        CreatepushButton->setText(QApplication::translate("PlayerAnketa", "Create avatar", Q_NULLPTR));
        LoadpushButton->setText(QApplication::translate("PlayerAnketa", "Load avatar", Q_NULLPTR));
        StatsgroupBox->setTitle(QApplication::translate("PlayerAnketa", "Stats", Q_NULLPTR));
        Stats_res_label->setText(QApplication::translate("PlayerAnketa", "Result stats", Q_NULLPTR));
        Stats_label->setText(QApplication::translate("PlayerAnketa", "Stats", Q_NULLPTR));
        Race_mod_label->setText(QApplication::translate("PlayerAnketa", "Race mod", Q_NULLPTR));
        Dex_label->setText(QApplication::translate("PlayerAnketa", "Dex", Q_NULLPTR));
        Int_label->setText(QApplication::translate("PlayerAnketa", "Int", Q_NULLPTR));
        Con_label->setText(QApplication::translate("PlayerAnketa", "Con", Q_NULLPTR));
        Cha_label->setText(QApplication::translate("PlayerAnketa", "Cha", Q_NULLPTR));
        Wis_label->setText(QApplication::translate("PlayerAnketa", "Wis", Q_NULLPTR));
        Str_label->setText(QApplication::translate("PlayerAnketa", "Str", Q_NULLPTR));
        custom_label_6->setText(QApplication::translate("PlayerAnketa", "+", Q_NULLPTR));
        custom_label_4->setText(QApplication::translate("PlayerAnketa", "+", Q_NULLPTR));
        custom_label->setText(QApplication::translate("PlayerAnketa", "+", Q_NULLPTR));
        custom_label_3->setText(QApplication::translate("PlayerAnketa", "+", Q_NULLPTR));
        custom_label_2->setText(QApplication::translate("PlayerAnketa", "+", Q_NULLPTR));
        custom_label_5->setText(QApplication::translate("PlayerAnketa", "+", Q_NULLPTR));
        race_mod_cha_label->setText(QApplication::translate("PlayerAnketa", "cha_race_mod", Q_NULLPTR));
        race_mod_con_label->setText(QApplication::translate("PlayerAnketa", "con_race_mod", Q_NULLPTR));
        race_mod_str_label->setText(QApplication::translate("PlayerAnketa", "str_race_mod", Q_NULLPTR));
        race_mod_int_label->setText(QApplication::translate("PlayerAnketa", "int_race_mod", Q_NULLPTR));
        race_mod_wis_label->setText(QApplication::translate("PlayerAnketa", "wis_race_mod", Q_NULLPTR));
        race_mod_dex_label->setText(QApplication::translate("PlayerAnketa", "dex_race_mod", Q_NULLPTR));
        custom_label_12->setText(QApplication::translate("PlayerAnketa", "=", Q_NULLPTR));
        custom_label_11->setText(QApplication::translate("PlayerAnketa", "=", Q_NULLPTR));
        custom_label_8->setText(QApplication::translate("PlayerAnketa", "=", Q_NULLPTR));
        custom_label_10->setText(QApplication::translate("PlayerAnketa", "=", Q_NULLPTR));
        custom_label_7->setText(QApplication::translate("PlayerAnketa", "=", Q_NULLPTR));
        custom_label_9->setText(QApplication::translate("PlayerAnketa", "=", Q_NULLPTR));
        cha_stats_label->setText(QApplication::translate("PlayerAnketa", "cha_stats", Q_NULLPTR));
        str_stats_label->setText(QApplication::translate("PlayerAnketa", "str_stats", Q_NULLPTR));
        con_stats_label->setText(QApplication::translate("PlayerAnketa", "con_stats", Q_NULLPTR));
        int_stats_label->setText(QApplication::translate("PlayerAnketa", "int_stats", Q_NULLPTR));
        wis_stats_label->setText(QApplication::translate("PlayerAnketa", "wis_stats", Q_NULLPTR));
        dex_stats_label->setText(QApplication::translate("PlayerAnketa", "dex_stats", Q_NULLPTR));
        biograf_label->setText(QApplication::translate("PlayerAnketa", "Bio:", Q_NULLPTR));
        RaceClassAliggroupBox->setTitle(QApplication::translate("PlayerAnketa", "Player", Q_NULLPTR));
        RaceLabel->setText(QApplication::translate("PlayerAnketa", "Race", Q_NULLPTR));
        SubRaceLabel->setText(QApplication::translate("PlayerAnketa", "Subrace", Q_NULLPTR));
        ClassesLabel->setText(QApplication::translate("PlayerAnketa", "Classes", Q_NULLPTR));
        AlignmentLabel->setText(QApplication::translate("PlayerAnketa", "Alignment", Q_NULLPTR));
        pushButton_saveAnket->setText(QApplication::translate("PlayerAnketa", "SaveAnket", Q_NULLPTR));
        ExitPushButton->setText(QApplication::translate("PlayerAnketa", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlayerAnketa: public Ui_PlayerAnketa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERANKETA_H
