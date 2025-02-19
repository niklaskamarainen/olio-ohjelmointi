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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *N5;
    QPushButton *N6;
    QPushButton *N1;
    QPushButton *plus;
    QPushButton *kerto;
    QPushButton *jako;
    QLineEdit *num1;
    QLabel *Number1;
    QPushButton *N2;
    QPushButton *N4;
    QLineEdit *num2;
    QPushButton *N3;
    QPushButton *N0;
    QPushButton *N7;
    QLabel *Number2;
    QPushButton *ClearNappi;
    QLineEdit *result;
    QPushButton *N8;
    QLabel *Result;
    QPushButton *EnterNappi;
    QPushButton *N9;
    QPushButton *miinus;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(240, 230, 121, 61));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(410, 230, 121, 61));
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(70, 130, 121, 61));
        plus = new QPushButton(centralwidget);
        plus->setObjectName("plus");
        plus->setGeometry(QRect(580, 130, 121, 61));
        kerto = new QPushButton(centralwidget);
        kerto->setObjectName("kerto");
        kerto->setGeometry(QRect(580, 340, 121, 61));
        jako = new QPushButton(centralwidget);
        jako->setObjectName("jako");
        jako->setGeometry(QRect(580, 450, 121, 61));
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(110, 70, 111, 21));
        num1->setFrame(true);
        num1->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        Number1 = new QLabel(centralwidget);
        Number1->setObjectName("Number1");
        Number1->setGeometry(QRect(140, 40, 81, 16));
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(240, 130, 121, 61));
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(70, 230, 121, 61));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(310, 70, 111, 21));
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(410, 130, 121, 61));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(70, 450, 121, 61));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(70, 340, 121, 61));
        Number2 = new QLabel(centralwidget);
        Number2->setObjectName("Number2");
        Number2->setGeometry(QRect(338, 40, 71, 20));
        ClearNappi = new QPushButton(centralwidget);
        ClearNappi->setObjectName("ClearNappi");
        ClearNappi->setGeometry(QRect(240, 450, 121, 61));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(490, 70, 111, 21));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(240, 340, 121, 61));
        Result = new QLabel(centralwidget);
        Result->setObjectName("Result");
        Result->setGeometry(QRect(530, 40, 49, 16));
        EnterNappi = new QPushButton(centralwidget);
        EnterNappi->setObjectName("EnterNappi");
        EnterNappi->setGeometry(QRect(410, 450, 121, 61));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(410, 340, 121, 61));
        miinus = new QPushButton(centralwidget);
        miinus->setObjectName("miinus");
        miinus->setGeometry(QRect(580, 230, 121, 61));
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
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        kerto->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        jako->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        num1->setInputMask(QString());
        num1->setText(QString());
        Number1->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Number2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        ClearNappi->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Result->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        EnterNappi->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        miinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
