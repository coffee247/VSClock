#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "clock.h"

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

    void on_verticalSlider_valueChanged(int value);

private:
    Ui::MainWindow *ui;

    Clock *clock;

    void connectClock();
    void onClockTick();
};
#endif // MAINWINDOW_H
