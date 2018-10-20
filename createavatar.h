#ifndef CREATEAVATAR_H
#define CREATEAVATAR_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <QSlider>
#include <QGraphicsScene>
#include <QImage>
#include <QPainter>
#include <QVector>
#include <QFileDialog>
#include <QtGui>
#include <QtCore>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QSlider>
#include <QSplashScreen>
#include <QPixmap>
#include<QGraphicsPixmapItem>
#include <QMessageBox>
#include <QAbstractSlider>
#include <QApplication>
#include <QVector>


namespace Ui {
class CreateAvatar;
}

class CreateAvatar : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateAvatar(QWidget *parent = 0);
    QGraphicsScene *face_create_scene;
    QGraphicsScene *border_frame_scene;
    QString path;
    QAbstractSlider *HSlid,*HSlid2,*HSlid3,*HSlid4;
    QVector <int> integerVector;
    int FaceNum = 0;
    ~CreateAvatar();

private slots:
    void on_HSlid_valueChanged(int value);

    void on_HSlid1_valueChanged(int value);

    void on_HSlid3_valueChanged(int value);

    void on_HSlid4_valueChanged(int value);

    void update();

    void on_pushButton_Save_clicked();

    void on_pushButton_Cancel_clicked();

private:
    Ui::CreateAvatar *ui;
};

#endif // CREATEAVATAR_H
