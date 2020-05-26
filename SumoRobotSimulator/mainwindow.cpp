#include "mainwindow.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->timeLeft->display(timeLeft);

    timer = new QTimer(this);
    timer->setInterval(1000);

    connect(timer,SIGNAL(timeout()),this,SLOT(updateTimeLeft()));

    setFixedSize(1000,700);

    openGL = new GLWidget(this);
    openGL->setGeometry(20,20,650,650);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::getSimulationStateName()
{
    switch(simulationState){
        case 0:
        return "READY";
        break;
        case 1:
        return "START";
        break;
        case 2:
        return "STOP";
        break;
        default:
        return "ERROR";
        break;
    }
}

void MainWindow::updateSimulationStateBox()
{
    ui->lineEdit->setText(getSimulationStateName());
}

void MainWindow::updateTimeLeft()
{
    timeLeft--;
    ui->timeLeft->display(timeLeft);
    if(timeLeft == 0)
    {
        timer->stop();
        simulationState = STOP;
        updateSimulationStateBox();
    }
}

void MainWindow::on_buttonStart_clicked()
{
    simulationState = START;
    updateSimulationStateBox();
    ui->timeInc->setDisabled(true);
    ui->timeDec->setDisabled(true);
    timer->start();

}

void MainWindow::on_buttonStop_clicked()
{
    simulationState = STOP;
    updateSimulationStateBox();
    ui->timeInc->setDisabled(false);
    ui->timeDec->setDisabled(false);
    timer->stop();
}

void MainWindow::on_timeInc_clicked()
{
    timeLeft++;
    ui->timeLeft->display(timeLeft);
}

void MainWindow::on_timeDec_clicked()
{
    timeLeft--;
    ui->timeLeft->display(timeLeft);
}


