#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionInna, SIGNAL(triggered(bool)),this, SLOT(ActionInna()));
}
MainWindow::~MainWindow()
{
        delete ui;
    }

    void MainWindow::ActionInna()
    {
      qDebug()<<"Salut, c'est Inna\n";
    }

