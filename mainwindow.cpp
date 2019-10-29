#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QColor>
#include <QColorDialog>
#include "QDebug"

#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionLea,SIGNAL(triggered(bool)),this,SLOT(AfficheQ()));


    connect(ui->actionInna, SIGNAL(triggered(bool)),this, SLOT(ActionInna()));


    connect(ui->actionKarim,SIGNAL(triggered(bool)),this,SLOT(coucou()));
    connect(ui->actionFlorian, SIGNAL(triggered(bool)), this, SLOT(bloc()));

    connect(ui->actionHugo,SIGNAL(triggered(bool)),this,SLOT(slotHugo()));


}


MainWindow::~MainWindow()
{
        delete ui;
    }

    void MainWindow::ActionInna()
    {
      qDebug()<<"Salut, c'est Inna\n";
    }


void MainWindow::AfficheQ()
{
    QColor color_pen;
    color_pen = QColorDialog::getColor(Qt::green, this, "Selectionnez votre Couleur", QColorDialog::DontUseNativeDialog);
}


void MainWindow::coucou()
{
    qDebug()<<"It's me Mario";
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
    system("xrandr -o left");
}

