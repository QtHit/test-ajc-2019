#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionKodjo, SIGNAL(triggered(bool)), this, SLOT(Afficher()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Afficher()
{
    this->close();
}

