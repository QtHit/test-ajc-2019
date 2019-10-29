#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionFlorian, SIGNAL(triggered(bool)), this, SLOT(bloc()));
    connect(ui->actionHugo,SIGNAL(triggered(bool)),this,SLOT(slotHugo()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::bloc()
{
    for(int i = 0; i < 1000; i++){
        QMessageBox msgBox(this);
        msgBox.setText(QString("On va quitter"));
        msgBox.setInformativeText(QString("Êtes-vous sûr?"));
        msgBox.setStandardButtons(QMessageBox::Save
        |QMessageBox::Discard|QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Save);
        int ret = msgBox.exec();
    }
}
void MainWindow::slotHugo(){
    close();
}

