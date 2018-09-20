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
    ~MainWindow();

private slots:
    void on_ExitPushButton_clicked();
    void loadDB();
    void on_RaceComboBox_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
