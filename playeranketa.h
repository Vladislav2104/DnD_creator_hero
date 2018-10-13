#ifndef PLAYERANKETA_H
#define PLAYERANKETA_H

#include<QMainWindow>
#include<QApplication>
#include<QSqlDatabase>
#include<QSqlTableModel>
#include<QGraphicsScene>
#include<QDesktopWidget>
#include<QsqlQuery>
#include<QToolTip>
#include<QComboBox>
#include<QTextEdit>
#include<QSpinBox>
#include<QPainter>
#include<QPixmap>
#include<QWidget>
#include<QDebug>
#include<QLabel>
#include<QImage>
#include<QFile>

namespace Ui {
class PlayerAnketa;
}

class PlayerAnketa : public QMainWindow
{
    Q_OBJECT

public:
    const QString dbFilename = "DnD_db.db";
    QSqlDatabase db;
    QSqlTableModel *model;
    QGraphicsScene *avatar_load_scene;
    QGraphicsScene *border_frame_scene;
    explicit PlayerAnketa(QWidget *parent = 0);

    int race_buff_str;
    int race_buff_dex;
    int race_buff_con;
    int race_buff_int;
    int race_buff_wis;
    int race_buff_cha;
    int result_stats;
    int NameNum = 0;

    ~PlayerAnketa();

private slots:

    void loadDB();

    void PopUP_Tips();

    void on_RaceComboBox_currentIndexChanged(int index);

    void on_ClassesComboBox_currentIndexChanged(int index);

    void Result_label_update();

    void on_Str_spinBox_valueChanged(int arg1);

    void on_Cha_spinBox_valueChanged(int arg1);

    void on_Dex_spinBox_valueChanged(int arg1);

    void on_Con_spinBox_valueChanged(int arg1);

    void on_Int_spinBox_valueChanged(int arg1);

    void on_Wis_spinBox_valueChanged(int arg1);

    void on_pushButton_saveAnket_clicked();

    void on_ExitPushButton_clicked();

    void on_CreatepushButton_clicked();

    void on_LoadpushButton_clicked();

private:
    Ui::PlayerAnketa *ui;
};

#endif // PLAYERANKETA_H
