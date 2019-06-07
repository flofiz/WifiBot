/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QProgressBar *progressBar;
    QPushButton *TopArrow;
    QPushButton *LeftArrow;
    QPushButton *BotArrow;
    QPushButton *RightArrow;
    QPushButton *power_on;
    QPushButton *power_off;
    QFrame *frame;
    QFrame *line;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuHome;
    QMenu *menuVideo;
    QMenu *menuSensors;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 500);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(400, 500));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(0, 260, 91, 23));
        progressBar->setValue(24);
        TopArrow = new QPushButton(centralWidget);
        TopArrow->setObjectName(QString::fromUtf8("TopArrow"));
        TopArrow->setGeometry(QRect(40, 345, 30, 35));
        TopArrow->setMaximumSize(QSize(30, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/Icons/FLH.ico"), QSize(), QIcon::Normal, QIcon::Off);
        TopArrow->setIcon(icon);
        TopArrow->setIconSize(QSize(30, 50));
        LeftArrow = new QPushButton(centralWidget);
        LeftArrow->setObjectName(QString::fromUtf8("LeftArrow"));
        LeftArrow->setGeometry(QRect(6, 380, 35, 30));
        LeftArrow->setMaximumSize(QSize(35, 30));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/Icons/FG.ico"), QSize(), QIcon::Normal, QIcon::Off);
        LeftArrow->setIcon(icon1);
        LeftArrow->setIconSize(QSize(50, 30));
        BotArrow = new QPushButton(centralWidget);
        BotArrow->setObjectName(QString::fromUtf8("BotArrow"));
        BotArrow->setGeometry(QRect(40, 410, 30, 35));
        BotArrow->setMaximumSize(QSize(30, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/Icons/FB.ico"), QSize(), QIcon::Normal, QIcon::Off);
        BotArrow->setIcon(icon2);
        BotArrow->setIconSize(QSize(30, 50));
        RightArrow = new QPushButton(centralWidget);
        RightArrow->setObjectName(QString::fromUtf8("RightArrow"));
        RightArrow->setGeometry(QRect(70, 380, 35, 30));
        RightArrow->setMaximumSize(QSize(40, 30));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/Icons/FD.ico"), QSize(), QIcon::Normal, QIcon::Off);
        RightArrow->setIcon(icon3);
        RightArrow->setIconSize(QSize(50, 30));
        RightArrow->setAutoDefault(false);
        RightArrow->setFlat(false);
        power_on = new QPushButton(centralWidget);
        power_on->setObjectName(QString::fromUtf8("power_on"));
        power_on->setGeometry(QRect(340, 360, 30, 30));
        power_on->setCursor(QCursor(Qt::WhatsThisCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/Icons/co.ico"), QSize(), QIcon::Normal, QIcon::Off);
        power_on->setIcon(icon4);
        power_on->setIconSize(QSize(30, 30));
        power_on->setFlat(true);
        power_off = new QPushButton(centralWidget);
        power_off->setObjectName(QString::fromUtf8("power_off"));
        power_off->setEnabled(true);
        power_off->setGeometry(QRect(300, 400, 30, 30));
        power_off->setCursor(QCursor(Qt::WhatsThisCursor));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/Icons/deco.ico"), QSize(), QIcon::Normal, QIcon::Off);
        power_off->setIcon(icon5);
        power_off->setIconSize(QSize(30, 30));
        power_off->setFlat(true);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(100, 10, 201, 271));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 280, 871, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 290, 141, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 17));
        menuHome = new QMenu(menuBar);
        menuHome->setObjectName(QString::fromUtf8("menuHome"));
        menuVideo = new QMenu(menuBar);
        menuVideo->setObjectName(QString::fromUtf8("menuVideo"));
        menuSensors = new QMenu(menuBar);
        menuSensors->setObjectName(QString::fromUtf8("menuSensors"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuHome->menuAction());
        menuBar->addAction(menuVideo->menuAction());
        menuBar->addAction(menuSensors->menuAction());

        retranslateUi(MainWindow);

        RightArrow->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Interface_Robot", nullptr));
        TopArrow->setText(QString());
        LeftArrow->setText(QString());
        BotArrow->setText(QString());
        RightArrow->setText(QString());
        power_on->setText(QString());
        power_off->setText(QString());
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#5a5a5a;\">Nintendo</span><span style=\" font-size:11pt;\"> </span><span style=\" font-size:11pt; font-weight:600; font-style:italic; color:#0000ff;\">G</span><span style=\" font-size:11pt; font-weight:600; font-style:italic; color:#55aa00;\">A</span><span style=\" font-size:11pt; font-weight:600; font-style:italic; color:#ff007f;\">M</span><span style=\" font-size:11pt; font-weight:600; font-style:italic; color:#e31102;\">E</span><span style=\" font-size:11pt; font-weight:600; font-style:italic; color:#ff1202;\">B</span"
                        "><span style=\" font-size:11pt; font-weight:600; font-style:italic; color:#b8b842;\">O</span><span style=\" font-size:11pt; font-weight:600; font-style:italic; color:#aa00ff;\">T</span><span style=\" font-size:20pt; color:#aa00ff;\"> </span><span style=\" font-size:7pt; color:#5a5a5a;\">TM</span></p></body></html>", nullptr));
        menuHome->setTitle(QApplication::translate("MainWindow", "Home", nullptr));
        menuVideo->setTitle(QApplication::translate("MainWindow", "Video", nullptr));
        menuSensors->setTitle(QApplication::translate("MainWindow", "Sensors", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
