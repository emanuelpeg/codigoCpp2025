#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "agenda.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_tableWidget_itemSelectionChanged();

    void on_tableWidget_cellClicked(int row, int column);

private:
    Ui::MainWindow *ui;
    Agenda* agenda;
    std::vector<Persona> personas;
    void refrescar();
    void refrescar(std::vector<Persona> personas);
};
#endif // MAINWINDOW_H
