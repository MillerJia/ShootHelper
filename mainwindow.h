#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "style.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    virtual void keyPressEvent(QKeyEvent *event);
    ~MainWindow();

private:
    Style style;
    Ui::MainWindow *ui;
    void initData();
};
#endif // MAINWINDOW_H
