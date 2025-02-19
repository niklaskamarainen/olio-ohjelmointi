#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , state(1)//aloitetaan number1 syötöllä
{
    ui->setupUi(this);

    //Numeropainikkeet
    QList<QPushButton*> numButtons = {ui->N0, ui->N1, ui->N2, ui->N3, ui->N4,
                                       ui->N5, ui->N6, ui->N7, ui->N8, ui->N9};
    for(QPushButton* button : numButtons) {
        connect(button, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    }

    //Operaatio painikkeet
    connect(ui->plus, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->miinus, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->kerto, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->jako, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);

    // Enter ja clear -painikkeet
    connect(ui->EnterNappi, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
    connect(ui->ClearNappi, &QPushButton::clicked, this, &MainWindow::resetLineEdits);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());

    if(state == 1){
        number1 += button->text();
        ui->num1->setText(number1);
    }
    else if(state == 2){
        number2 += button->text();
        ui->num2->setText(number2);
    }
    qDebug() << "Painettu: " << button->text();
}

void MainWindow::clearAndEnterClickHandler()
{
    float num1 = number1.toFloat();
    float num2 = number2.toFloat();

    switch (operand) {
    case 0:
        result = num1 + num2;
        break;
    case 1:
        result = num1 - num2;
        break;
    case 2:
        result = num1 * num2;
        break;
    case 3:
        if(num2 != 0){
            result = num1 / num2;
        }
        else{
            ui->result->setText("Error!");
            return;
        }
        break;
    }
    ui->result->setText(QString::number(result));

    qDebug() << "Laskettu: " << num1 << " " << operand << " " << num2 << " = " << result;
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());

    if(button->text() == "+"){
        operand = 0;
    }
    else if(button->text() == "-"){
        operand = 1;
    }
    else if(button->text() == "*"){
        operand = 2;
    }
    else if(button->text() == "/"){
        operand = 3;
    }

    state = 2;//vaihdetaan Number2

}

void MainWindow::resetLineEdits()
{
    number1 = "";
    number2 = "";
    result = 0.0;
    operand = -1;
    state = 1;

    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}


