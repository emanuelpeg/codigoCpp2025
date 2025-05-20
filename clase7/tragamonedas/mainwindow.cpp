#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->timer1 = new QTimer(this);
    this->timer2 = new QTimer(this);
    this->timer3 = new QTimer(this);
    QObject::connect(this->timer1, SIGNAL(timeout()),
                     this, SLOT(timeout1()));
    QObject::connect(this->timer2, SIGNAL(timeout()),
                     this, SLOT(timeout2()));
    QObject::connect(this->timer3, SIGNAL(timeout()),
                     this, SLOT(timeout3()));
    this->rotor1 = new Rotor();
    this->rotor2 = new Rotor();
    this->rotor3 = new Rotor();
    for (int i = 0; i < 5; i++) {
        this->rotor1->add(i);
        this->rotor2->add(i);
        this->rotor3->add(i);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    this->timer1->start(rand() % 50 + 204);
    this->timer2->start(rand() % 40 + 350);
    this->timer3->start(rand() % 20 + 400);
}

void MainWindow::timeout1()
{
    this->timer1->setInterval(this->timer1->interval() + 20);
    this->ui->lcdNumber->display(this->rotor1->next());
    this->check();
}

void MainWindow::timeout2()
{
    this->timer2->setInterval(this->timer2->interval() + 20);
    this->ui->lcdNumber_2->display(this->rotor2->next());
    this->check();
}

void MainWindow::timeout3()
{
    this->timer3->setInterval(this->timer3->interval() + 20);
    this->ui->lcdNumber_3->display(this->rotor3->next());
    this->check();
}

void MainWindow::check()
{
    if (this->timer1->interval() >= 500) {
        this->timer1->stop();
    }
    if (this->timer2->interval() >= 500) {
        this->timer2->stop();
    }
    if (this->timer3->interval() >= 500) {
        this->timer3->stop();
    }
    if (!this->timer1->isActive()
            && !this->timer2->isActive()
            && !this->timer3->isActive()) {
        if ((this->ui->lcdNumber->value() ==
                this->ui->lcdNumber_2->value())
                && (this->ui->lcdNumber->value() ==
                    this->ui->lcdNumber_3->value())) {
            QMessageBox::information(this,"ganaste", "ganaste");
        } else {
            QMessageBox::information(this,"perdiste", "perdiste");
        }
    }

}

