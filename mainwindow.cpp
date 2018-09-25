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
    db.setDatabaseName(dbFilename);
    //db.setDatabaseName("E:/Univer/CMVP/labs/DnD_Curse_work_anketa/DnD_db.db");
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
    ui->Str_spinBox->setValue(rand()%17+1);
    str_out_stats=ui->Str_spinBox->value();

    ui->Dex_spinBox->setValue(rand()%17+1);
    dex_out_stats=ui->Dex_spinBox->value();

    ui->Con_spinBox->setValue(rand()%17+1);
    con_out_stats=ui->Con_spinBox->value();

    ui->Int_spinBox->setValue(rand()%17+1);
    int_out_stats=ui->Int_spinBox->value();

    ui->Wis_spinBox->setValue(rand()%17+1);
    wis_out_stats=ui->Wis_spinBox->value();

    ui->Cha_spinBox->setValue(rand()%17+1);
    cha_out_stats=ui->Cha_spinBox->value();
}

void MainWindow::ResultStatsView()
{
    result_stats = race_buff_str + str_out_stats;
    ui->str_stats_label->setText(QString::number(result_stats));
    result_stats = race_buff_dex + dex_out_stats;
    ui->dex_stats_label->setText(QString::number(result_stats));
    result_stats = race_buff_con + con_out_stats;
    ui->con_stats_label->setText(QString::number(result_stats));
    result_stats = race_buff_int + int_out_stats;
    ui->int_stats_label->setText(QString::number(result_stats));
    result_stats = race_buff_wis + wis_out_stats;
    ui->wis_stats_label->setText(QString::number(result_stats));
    result_stats = race_buff_cha + cha_out_stats;
    ui->cha_stats_label->setText(QString::number(result_stats));

}

void MainWindow::on_ExitPushButton_clicked()
{
    this->close();
}

void MainWindow::on_RaceComboBox_currentIndexChanged(int index)
{
    race_buff_str=0;
    race_buff_dex=0;
    race_buff_con=0;
    race_buff_int=0;
    race_buff_wis=0;
    race_buff_cha=0;

    switch(index)
    {
    case 0:
        race_buff_str=3;
        race_buff_dex=3;
        race_buff_con=0;
        race_buff_int=0;
        race_buff_wis=0;
        race_buff_cha=3;

        ui->race_mod_str_label->setText(QString::number(race_buff_str));
        ui->race_mod_dex_label->setText(QString::number(race_buff_dex));
        ui->race_mod_con_label->setText(QString::number(race_buff_con));
        ui->race_mod_int_label->setText(QString::number(race_buff_int));
        ui->race_mod_wis_label->setText(QString::number(race_buff_wis));
        ui->race_mod_cha_label->setText(QString::number(race_buff_cha));
        ResultStatsView();

        break;
    case 1:
        race_buff_str=5;
        race_buff_dex=0;
        race_buff_con=5;
        race_buff_int=0;
        race_buff_wis=0;
        race_buff_cha=3;

        ui->race_mod_str_label->setText(QString::number(race_buff_str));
        ui->race_mod_dex_label->setText(QString::number(race_buff_dex));
        ui->race_mod_con_label->setText(QString::number(race_buff_con));
        ui->race_mod_int_label->setText(QString::number(race_buff_int));
        ui->race_mod_wis_label->setText(QString::number(race_buff_wis));
        ui->race_mod_cha_label->setText(QString::number(race_buff_cha));
        ResultStatsView();

        break;
    case 2:
        race_buff_str=0;
        race_buff_dex=3;
        race_buff_con=0;
        race_buff_int=3;
        race_buff_wis=3;
        race_buff_cha=0;

        ui->race_mod_str_label->setText(QString::number(race_buff_str));
        ui->race_mod_dex_label->setText(QString::number(race_buff_dex));
        ui->race_mod_con_label->setText(QString::number(race_buff_con));
        ui->race_mod_int_label->setText(QString::number(race_buff_int));
        ui->race_mod_wis_label->setText(QString::number(race_buff_wis));
        ui->race_mod_cha_label->setText(QString::number(race_buff_cha));
        ResultStatsView();

        break;
    case 3:
        race_buff_str=4;
        race_buff_dex=0;
        race_buff_con=4;
        race_buff_int=0;
        race_buff_wis=4;
        race_buff_cha=4;

        ui->race_mod_str_label->setText(QString::number(race_buff_str));
        ui->race_mod_dex_label->setText(QString::number(race_buff_dex));
        ui->race_mod_con_label->setText(QString::number(race_buff_con));
        ui->race_mod_int_label->setText(QString::number(race_buff_int));
        ui->race_mod_wis_label->setText(QString::number(race_buff_wis));
        ui->race_mod_cha_label->setText(QString::number(race_buff_cha));
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
