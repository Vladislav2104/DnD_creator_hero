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

void MainWindow::on_ExitPushButton_clicked()
{
    this->close();
}

void MainWindow::on_RaceComboBox_currentIndexChanged(int index)
{
    int race_buff=0;

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
        break;
    case 1:
        race_buff=5;
        ui->race_mod_str_label->setText(QString::number(race_buff));
        ui->race_mod_con_label->setText(QString::number(race_buff));
        ui->race_mod_dex_label->setText(QString::number(0));
        ui->race_mod_int_label->setText(QString::number(0));
        ui->race_mod_wis_label->setText(QString::number(0));
        ui->race_mod_cha_label->setText(QString::number(0));

        break;
    case 2:
        race_buff=3;
        ui->race_mod_int_label->setText(QString::number(race_buff));
        ui->race_mod_dex_label->setText(QString::number(race_buff));
        ui->race_mod_cha_label->setText(QString::number(race_buff));
        ui->race_mod_wis_label->setText(QString::number(0));
        ui->race_mod_con_label->setText(QString::number(0));
        ui->race_mod_str_label->setText(QString::number(0));

        break;
    case 3:
        race_buff=4;
        ui->race_mod_str_label->setText(QString::number(race_buff));
        ui->race_mod_con_label->setText(QString::number(race_buff));
        ui->race_mod_cha_label->setText(QString::number(race_buff));
        ui->race_mod_int_label->setText(QString::number(0));
        ui->race_mod_wis_label->setText(QString::number(0));
        ui->race_mod_dex_label->setText(QString::number(0));
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
