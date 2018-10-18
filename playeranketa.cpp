#include "playeranketa.h"
#include "createavatar.h"
#include "ui_playeranketa.h"

PlayerAnketa::PlayerAnketa(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PlayerAnketa)
{
    ui->setupUi(this);
    setFixedSize(690,650);
    //readSet();
    PopUP_Tips();
    loadDB();
    Dice_role();
    avatar_load_scene = new QGraphicsScene;
    ui->graphicsView_Avatar->setScene(avatar_load_scene);

}
void PlayerAnketa::loadDB()
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

void PlayerAnketa::PopUP_Tips()
{
    ui->Str_label->setToolTip("Strength - measures character's physical strength and endurance");
    ui->Dex_label->setToolTip("Dexterity - contains coordination, agility, reaction speed, reflexes and a sense of balance.");
    ui->Con_label->setToolTip("Constitution - includes stamina, training, health and physical resistance to damage.");
    ui->Int_label->setToolTip("Intelligence - represents the character's memory, prudence, and ability to learn.");
    ui->Wis_label->setToolTip("Wisdom - combines awareness, prudence, cunning, willpower, and intuition.");
    ui->Cha_label->setToolTip("Charisma - measures the character's persuasiveness, attractiveness, and leadership.");


}

void PlayerAnketa::Dice_role()
{
    movie_profit.setFileName(":/BackRes/res/d20profit.gif");
    movie_profit.setScaledSize(QSize(190,140));
    ui->gif_label->setMovie(&movie_profit);
    movie_profit.start();

//    movie_lose.setFileName(":/BackRes/res/d20lose.gif");
//    movie_lose.setScaledSize(QSize(190,140));
//    ui->gif_label_two->setMovie(&movie_lose);
//    movie_lose.start();
}

void PlayerAnketa::on_Str_spinBox_valueChanged(int)
{
    result_stats = race_buff_str + ui->Str_spinBox->value();
    ui->str_stats_label->setText(QString::number(result_stats));
}

void PlayerAnketa::on_Dex_spinBox_valueChanged(int)
{
    result_stats = race_buff_dex + ui->Dex_spinBox->value();
    ui->dex_stats_label->setText(QString::number(result_stats));
}

void PlayerAnketa::on_Con_spinBox_valueChanged(int)
{
    result_stats = race_buff_con + ui->Con_spinBox->value();
    ui->con_stats_label->setText(QString::number(result_stats));
}

void PlayerAnketa::on_Int_spinBox_valueChanged(int)
{
    result_stats = race_buff_int + ui->Int_spinBox->value();
    ui->int_stats_label->setText(QString::number(result_stats));
}

void PlayerAnketa::on_Wis_spinBox_valueChanged(int)
{
    result_stats = race_buff_wis + ui->Wis_spinBox->value();
    ui->wis_stats_label->setText(QString::number(result_stats));
}

void PlayerAnketa::on_Cha_spinBox_valueChanged(int)
{
    result_stats = race_buff_cha + ui->Cha_spinBox->value();
    ui->cha_stats_label->setText(QString::number(result_stats));
}

void PlayerAnketa::on_ExitPushButton_clicked()
{
    this->close();
}

void PlayerAnketa::on_RaceComboBox_currentIndexChanged(int index)
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

        ui->HeightdoubleSpinBox->setMinimum(149);
        ui->HeightdoubleSpinBox->setMaximum(230);
        ui->WeightdoubleSpinBox->setMinimum(50);
        ui->WeightdoubleSpinBox->setMaximum(130);
        ui->AgedoubleSpinBox->setMinimum(15);
        ui->AgedoubleSpinBox->setMaximum(80);


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

        ui->HeightdoubleSpinBox->setMinimum(170);
        ui->HeightdoubleSpinBox->setMaximum(230);
        ui->WeightdoubleSpinBox->setMinimum(70);
        ui->WeightdoubleSpinBox->setMaximum(130);
        ui->AgedoubleSpinBox->setMinimum(15);
        ui->AgedoubleSpinBox->setMaximum(120);

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

        ui->HeightdoubleSpinBox->setMinimum(180);
        ui->HeightdoubleSpinBox->setMaximum(230);
        ui->WeightdoubleSpinBox->setMinimum(50);
        ui->WeightdoubleSpinBox->setMaximum(100);
        ui->AgedoubleSpinBox->setMinimum(200);
        ui->AgedoubleSpinBox->setMaximum(1500);

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

        ui->HeightdoubleSpinBox->setMinimum(120);
        ui->HeightdoubleSpinBox->setMaximum(145);
        ui->WeightdoubleSpinBox->setMinimum(60);
        ui->WeightdoubleSpinBox->setMaximum(110);
        ui->AgedoubleSpinBox->setMinimum(40);
        ui->AgedoubleSpinBox->setMaximum(350);

        break;
    }
    Result_label_update();
}

void PlayerAnketa::on_ClassesComboBox_currentIndexChanged(int index)
{
    ui->Str_spinBox->setValue(rand()%17+1);

    ui->Dex_spinBox->setValue(rand()%17+1);

    ui->Con_spinBox->setValue(rand()%17+1);

    ui->Int_spinBox->setValue(rand()%17+1);

    ui->Wis_spinBox->setValue(rand()%17+1);

    ui->Cha_spinBox->setValue(rand()%17+1);

    switch(index)
    {
    case 0:
         ui->ClassesComboBox->setToolTip("Assassin - ");

        break;
    case 1:
        ui->ClassesComboBox->setToolTip("Barbarian - ");

        break;
    case 2:
        ui->ClassesComboBox->setToolTip("Clerik - ");

        break;
    case 3:
        ui->ClassesComboBox->setToolTip("Knight - ");
        break;
    case 4:
         ui->ClassesComboBox->setToolTip("Rouge - ");

        break;
    case 5:
        ui->ClassesComboBox->setToolTip("Paladin - ");

        break;
    case 6:
        ui->ClassesComboBox->setToolTip("Wizard - ");

        break;
    case 7:
        ui->ClassesComboBox->setToolTip("Druid - ");
        break;
    case 8:
        ui->ClassesComboBox->setToolTip("Thief - ");
        break;
    }
}

void PlayerAnketa::Result_label_update()
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

//void PlayerAnketa::writeSet()
//{
//    My_preset.beginGroup("/Set");
//    My_preset.value("/Count",K);
//    My_preset.endGroup();
//}

//void PlayerAnketa::readSet()
//{
//    My_preset.beginGroup("/Set");
//    K = My_preset.value("/Count",1).toInt();
//    ++K;
//    My_preset.endGroup();
//}

void PlayerAnketa::on_pushButton_saveAnket_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Saving anket", "Finish creating an you hero?\n",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "",
                                                        tr("PNG Files (*.png);;JPG Files (*.jpg)"));
        if (fileName != "")
        {
            QFile file(fileName);
            QImage image(ui->centralWidget->width(),ui->centralWidget->height(), QImage::Format_ARGB32_Premultiplied);
            QPainter painter(&image);
            ui->centralWidget->render(&painter);
            image.save(fileName);
            ++NameNum;
        }
        else {}
    }
}

void PlayerAnketa::on_CreatepushButton_clicked()
{
    CreateAvatar *CrtAvt  = new CreateAvatar();
    CrtAvt->show();
}

void PlayerAnketa::on_LoadpushButton_clicked()
{
    avatar_load_scene->clear();
    QString fileName = QFileDialog::getOpenFileName(this,"Open Image File",QDir::currentPath());

     if(!fileName.isEmpty())
     {
         avatar_load_scene->addPixmap(QPixmap(fileName).scaled(157,257));
         ui->graphicsView_Avatar->setScene(avatar_load_scene);
     }
}

PlayerAnketa::~PlayerAnketa()
{
    //writeSet();
    model->clear();
    delete model;
    db.close();
    delete ui;
}
