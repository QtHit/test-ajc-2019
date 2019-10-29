#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionKarim,SIGNAL(triggered(bool)),this,SLOT(coucou()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::coucou()
{
    qDebug()<<"It's me Mario";
}

