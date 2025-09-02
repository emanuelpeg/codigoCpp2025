#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "customtablemodel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->agenda = new Agenda();
    //this->agenda->generarDatosDeEjemplo();
    this->agenda->leer();
    ui->setupUi(this);
    this->refrescar();
}

MainWindow::~MainWindow()
{
    delete agenda;
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    auto nombre = this->ui->
            lineEdit->text()
            .toStdString().c_str();
    Persona p((char *)nombre);

    auto dir = this->ui->
            lineEdit_2->text()
            .toStdString().c_str();

    p.setDir((char*)dir);
    agenda->save(p);
    this->refrescar();
}

void MainWindow::refrescar()
{
    auto personas = agenda->getPersonas();
    this->refrescar(personas);
}

void MainWindow::refrescar(std::vector<Persona> personas)
{
    this->personas = personas;
    this->ui->tableWidget->clear();
    this->ui->tableWidget->setRowCount(personas.size());
    QStringList headers;
    headers << "Nombre" << "Dirrección";
    this->ui->tableWidget->setHorizontalHeaderLabels(headers);

    for (int i = 0; i < personas.size(); i++) {
        QTableWidgetItem * cellNombre=
                new QTableWidgetItem(QString(personas[i].getNombre()));
        this->ui->tableWidget->setItem(i, 0, cellNombre);

        QTableWidgetItem * cellDir=
                new QTableWidgetItem(QString(personas[i].getDir()));
        this->ui->tableWidget->setItem(i, 1, cellDir);
    }

    if (personas.size() > 0) {
        auto contactos = personas[0].getContactos();
        this->ui->tableWidget_2->clear();
        this->ui->tableWidget_2->setRowCount(contactos.size());
        QStringList headers;
        headers << "Tipo" << "Valor";
        this->ui->tableWidget_2->setHorizontalHeaderLabels(headers);
        for(int j= 0; j < contactos.size(); j++) {
            QTableWidgetItem * celltipo=
                    new QTableWidgetItem(QString(contactos[j].getTipo()));
            this->ui->tableWidget_2->setItem(j, 0, celltipo);

            QTableWidgetItem * cellValor=
                    new QTableWidgetItem(QString(contactos[j].getValor()));
            this->ui->tableWidget_2->setItem(j, 1, cellValor);
        }
        this->ui->tableWidget->selectRow(0);
    }

}


void MainWindow::on_pushButton_3_clicked()
{
    this->ui->lineEdit_3->clear();
    this->refrescar();
}


void MainWindow::on_pushButton_2_clicked()
{
    auto nombre = this->ui->
            lineEdit_3->text()
            .toStdString().c_str();
    auto personas = agenda->filtrar((char*)nombre);
    this->refrescar(personas);
}


void MainWindow::on_tableWidget_itemSelectionChanged()
{


    }



void MainWindow::on_tableWidget_cellClicked(int row, int column)
{
    int selectRow = row;
    auto personas = this->personas;
        auto contactos = personas[selectRow].getContactos();
        this->ui->tableWidget_2->clear();
        this->ui->tableWidget_2->setRowCount(contactos.size());
        QStringList headers;
        headers << "Tipo" << "Valor";
        this->ui->tableWidget_2->setHorizontalHeaderLabels(headers);
        for(int j= 0; j < contactos.size(); j++) {
            QTableWidgetItem * celltipo=
                    new QTableWidgetItem(QString(contactos[j].getTipo()));
            this->ui->tableWidget_2->setItem(j, 0, celltipo);

            QTableWidgetItem * cellValor=
                    new QTableWidgetItem(QString(contactos[j].getValor()));
            this->ui->tableWidget_2->setItem(j, 1, cellValor);
        }
}

