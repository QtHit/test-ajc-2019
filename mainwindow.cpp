#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionHugo,SIGNAL(triggered(bool)),this,SLOT(slotHugo()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotHugo()
{
    close();
}

