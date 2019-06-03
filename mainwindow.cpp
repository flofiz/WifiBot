#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    robot = new MyRobot();
    //connect(robot,SIGNAL(updateUI()),this->ui,SLOT(updateLablel()));
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

void MainWindow::updateLabel(QString text){
    ui->Speed->setText(text);
}

void MainWindow::on_avancer_pressed()
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

void MainWindow::on_Stop_clicked()
{
    robot->stop();
}

void MainWindow::on_avancer_released()
{
    robot->stop();
}
