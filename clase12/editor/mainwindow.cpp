#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include <string.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionsave_triggered()
{
    std::ofstream of;
    of.open("example.txt");

    of << this->ui->plainTextEdit->toPlainText().toStdString();

    of.close();
}


void MainWindow::on_actionopen_triggered()
{
    std::ifstream ifs;
    ifs.open("example.txt");
    std::string buffer;

    while(std::getline(ifs, buffer)) {
        this->ui->plainTextEdit->appendPlainText(QString::fromStdString(buffer));
    }

    ifs.close();
}

