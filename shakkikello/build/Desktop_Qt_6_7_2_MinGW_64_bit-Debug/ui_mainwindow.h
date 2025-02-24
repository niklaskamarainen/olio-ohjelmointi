/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progPlayer1;
    QProgressBar *progPlayer2;
    QPushButton *switch1;
    QPushButton *switch2;
    QPushButton *sec120;
    QPushButton *min5;
    QPushButton *start_button;
    QPushButton *stop_button;
    QLabel *GameInfoLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        progPlayer1 = new QProgressBar(centralwidget);
        progPlayer1->setObjectName("progPlayer1");
        progPlayer1->setGeometry(QRect(80, 40, 118, 23));
        progPlayer1->setValue(24);
        progPlayer2 = new QProgressBar(centralwidget);
        progPlayer2->setObjectName("progPlayer2");
        progPlayer2->setGeometry(QRect(580, 40, 118, 23));
        progPlayer2->setValue(24);
        switch1 = new QPushButton(centralwidget);
        switch1->setObjectName("switch1");
        switch1->setGeometry(QRect(70, 70, 141, 41));
        switch2 = new QPushButton(centralwidget);
        switch2->setObjectName("switch2");
        switch2->setGeometry(QRect(570, 70, 141, 41));
        sec120 = new QPushButton(centralwidget);
        sec120->setObjectName("sec120");
        sec120->setGeometry(QRect(250, 250, 80, 24));
        min5 = new QPushButton(centralwidget);
        min5->setObjectName("min5");
        min5->setGeometry(QRect(440, 250, 80, 24));
        start_button = new QPushButton(centralwidget);
        start_button->setObjectName("start_button");
        start_button->setGeometry(QRect(160, 410, 131, 51));
        stop_button = new QPushButton(centralwidget);
        stop_button->setObjectName("stop_button");
        stop_button->setGeometry(QRect(480, 410, 131, 51));
        GameInfoLabel = new QLabel(centralwidget);
        GameInfoLabel->setObjectName("GameInfoLabel");
        GameInfoLabel->setGeometry(QRect(200, 190, 371, 41));
        GameInfoLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        GameInfoLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        switch1->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        switch2->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        sec120->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        min5->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        start_button->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        stop_button->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        GameInfoLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
