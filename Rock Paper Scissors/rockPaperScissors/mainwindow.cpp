
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Создание сцены
    scene = new QGraphicsScene();
    ui->graphicsView->setScene(scene);


    QGraphicsItem it1 = scene->addRect(0,0,100,100);


}

MainWindow::~MainWindow()
{
    delete ui;
}

