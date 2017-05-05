/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(602, 463);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(52, 73, 94);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #141e30, stop:1 #243b55);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 230, 251, 91));
        pushButton->setStyleSheet(QLatin1String("QPushButton:disabled {\n"
"border: 2px solid ;\n"
"font-size:;\n"
"background-color: #ebebeb;\n"
"}\n"
"QPushButton:pressed { background-color: #ebebeb;}\n"
"QPushButton:hover{ \n"
"border: 5px solid #ebebeb;\n"
"font: bold;\n"
"}\n"
"QPushButton:enabled{\n"
"\n"
"color: #ebebeb;\n"
"font-size: 15pt;\n"
"}"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 230, 251, 91));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton:disabled {\n"
"border: 2px solid ;\n"
"font-size:;\n"
"background-color: #ebebeb;\n"
"}\n"
"QPushButton:pressed { background-color: #ebebeb;}\n"
"QPushButton:hover{ \n"
"border: 5px solid #ebebeb;\n"
"font: bold;\n"
"}\n"
"QPushButton:enabled{\n"
"\n"
"color: #ebebeb;\n"
"font-size: 15pt;\n"
"}"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 360, 191, 51));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"font:  italic bold 20pt \"Noto Sans\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #e52d27, stop:1 #b31217);\n"
"border-radius: 15px\n"
"}\n"
"QPushButton:enabled{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #e52d27, stop:1 #b31217);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed { background-color:#2ecc71\n"
"}\n"
"QPushButton:disabled{\n"
"color: rgb(235, 235, 235);\n"
"} \n"
"QPushButton:hover{ background-color:#2ecc71;\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:focus{ background-color:#2ecc71;\n"
"color: rgb(255, 255, 255);\n"
"}"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 130, 511, 91));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton:disabled {\n"
"border: 2px solid ;\n"
"font-size:;\n"
"background-color: #ebebeb;\n"
"}\n"
"QPushButton:pressed { background-color: #ebebeb;}\n"
"QPushButton:hover{ \n"
"border: 5px solid #ebebeb;\n"
"font: bold;\n"
"}\n"
"QPushButton:enabled{\n"
"\n"
"color: #ebebeb;\n"
"font-size: 15pt;\n"
"}"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 591, 111));
        label->setStyleSheet(QLatin1String("QLabel {  \n"
"	font: 75 50pt \"Noto Sans\";\n"
"	color : white;\n"
"\n"
" }"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 420, 201, 20));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 oblique 9pt \"DejaVu Sans\";"));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "MATRIX A", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "MATRIX B", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "CALCULATE", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "ENTER 'N'", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "AX=B SOLVER", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Made by:  Karanraj Singh Saini", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
