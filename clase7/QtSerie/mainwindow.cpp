#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->unJuego = new Juego();
    this->refrescar();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if (this->unJuego
            ->estaBien(this->ui->spinBox->value())) {
        QMessageBox::information(this, "Ganaste :D",
                                 "Ganaste!! Tus puntos " +
                                 QString::number(unJuego->getPuntos()));
    } else {
        QMessageBox::information(this, "Perdiste :(",
                                 "Perdiste! Tus puntos " +
                                 QString::number(unJuego->getPuntos()));
    }
    this->refrescar();
}

void MainWindow::refrescar()
{
    this->ui->lcdNumber->display(unJuego->getNro1());
    this->ui->lcdNumber_2->display(unJuego->getNro2());
    this->ui->lcdNumber_3->display(unJuego->getNro4());
    this->ui->spinBox->setValue(0);
}

