/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *BodyDategroupBox;
    QComboBox *SexComboBox;
    QLabel *HeightLabel;
    QLabel *SexLabel;
    QLabel *AgeLabel;
    QLabel *WeightLabel;
    QLineEdit *AgeTextEdit;
    QLineEdit *WeightTextEdit;
    QLineEdit *HeightTextEdit;
    QLabel *NameLabel;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_Button;
    QPushButton *LoadpushButton;
    QPushButton *CreatepushButton;
    QPushButton *ExitPushButton;
    QGraphicsView *graphicsView;
    QGroupBox *RaceClassAliggroupBox;
    QLabel *RaceLabel;
    QLabel *SubRaceLabel;
    QComboBox *RaceComboBox;
    QLineEdit *SubRaceTextEdit;
    QLabel *ClassesLabel;
    QComboBox *ClassesComboBox;
    QLabel *AlignmentLabel;
    QComboBox *AlignmentComboBox;
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
    QLineEdit *NameTextEdit;
    QTextEdit *bio_textEdit;
    QLabel *biograf_label;
    QGraphicsView *graphicsView_background;
    QPushButton *pushButton_saveAnket;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(670, 640);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BodyDategroupBox = new QGroupBox(centralWidget);
        BodyDategroupBox->setObjectName(QStringLiteral("BodyDategroupBox"));
        BodyDategroupBox->setGeometry(QRect(280, 80, 191, 131));
        SexComboBox = new QComboBox(BodyDategroupBox);
        SexComboBox->setObjectName(QStringLiteral("SexComboBox"));
        SexComboBox->setGeometry(QRect(10, 40, 81, 22));
        HeightLabel = new QLabel(BodyDategroupBox);
        HeightLabel->setObjectName(QStringLiteral("HeightLabel"));
        HeightLabel->setGeometry(QRect(100, 20, 51, 19));
        QFont font;
        font.setPointSize(12);
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
        AgeTextEdit = new QLineEdit(BodyDategroupBox);
        AgeTextEdit->setObjectName(QStringLiteral("AgeTextEdit"));
        AgeTextEdit->setGeometry(QRect(10, 100, 80, 22));
        WeightTextEdit = new QLineEdit(BodyDategroupBox);
        WeightTextEdit->setObjectName(QStringLiteral("WeightTextEdit"));
        WeightTextEdit->setGeometry(QRect(100, 100, 80, 22));
        HeightTextEdit = new QLineEdit(BodyDategroupBox);
        HeightTextEdit->setObjectName(QStringLiteral("HeightTextEdit"));
        HeightTextEdit->setGeometry(QRect(100, 40, 80, 22));
        NameLabel = new QLabel(centralWidget);
        NameLabel->setObjectName(QStringLiteral("NameLabel"));
        NameLabel->setGeometry(QRect(30, 20, 46, 13));
        NameLabel->setFont(font);
        layoutWidget_4 = new QWidget(centralWidget);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(490, 270, 174, 28));
        horizontalLayout_Button = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_Button->setSpacing(6);
        horizontalLayout_Button->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_Button->setObjectName(QStringLiteral("horizontalLayout_Button"));
        horizontalLayout_Button->setContentsMargins(0, 0, 0, 0);
        LoadpushButton = new QPushButton(layoutWidget_4);
        LoadpushButton->setObjectName(QStringLiteral("LoadpushButton"));
        QFont font1;
        font1.setPointSize(10);
        LoadpushButton->setFont(font1);

        horizontalLayout_Button->addWidget(LoadpushButton);

        CreatepushButton = new QPushButton(layoutWidget_4);
        CreatepushButton->setObjectName(QStringLiteral("CreatepushButton"));
        CreatepushButton->setFont(font1);

        horizontalLayout_Button->addWidget(CreatepushButton);

        ExitPushButton = new QPushButton(centralWidget);
        ExitPushButton->setObjectName(QStringLiteral("ExitPushButton"));
        ExitPushButton->setGeometry(QRect(580, 590, 80, 21));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(490, 10, 170, 260));
        RaceClassAliggroupBox = new QGroupBox(centralWidget);
        RaceClassAliggroupBox->setObjectName(QStringLiteral("RaceClassAliggroupBox"));
        RaceClassAliggroupBox->setGeometry(QRect(30, 60, 241, 151));
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
        StatsgroupBox = new QGroupBox(centralWidget);
        StatsgroupBox->setObjectName(QStringLiteral("StatsgroupBox"));
        StatsgroupBox->setGeometry(QRect(30, 220, 341, 391));
        StatsgroupBox->setStyleSheet(QLatin1String("border-color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(255, 6, 176);"));
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
        QFont font2;
        font2.setPointSize(14);
        custom_label_6->setFont(font2);
        custom_label_4 = new QLabel(StatsgroupBox);
        custom_label_4->setObjectName(QStringLiteral("custom_label_4"));
        custom_label_4->setGeometry(QRect(80, 242, 20, 20));
        custom_label_4->setFont(font2);
        custom_label = new QLabel(StatsgroupBox);
        custom_label->setObjectName(QStringLiteral("custom_label"));
        custom_label->setGeometry(QRect(80, 80, 20, 20));
        custom_label->setFont(font2);
        custom_label_3 = new QLabel(StatsgroupBox);
        custom_label_3->setObjectName(QStringLiteral("custom_label_3"));
        custom_label_3->setGeometry(QRect(80, 188, 20, 20));
        custom_label_3->setFont(font2);
        custom_label_2 = new QLabel(StatsgroupBox);
        custom_label_2->setObjectName(QStringLiteral("custom_label_2"));
        custom_label_2->setGeometry(QRect(80, 134, 20, 20));
        custom_label_2->setFont(font2);
        custom_label_5 = new QLabel(StatsgroupBox);
        custom_label_5->setObjectName(QStringLiteral("custom_label_5"));
        custom_label_5->setGeometry(QRect(80, 296, 20, 20));
        custom_label_5->setFont(font2);
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
        custom_label_12->setFont(font2);
        custom_label_11 = new QLabel(StatsgroupBox);
        custom_label_11->setObjectName(QStringLiteral("custom_label_11"));
        custom_label_11->setGeometry(QRect(210, 296, 20, 20));
        custom_label_11->setFont(font2);
        custom_label_8 = new QLabel(StatsgroupBox);
        custom_label_8->setObjectName(QStringLiteral("custom_label_8"));
        custom_label_8->setGeometry(QRect(210, 134, 20, 20));
        custom_label_8->setFont(font2);
        custom_label_10 = new QLabel(StatsgroupBox);
        custom_label_10->setObjectName(QStringLiteral("custom_label_10"));
        custom_label_10->setGeometry(QRect(210, 242, 20, 20));
        custom_label_10->setFont(font2);
        custom_label_7 = new QLabel(StatsgroupBox);
        custom_label_7->setObjectName(QStringLiteral("custom_label_7"));
        custom_label_7->setGeometry(QRect(210, 80, 20, 20));
        custom_label_7->setFont(font2);
        custom_label_9 = new QLabel(StatsgroupBox);
        custom_label_9->setObjectName(QStringLiteral("custom_label_9"));
        custom_label_9->setGeometry(QRect(210, 188, 20, 20));
        custom_label_9->setFont(font2);
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
        NameTextEdit = new QLineEdit(centralWidget);
        NameTextEdit->setObjectName(QStringLiteral("NameTextEdit"));
        NameTextEdit->setGeometry(QRect(30, 40, 431, 21));
        bio_textEdit = new QTextEdit(centralWidget);
        bio_textEdit->setObjectName(QStringLiteral("bio_textEdit"));
        bio_textEdit->setGeometry(QRect(390, 350, 271, 231));
        biograf_label = new QLabel(centralWidget);
        biograf_label->setObjectName(QStringLiteral("biograf_label"));
        biograf_label->setGeometry(QRect(390, 330, 47, 13));
        biograf_label->setFont(font);
        graphicsView_background = new QGraphicsView(centralWidget);
        graphicsView_background->setObjectName(QStringLiteral("graphicsView_background"));
        graphicsView_background->setGeometry(QRect(-10, -10, 690, 651));
        graphicsView_background->setStyleSheet(QStringLiteral("background-image: url(:/res/resources/ramka2.2.png);"));
        pushButton_saveAnket = new QPushButton(centralWidget);
        pushButton_saveAnket->setObjectName(QStringLiteral("pushButton_saveAnket"));
        pushButton_saveAnket->setGeometry(QRect(490, 590, 80, 21));
        MainWindow->setCentralWidget(centralWidget);
        graphicsView_background->raise();
        BodyDategroupBox->raise();
        NameLabel->raise();
        layoutWidget_4->raise();
        ExitPushButton->raise();
        graphicsView->raise();
        RaceClassAliggroupBox->raise();
        NameTextEdit->raise();
        bio_textEdit->raise();
        biograf_label->raise();
        pushButton_saveAnket->raise();
        StatsgroupBox->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 670, 20));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        BodyDategroupBox->setTitle(QApplication::translate("MainWindow", "Body", nullptr));
        HeightLabel->setText(QApplication::translate("MainWindow", "Height", nullptr));
        SexLabel->setText(QApplication::translate("MainWindow", "Sex", nullptr));
        AgeLabel->setText(QApplication::translate("MainWindow", "Age", nullptr));
        WeightLabel->setText(QApplication::translate("MainWindow", "Weight", nullptr));
        NameLabel->setText(QApplication::translate("MainWindow", "Name", nullptr));
        LoadpushButton->setText(QApplication::translate("MainWindow", "Load avatar", nullptr));
        CreatepushButton->setText(QApplication::translate("MainWindow", "Create avatar", nullptr));
        ExitPushButton->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        RaceClassAliggroupBox->setTitle(QApplication::translate("MainWindow", "Player", nullptr));
        RaceLabel->setText(QApplication::translate("MainWindow", "Race", nullptr));
        SubRaceLabel->setText(QApplication::translate("MainWindow", "Subrace", nullptr));
        ClassesLabel->setText(QApplication::translate("MainWindow", "Classes", nullptr));
        AlignmentLabel->setText(QApplication::translate("MainWindow", "Alignment", nullptr));
        StatsgroupBox->setTitle(QApplication::translate("MainWindow", "Stats", nullptr));
        Stats_res_label->setText(QApplication::translate("MainWindow", "Result stats", nullptr));
        Stats_label->setText(QApplication::translate("MainWindow", "Stats", nullptr));
        Race_mod_label->setText(QApplication::translate("MainWindow", "Race mod", nullptr));
        Dex_label->setText(QApplication::translate("MainWindow", "Dex", nullptr));
        Int_label->setText(QApplication::translate("MainWindow", "Int", nullptr));
        Con_label->setText(QApplication::translate("MainWindow", "Con", nullptr));
        Cha_label->setText(QApplication::translate("MainWindow", "Cha", nullptr));
        Wis_label->setText(QApplication::translate("MainWindow", "Wis", nullptr));
        Str_label->setText(QApplication::translate("MainWindow", "Str", nullptr));
        custom_label_6->setText(QApplication::translate("MainWindow", "+", nullptr));
        custom_label_4->setText(QApplication::translate("MainWindow", "+", nullptr));
        custom_label->setText(QApplication::translate("MainWindow", "+", nullptr));
        custom_label_3->setText(QApplication::translate("MainWindow", "+", nullptr));
        custom_label_2->setText(QApplication::translate("MainWindow", "+", nullptr));
        custom_label_5->setText(QApplication::translate("MainWindow", "+", nullptr));
        race_mod_cha_label->setText(QApplication::translate("MainWindow", "cha_race_mod", nullptr));
        race_mod_con_label->setText(QApplication::translate("MainWindow", "con_race_mod", nullptr));
        race_mod_str_label->setText(QApplication::translate("MainWindow", "str_race_mod", nullptr));
        race_mod_int_label->setText(QApplication::translate("MainWindow", "int_race_mod", nullptr));
        race_mod_wis_label->setText(QApplication::translate("MainWindow", "wis_race_mod", nullptr));
        race_mod_dex_label->setText(QApplication::translate("MainWindow", "dex_race_mod", nullptr));
        custom_label_12->setText(QApplication::translate("MainWindow", "=", nullptr));
        custom_label_11->setText(QApplication::translate("MainWindow", "=", nullptr));
        custom_label_8->setText(QApplication::translate("MainWindow", "=", nullptr));
        custom_label_10->setText(QApplication::translate("MainWindow", "=", nullptr));
        custom_label_7->setText(QApplication::translate("MainWindow", "=", nullptr));
        custom_label_9->setText(QApplication::translate("MainWindow", "=", nullptr));
        cha_stats_label->setText(QApplication::translate("MainWindow", "cha_stats", nullptr));
        str_stats_label->setText(QApplication::translate("MainWindow", "str_stats", nullptr));
        con_stats_label->setText(QApplication::translate("MainWindow", "con_stats", nullptr));
        int_stats_label->setText(QApplication::translate("MainWindow", "int_stats", nullptr));
        wis_stats_label->setText(QApplication::translate("MainWindow", "wis_stats", nullptr));
        dex_stats_label->setText(QApplication::translate("MainWindow", "dex_stats", nullptr));
        biograf_label->setText(QApplication::translate("MainWindow", "Bio:", nullptr));
        pushButton_saveAnket->setText(QApplication::translate("MainWindow", "SaveAnket", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
