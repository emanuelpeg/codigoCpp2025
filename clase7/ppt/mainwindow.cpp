#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->juego = new Juego();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    this->click(0);
}

void MainWindow::click(int nro)
{
    juego->elegir(nro);
    int opIA = juego->generarIA();
    this->ui->label->setText(opIA == 0 ? "Piedra" :
                                         (opIA == 1 ? "Papel" : "Tijera"));
    int resultado = juego->verificar();
    QString msg;
    if (resultado == 0) {
        msg = "Empate!";
    } else if (resultado == 1) {
        msg = "Gano!";
    } else {
        msg = "Perdiste!! :P ";
    }
    QMessageBox::information(this, "ppt", msg);
}


void MainWindow::on_pushButton_2_clicked()
{
    this->click(1);
}


void MainWindow::on_pushButton_3_clicked()
{
    this->click(2);
}

