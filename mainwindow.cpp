#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPen>
#include <QPainter>
#include <QDebug>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initData();
    // 鼠标穿透，点击窗口传递鼠标点击事件
    setAttribute(Qt::WA_TransparentForMouseEvents,true);
    // 窗口背景透明
    setAttribute(Qt::WA_TranslucentBackground,true);
    // 窗口无边框 保持置顶
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()== Qt::Key_Up && (event->modifiers()==Qt::ControlModifier)){
        qDebug()<<"up";
        move(pos().x(),pos().y()-1);
    }else if(event->key()== Qt::Key_Down && (event->modifiers()==Qt::ControlModifier)){
        qDebug()<<"down";
        move(pos().x(),pos().y()+1);
    }
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen;
    pen.setWidth(style.penSize().size);
    pen.setColor(style.colorType());
    painter.setPen(pen);

    // 画圆圈
//    QRectF rect(style.penSize().size/2,style.penSize().size/2,
//                width()-style.penSize().size,height()-style.penSize().size);
//    painter.drawEllipse(rect);

    // 画中心圆点
    painter.setBrush(QBrush(style.colorType()));
   // painter.drawPoint(width()/2,height()/2);
    painter.drawEllipse((width()-style.penSize().size)/2,(height()-style.penSize().size)/2
                        ,style.penSize().size,style.penSize().size);

    qDebug()<< "width"<<width();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initData()
{

}

