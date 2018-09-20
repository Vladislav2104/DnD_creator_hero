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

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase db;
    QSqlTableModel *model;
    explicit MainWindow(QWidget *parent = 0);

//    QString login;
//    QString pass;
    int str_out_stats;
    int dex_out_stats;
    int con_out_stats;
    int int_out_stats;
    int wis_out_stats;
    int cha_out_stats;
    int race_buff;
    int result_stats;

    ~MainWindow();

private slots:
    void on_ExitPushButton_clicked();
    void loadDB();
    void CreateStartStats();
    void ResultStatsView();
    void on_RaceComboBox_currentIndexChanged(int index);
    void on_ClassesComboBox_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
