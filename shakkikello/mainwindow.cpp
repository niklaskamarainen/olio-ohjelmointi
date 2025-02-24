#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pQtimer = new QTimer(this);
    connect(pQtimer, &QTimer::timeout, this, &MainWindow::timeout);
    connect(ui->start_button, &QPushButton::clicked, this, &MainWindow::startGame);
    connect(ui->stop_button, &QPushButton::clicked, this, &MainWindow::stopGame);
    connect(ui->switch1, &QPushButton::clicked, this, &MainWindow::switchTurn);
    connect(ui->switch2, &QPushButton::clicked, this, &MainWindow::switchTurn);
    connect(ui->sec120, &QPushButton::clicked, this, &MainWindow::shortGame);
    connect(ui->min5, &QPushButton::clicked, this, &MainWindow::longGame);

    ui->progPlayer1->setValue(0);
    ui->progPlayer2->setValue(0);
    setGameInfoText("Select playtime and press start game!", 14);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeout()
{
    if(currentPlayer == 1 && player1Time > 0){
        player1Time--;
    }
    else if(currentPlayer == 2 && player2Time > 0){
        player2Time--;
    }
    updateProgressBar();
    if(player1Time == 0 || player2Time == 0){
        pQtimer->stop();
        if(player1Time == 0){
            setGameInfoText("Player 2 WON!!", 14);
        }
        else{
            setGameInfoText("Player 1 WON!!", 14);
        }

    }
}

void MainWindow::startGame()
{
    player1Time = gameTime;
    player2Time = gameTime;
    currentPlayer = 1;
    updateProgressBar();
    pQtimer->start(1000);
    setGameInfoText("Game ongoing!!", 14);
}

void MainWindow::stopGame()
{
    pQtimer->stop();
    setGameInfoText("Game stopped!!", 14);
}

void MainWindow::updateProgressBar()
{
    int player1Percent = static_cast<int>((static_cast<double>(player1Time) / gameTime) * 100);
    int player2Percent = static_cast<int>((static_cast<double>(player2Time) / gameTime) * 100);
    ui->progPlayer1->setValue(player1Percent);
    ui->progPlayer2->setValue(player2Percent);
}

void MainWindow::setGameInfoText(QString text, short fontSize)
{
    ui->GameInfoLabel->setText(text);
    QFont font = ui->GameInfoLabel->font();
    font.setPointSize(fontSize);
    ui->GameInfoLabel->setFont(font);
}

void MainWindow::shortGame()
{
    gameTime = 120;
    setGameInfoText("Gametime 120sec", 14);
}

void MainWindow::longGame()
{
    gameTime = 300;
    setGameInfoText("Gametime 5min", 14);
}

void MainWindow::switchTurn()
{
    if(currentPlayer == 1){
        currentPlayer = 2;
    }
    else{
        currentPlayer = 1;
    }
}
