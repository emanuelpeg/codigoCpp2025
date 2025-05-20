#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->tiempo = new Tiempo();
    this->timer = new QTimer(this);
    QObject::connect(this->timer, SIGNAL(timeout()),
                     this, SLOT(onTimer()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::refresh()
{
    this->ui->hora->display(this->tiempo->getHora());
    this->ui->minuto->display(this->tiempo->getMin());
    this->ui->seg->display(this->tiempo->getSeg());
    this->ui->dsec->display(this->tiempo->getDseg());
    this->ui->csec->display(this->tiempo->getCseg());
    this->ui->msec->display(this->tiempo->getMseg());
}

void MainWindow::onTimer()
{
    this->tiempo->incrementar();
    refresh();
}


void MainWindow::on_pushButton_clicked()
{
    if (!this->timer->isActive()) {
        this->timer->start(1);
        this->ui->pushButton->setText("pause");
    } else {
        this->timer->stop();
        this->ui->pushButton->setText("play");
    }

}


void MainWindow::on_pushButton_2_clicked()
{
    this->tiempo->reiniciar();
    refresh();
}

