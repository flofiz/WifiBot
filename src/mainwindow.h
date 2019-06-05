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
    ~MainWindow();
    void setRobot(MyRobot* robot);

private slots:
    void on_avancer_pressed();

    void on_connecter_clicked();

    void on_disconnect_clicked();

    void on_Stop_clicked();

    void on_avancer_released();

    void updateLabelSpeed(Data* data);

    void updateLabelBatterie(Data* data);

private:
    Ui::MainWindow *ui;
    MyRobot* robot;
};

#endif // MAINWINDOW_H
