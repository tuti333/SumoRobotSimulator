#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "glwidget.h"

enum State  {READY, START, STOP};


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    GLWidget *openGL;
    State simulationState = READY;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString getSimulationStateName();
    void updateSimulationStateBox();

public slots:
    void updateTimeLeft();

private slots:
    void on_buttonStart_clicked();

    void on_buttonStop_clicked();

    void on_timeInc_clicked();

    void on_timeDec_clicked();


private:
    Ui::MainWindow *ui;
    QTimer *timer;

    int timeLeft = 90;


};
#endif // MAINWINDOW_H
