#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int x =0, y = 0;
    for (int i = 0; i < 150; i++) {
        QLabel* label = new QLabel();
        //label->setScaledContents(true);
        //label->setFixedSize(45,45);
        label->setText(QString::number(i));
        label->setStyleSheet("border: 5px solid black;");
        this->ui->gridLayout->addWidget(label,x,y);
        if (x%2 == 0) y++;
        else y--;
        if (y > 20) {
            x++;
            y = 20;
        }
        if (y < 0) {
            x++;
            y = 0;
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

