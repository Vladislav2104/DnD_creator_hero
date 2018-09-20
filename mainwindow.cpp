#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMainWindow>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadDB();
}


void MainWindow::loadDB()
{
    QStringList list=(QStringList()<<"Male"<<"Female");
    ui->SexComboBox->addItems(list);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("E:/Univer/CMVP/labs/DnD_Curse_work_anketa/DnD_db.db");
    db.open();

    model = new QSqlTableModel(this,db);
    model->setTable("DnD_System");
    model->select();
    ui->RaceComboBox->setModel(model);
    ui->RaceComboBox->setModelColumn(0);
    ui->ClassesComboBox->setModel(model);
    ui->ClassesComboBox->setModelColumn(1);
    ui->AlignmentComboBox->setModel(model);
    ui->AlignmentComboBox->setModelColumn(2);
}

void MainWindow::CreateStartStats()
{
    ui->Str_spinBox->setValue(rand()%18);
        str_out_stats=ui->Str_spinBox->value();

    ui->Dex_spinBox->setValue(rand()%18);
        dex_out_stats=ui->Dex_spinBox->value();

    ui->Con_spinBox->setValue(rand()%18);
        con_out_stats=ui->Con_spinBox->value();

    ui->Int_spinBox->setValue(rand()%18);
        int_out_stats=ui->Int_spinBox->value();

    ui->Wis_spinBox->setValue(rand()%18);
        wis_out_stats=ui->Wis_spinBox->value();

    ui->Cha_spinBox->setValue(rand()%18);
    cha_out_stats=ui->Cha_spinBox->value();
}

void MainWindow::ResultStatsView()
{
//    login = ui->lineEdit_login->text();
//    pass = ui->lineEdit_pass->text();

//    if (login == "admin" && pass == "qwerty")


    result_stats = race_buff + str_out_stats;
    ui->str_stats_label->setText(QString::number(result_stats));

    result_stats = race_buff + dex_out_stats;
    ui->dex_stats_label->setText(QString::number(result_stats));

    result_stats = race_buff + con_out_stats;
    ui->con_stats_label->setText(QString::number(result_stats));

    result_stats = race_buff + int_out_stats;
    ui->int_stats_label->setText(QString::number(result_stats));

    result_stats = race_buff + wis_out_stats;
    ui->wis_stats_label->setText(QString::number(result_stats));

    result_stats = race_buff + cha_out_stats;
    ui->cha_stats_label->setText(QString::number(result_stats));

}

void MainWindow::on_ExitPushButton_clicked()
{
    this->close();
}

void MainWindow::on_RaceComboBox_currentIndexChanged(int index)
{
    race_buff=0;

    switch(index)
    {
    case 0:
        race_buff=3;

        ui->race_mod_str_label->setText(QString::number(race_buff));
        ui->race_mod_dex_label->setText(QString::number(race_buff));
        ui->race_mod_cha_label->setText(QString::number(race_buff));
        ui->race_mod_con_label->setText(QString::number(0));
        ui->race_mod_int_label->setText(QString::number(0));
        ui->race_mod_wis_label->setText(QString::number(0));
        ResultStatsView();


        break;
    case 1:
        race_buff=5;

        ui->race_mod_str_label->setText(QString::number(race_buff));
        ui->race_mod_con_label->setText(QString::number(race_buff));
        ui->race_mod_dex_label->setText(QString::number(0));
        ui->race_mod_int_label->setText(QString::number(0));
        ui->race_mod_wis_label->setText(QString::number(0));
        ui->race_mod_cha_label->setText(QString::number(0));
        ResultStatsView();

        break;
    case 2:
        race_buff=3;

        ui->race_mod_int_label->setText(QString::number(race_buff));
        ui->race_mod_dex_label->setText(QString::number(race_buff));
        ui->race_mod_cha_label->setText(QString::number(race_buff));
        ui->race_mod_wis_label->setText(QString::number(0));
        ui->race_mod_con_label->setText(QString::number(0));
        ui->race_mod_str_label->setText(QString::number(0));
        ResultStatsView();

        break;
    case 3:
        race_buff=4;

        ui->race_mod_str_label->setText(QString::number(race_buff));
        ui->race_mod_con_label->setText(QString::number(race_buff));
        ui->race_mod_cha_label->setText(QString::number(race_buff));
        ui->race_mod_int_label->setText(QString::number(0));
        ui->race_mod_wis_label->setText(QString::number(0));
        ui->race_mod_dex_label->setText(QString::number(0));
        ResultStatsView();

        break;
    }
}

void MainWindow::on_ClassesComboBox_currentIndexChanged(int index)
{

    switch(index)
    {
    case 0:

        CreateStartStats();
        ResultStatsView();
        break;

    case 1:
        CreateStartStats();
        ResultStatsView();
        break;

    case 2:
        CreateStartStats();
        ResultStatsView();
        break;

    case 3:
        CreateStartStats();
        ResultStatsView();
        break;
    case 4:

        CreateStartStats();
        ResultStatsView();
        break;

    case 5:
        CreateStartStats();
        ResultStatsView();
        break;

    case 6:
        CreateStartStats();
        ResultStatsView();
        break;

    case 7:
        CreateStartStats();
        ResultStatsView();
        break;
    }

}

MainWindow::~MainWindow()
{
    model->clear();
    delete model;
    db.close();
    delete ui;
}
