#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMainWindow>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(670,640);
    loadDB();
}


void MainWindow::loadDB()
{
    QStringList list=(QStringList()<<"Male"<<"Female");
    ui->SexComboBox->addItems(list);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbFilename);
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

void MainWindow::on_Str_spinBox_valueChanged(int)
{
    result_stats = race_buff_str + ui->Str_spinBox->value();
    ui->str_stats_label->setText(QString::number(result_stats));
}

void MainWindow::on_Dex_spinBox_valueChanged(int)
{
    result_stats = race_buff_dex + ui->Dex_spinBox->value();
    ui->dex_stats_label->setText(QString::number(result_stats));
}

void MainWindow::on_Con_spinBox_valueChanged(int)
{
    result_stats = race_buff_con + ui->Con_spinBox->value();
    ui->con_stats_label->setText(QString::number(result_stats));
}

void MainWindow::on_Int_spinBox_valueChanged(int)
{
    result_stats = race_buff_int + ui->Int_spinBox->value();
    ui->int_stats_label->setText(QString::number(result_stats));
}

void MainWindow::on_Wis_spinBox_valueChanged(int)
{
    result_stats = race_buff_wis + ui->Wis_spinBox->value();
    ui->wis_stats_label->setText(QString::number(result_stats));
}

void MainWindow::on_Cha_spinBox_valueChanged(int)
{
    result_stats = race_buff_cha + ui->Cha_spinBox->value();
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
        break;
    }
    Result_label_update();
}

void MainWindow::on_ClassesComboBox_currentIndexChanged(int)
{
    ui->Str_spinBox->setValue(rand()%17+1);

    ui->Dex_spinBox->setValue(rand()%17+1);

    ui->Con_spinBox->setValue(rand()%17+1);

    ui->Int_spinBox->setValue(rand()%17+1);

    ui->Wis_spinBox->setValue(rand()%17+1);

    ui->Cha_spinBox->setValue(rand()%17+1);
}

void MainWindow::Result_label_update()
{

 result_stats = race_buff_str + ui->Str_spinBox->value();
 ui->str_stats_label->setText(QString::number(result_stats));

 result_stats = race_buff_dex + ui->Dex_spinBox->value();
 ui->dex_stats_label->setText(QString::number(result_stats));

 result_stats = race_buff_con + ui->Con_spinBox->value();
 ui->con_stats_label->setText(QString::number(result_stats));

 result_stats = race_buff_int + ui->Int_spinBox->value();
 ui->int_stats_label->setText(QString::number(result_stats));

 result_stats = race_buff_wis + ui->Wis_spinBox->value();
 ui->wis_stats_label->setText(QString::number(result_stats));

 result_stats = race_buff_cha + ui->Cha_spinBox->value();
 ui->cha_stats_label->setText(QString::number(result_stats));
}

MainWindow::~MainWindow()
{
    model->clear();
    delete model;
    db.close();
    delete ui;
}

void MainWindow::on_pushButton_saveAnket_clicked()
{
     //QPixmap window = QPixmap::grabWindow(QApplication::desktop()->winId());
     QImage image(ui->centralWidget->width(),ui->centralWidget->height(), QImage::Format_ARGB32_Premultiplied);
     QPainter painter(&image);
     ui->centralWidget->render(&painter);
     image.save(QString(QApplication::applicationDirPath()+"/res/anketa1.png"));
}
