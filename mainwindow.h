#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlDatabase>
#include<QSqlTableModel>
#include<QsqlQuery>
#include<QApplication>
#include<QLabel>
#include<QComboBox>
#include<QTextEdit>
#include<QSpinBox>
#include<QDebug>
#include<QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    const QString dbFilename = "DnD_db.db";
    QSqlDatabase db;
    QSqlTableModel *model;
    explicit MainWindow(QWidget *parent = 0);

    int race_buff_str;
    int race_buff_dex;
    int race_buff_con;
    int race_buff_int;
    int race_buff_wis;
    int race_buff_cha;
    int result_stats;

    ~MainWindow();

private slots:
    void on_ExitPushButton_clicked();

    void loadDB();

    void on_RaceComboBox_currentIndexChanged(int index);

    void on_ClassesComboBox_currentIndexChanged(int index);

    void Result_label_update();

    void on_Str_spinBox_valueChanged(int arg1);

    void on_Cha_spinBox_valueChanged(int arg1);

    void on_Dex_spinBox_valueChanged(int arg1);

    void on_Con_spinBox_valueChanged(int arg1);

    void on_Int_spinBox_valueChanged(int arg1);

    void on_Wis_spinBox_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
