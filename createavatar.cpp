#include "createavatar.h"
#include "ui_createavatar.h"


CreateAvatar::CreateAvatar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateAvatar)
{
    ui->setupUi(this);
    setFixedSize(411,370);
    QStringList list=(QStringList()<<"Heavy"<<"Light");
    ui->SexComboBox->addItems(list);

    integerVector.resize(4);
    face_create_scene = new QGraphicsScene;
    border_frame_scene = new QGraphicsScene;
    ui->graphicsView->setScene(face_create_scene);
    ui->graphicsView_frame->setScene(border_frame_scene);
    border_frame_scene->addPixmap(QString(QApplication::applicationDirPath()+"/res/frame.png"));
}

void CreateAvatar::update()
{
    if (ui->SexComboBox->currentIndex()==0)
    {
        face_create_scene->clear();
        face_create_scene->addPixmap(QString(":/Face_createRes/res/male_base/f_base/%1.png").arg(QString::number(integerVector.at(0))));
        face_create_scene->addPixmap(QString(":/Face_createRes/res/male_base/y_base/%1.png").arg(QString::number(integerVector.at(2))));
        face_create_scene->addPixmap(QString(":/Face_createRes/res/male_base/h_base/%1.png").arg(QString::number(integerVector.at(1))));
        face_create_scene->addPixmap(QString(":/Face_createRes/res/male_base/r_base/%1.png").arg(QString::number(integerVector.at(3))));
        ui->graphicsView->setScene(face_create_scene);
    }
    else
    {
        face_create_scene->clear();
        face_create_scene->addPixmap(QString(":/Face_createRes/res/female_base/f_base/%1.png").arg(QString::number(integerVector.at(0))));
        face_create_scene->addPixmap(QString(":/Face_createRes/res/female_base/y_base/%1.png").arg(QString::number(integerVector.at(2))));
        face_create_scene->addPixmap(QString(":/Face_createRes/res/female_base/h_base/%1.png").arg(QString::number(integerVector.at(1))));
        face_create_scene->addPixmap(QString(":/Face_createRes/res/female_base/r_base/%1.png").arg(QString::number(integerVector.at(3))));
        ui->graphicsView->setScene(face_create_scene);
    }
}

void CreateAvatar::on_HSlid_valueChanged(int value)
{
    integerVector[0] = value;
    update();
}

void CreateAvatar::on_HSlid1_valueChanged(int value)
{
    integerVector[1] = value;
    update();
}

void CreateAvatar::on_HSlid3_valueChanged(int value)
{
    integerVector[2] = value;
    update();
}


void CreateAvatar::on_HSlid4_valueChanged(int value)
{
    integerVector[3] = value;
    update();
}

void CreateAvatar::on_pushButton_Save_clicked()
{
    if (face_create_scene->items().empty()||ui->HSlid->value()==0||ui->HSlid1->value()==0||ui->HSlid3->value()==0||ui->HSlid4->value()==0)
    {
        QMessageBox TrueInputMsgBox;
        TrueInputMsgBox.setWindowTitle("Data entry error");
        TrueInputMsgBox.setStyleSheet("QMessageBox {font: 14pt Bernard MT Condensed; background-color:rgb(255, 115, 0);}");
        TrueInputMsgBox.setText("Customize your avatar or click CANCEL .");
        QPushButton *OKButton = TrueInputMsgBox.addButton(QMessageBox::Ok);
        OKButton->setStyleSheet("QPushButton {font: 14pt Bernard MT Condensed; background-color:rgba(0, 0, 0, 255); color:rgb(255, 115, 0);}");
        TrueInputMsgBox.exec();

    }
    else
    {
        QMessageBox SaveQstnMsgBox;
        SaveQstnMsgBox.setWindowTitle("Saving avatar");
        SaveQstnMsgBox.setText("Finish creating an avatar?\n All created avatars are stored in the folder res/Avatars");
        SaveQstnMsgBox.setStyleSheet("QMessageBox {font: 12pt Bernard MT Condensed; background-color:rgb(255, 115, 0);}");
        QPushButton *YESButton = SaveQstnMsgBox.addButton(QMessageBox::Yes);
        YESButton->setStyleSheet("QPushButton {font: 14pt Bernard MT Condensed; background-color:rgba(0, 0, 0, 255); color:rgb(255, 115, 0);}");
        QPushButton *NOButton = SaveQstnMsgBox.addButton(QMessageBox::No);
        NOButton->setStyleSheet("QPushButton {font: 14pt Bernard MT Condensed; background-color:rgba(0, 0, 0, 255); color:rgb(255, 115, 0);}");
        SaveQstnMsgBox.exec();

        if (SaveQstnMsgBox.clickedButton()==YESButton)
        {
            QImage image(face_create_scene->width(), face_create_scene->height(), QImage::Format_ARGB32_Premultiplied);
            QPainter painter(&image);
            face_create_scene->render(&painter);
            QString saveAvatarName((QApplication::applicationDirPath()+"/res/Avatars/Avatar_%1.png").arg(FaceNum));

            image.save(saveAvatarName);

            ++FaceNum;
           ((PlayerAnketa*)parent())->LoadAvatars(saveAvatarName);
            this->close();
        }
        else
        {
            if (SaveQstnMsgBox.clickedButton()==NOButton)
            {
                SaveQstnMsgBox.close();
            }

        }
    }
}
void CreateAvatar::on_pushButton_Cancel_clicked()
{
    this->close();
}

CreateAvatar::~CreateAvatar()
{
    delete ui;
}


