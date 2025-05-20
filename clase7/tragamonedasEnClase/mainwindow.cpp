#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->r1 = new Rotor(6);
    this->r2 = new Rotor(6);
    this->r3 = new Rotor(6);
    this->qt1 = new QTimer(this);
    this->qt2 = new QTimer(this);
    this->qt3 = new QTimer(this);
    QObject::connect(qt1, SIGNAL(timeout()),
                     this, SLOT(girarR1()));
    QObject::connect(qt2, SIGNAL(timeout()),
                     this, SLOT(girarR2()));
    QObject::connect(qt3, SIGNAL(timeout()),
                     this, SLOT(girarR3()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int nro = rand() % 6;
    srand(time(NULL));
    int nro2 = rand() % 6;
    srand(time(NULL));
    int nro3 = rand() % 5;
    this->qt1->start(100 * nro);
    this->qt2->start(100 * nro2);
    this->qt3->start(200 * nro3);
}

void MainWindow::girarR1()
{
    this->ui->lcdNumber->display(r1->next());
    this->qt1->setInterval(this->qt1->interval() + 10);
    if (this->qt1->interval()>=500) {
        this->qt1->stop();
    }
}

void MainWindow::girarR2()
{
    this->ui->lcdNumber_2->display(r2->next());
    this->qt2->setInterval(this->qt2->interval() + 10);
    if (this->qt2->interval()>=500) {
        this->qt2->stop();
    }
}

void MainWindow::girarR3()
{
    this->ui->lcdNumber_3->display(r3->next());
    this->qt3->setInterval(this->qt3->interval() + 10);
    if (this->qt3->interval()>=500) {
        this->qt3->stop();
    }
}

