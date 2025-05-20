#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "rotor.h"

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
    void timeout1();
    void timeout2();
    void timeout3();
    void check();

private:
    Ui::MainWindow *ui;
    QTimer *timer1;
    QTimer *timer2;
    QTimer *timer3;
    Rotor * rotor1;
    Rotor * rotor2;
    Rotor * rotor3;
};
#endif // MAINWINDOW_H
