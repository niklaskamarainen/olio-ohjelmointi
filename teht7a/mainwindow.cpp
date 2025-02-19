#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , counter(0)
{
    ui->setupUi(this);

    ui->Laatikko->setText(QString::number(counter));

    connect(ui->CountNappi, &QPushButton::clicked, this, &MainWindow::handleCountClick);
    connect(ui->ResetNappi, &QPushButton::clicked, this, &MainWindow::handleResetClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleResetClick()
{
    counter = 0;
    qDebug()<<"Click vastaanotettu";
    ui->Laatikko->setText(QString::number(counter));

}

void MainWindow::handleCountClick()
{
    counter++;
    qDebug()<<"Click vastaanotettu";
    ui->Laatikko->setText(QString::number(counter));

}
