#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    robot = new MyRobot(this);
    connect(robot,SIGNAL(updateUI(data)),this,SLOT(updateLablelSpeed(data)));
    connect(robot,SIGNAL(updateUI(data)),this,SLOT(updateLablelBatterie(data)));
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

void MainWindow::updateLabelSpeed(Data* data)
{
    qDebug() << "speed update";
    QString str;
    str.setNum(data->getSpeed());
    ui->Speed->setText(str);
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

void MainWindow::updateLabelBatterie(Data* data)
{
    QString str;
    str.setNum(data->getBatLvl());
    ui->Batterie->setText(str);
}


