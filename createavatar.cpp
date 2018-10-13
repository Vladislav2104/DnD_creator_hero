#include "createavatar.h"
#include "ui_createavatar.h"

CreateAvatar::CreateAvatar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateAvatar)
{
    ui->setupUi(this);
    setFixedSize(411,370);
    QStringList list=(QStringList()<<"Male"<<"Female");
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
    QImage image(face_create_scene->width(), face_create_scene->height(), QImage::Format_ARGB32_Premultiplied);
    QPainter painter(&image);
    face_create_scene->render(&painter);
    image.save(QString(QApplication::applicationDirPath()+"/res/Avatars/%1.png").arg(FaceNum));
    ++FaceNum;
}

CreateAvatar::~CreateAvatar()
{
    delete ui;
}
