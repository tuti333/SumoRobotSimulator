/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
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
    QLabel *label;
    QLineEdit *lineEdit;
    QGroupBox *groupBox;
    QPushButton *buttonStart;
    QLCDNumber *timeLeft;
    QPushButton *timeInc;
    QPushButton *timeDec;
    QPushButton *buttonStop;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 1000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(770, 30, 42, 13));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(820, 30, 133, 20));
        lineEdit->setCursor(QCursor(Qt::BlankCursor));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(770, 150, 181, 161));
        buttonStart = new QPushButton(groupBox);
        buttonStart->setObjectName(QString::fromUtf8("buttonStart"));
        buttonStart->setGeometry(QRect(90, 120, 75, 23));
        timeLeft = new QLCDNumber(groupBox);
        timeLeft->setObjectName(QString::fromUtf8("timeLeft"));
        timeLeft->setGeometry(QRect(10, 30, 111, 81));
        QFont font;
        font.setPointSize(14);
        timeLeft->setFont(font);
        timeLeft->setLineWidth(3);
        timeLeft->setDigitCount(3);
        timeInc = new QPushButton(groupBox);
        timeInc->setObjectName(QString::fromUtf8("timeInc"));
        timeInc->setGeometry(QRect(130, 40, 31, 23));
        timeDec = new QPushButton(groupBox);
        timeDec->setObjectName(QString::fromUtf8("timeDec"));
        timeDec->setGeometry(QRect(130, 70, 31, 23));
        buttonStop = new QPushButton(groupBox);
        buttonStop->setObjectName(QString::fromUtf8("buttonStop"));
        buttonStop->setGeometry(QRect(10, 120, 75, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "STATUS:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        buttonStart->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        timeInc->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        timeDec->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        buttonStop->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
