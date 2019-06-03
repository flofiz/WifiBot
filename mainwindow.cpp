#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    robot = new MyRobot();
    ui->setupUi(this);
}

void MainWindow::setRobot(MyRobot* robot)
{
    this->robot = robot;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete robot;
}

void MainWindow::on_avancer_clicked()
{
    robot->avancer();
}

void MainWindow::on_connecter_clicked()
{
    robot->doConnect();
}

void MainWindow::on_disconnect_clicked()
{
    robot->disConnect();
}
