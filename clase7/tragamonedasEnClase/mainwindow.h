#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rotor.h"
#include <QTimer>

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
    void girarR1();
    void girarR2();
    void girarR3();

private:
    Ui::MainWindow *ui;
    Rotor* r1;
    Rotor* r2;
    Rotor* r3;
    QTimer* qt1;
    QTimer* qt2;
    QTimer* qt3;

};
#endif // MAINWINDOW_H
