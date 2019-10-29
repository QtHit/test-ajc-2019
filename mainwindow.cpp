#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColor>
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionLea,SIGNAL(triggered(bool)),this,SLOT(AfficheQ()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AfficheQ()
{
    QColor color_pen;
    color_pen = QColorDialog::getColor(Qt::green, this, "Selectionnez votre Couleur", QColorDialog::DontUseNativeDialog);

}

