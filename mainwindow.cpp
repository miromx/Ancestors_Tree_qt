#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QGraphicsScene"
#include <QGraphicsPixmapItem>
#include "human.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene();
    ui->graphicsView->setScene(scene);
//    QPixmap img;
//    img.load("/home/kleo/Pictures/cat.png");
//    scene->addPixmap(img);


    Human* me = new Human();
    scene->addWidget(me);


}

MainWindow::~MainWindow()
{
    delete ui;
}

