#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myrobot.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void setRobot(MyRobot* robot);
    ~MainWindow();

private slots:
    void on_TopArrow_clicked();

    void on_RightArrow_clicked();

    void on_BotArrow_clicked();

    void on_LeftArrow_clicked();

    void on_power_off_clicked();

    void on_power_on_clicked();

    void on_progressBar_valueChanged(int value);

    void on_Stop_clicked();

    void on_avancer_released();

    void updateLabelSpeed(Data* data);

    void updateLabelBatterie(Data* data);

private:
    Ui::MainWindow *ui;
    MyRobot* robot;
};

#endif // MAINWINDOW_H
