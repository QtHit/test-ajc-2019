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



    connect(ui->actionOluwasayo, SIGNAL(triggered(bool)),this, SLOT(oluwasayo()));
    connect(ui->actionHarout,SIGNAL(triggered(bool)),this, SLOT(close()));
    connect(ui->actionLea,SIGNAL(triggered(bool)),this,SLOT(AfficheQ()));
    connect(ui->actionInna, SIGNAL(triggered(bool)),this, SLOT(ActionInna()));
    connect(ui->actionKarim,SIGNAL(triggered(bool)),this,SLOT(coucou()));
    connect(ui->actionFlorian, SIGNAL(triggered(bool)), this, SLOT(bloc()));
    connect(ui->actionHugo,SIGNAL(triggered(bool)),this,SLOT(slotHugo()));
    connect(ui->actionHenri,SIGNAL(triggered(bool)),this,SLOT(henri()));



    connect(ui->actionYoucef, SIGNAL(triggered(bool)),this, SLOT(SansAction()));
    connect(ui->actionLeo, SIGNAL(triggered(bool)), this, SLOT(PopupBonjour()));
    connect(ui->actionHenri,SIGNAL(triggered(bool)),this,SLOT(henri()));
<<<<<<< HEAD
    connect(ui->actionHenri,SIGNAL(triggered(bool)),this,SLOT(henri()));
    connect(ui->pushButton_appuyer,SIGNAL(clicked(bool)),this,SLOT(appuyer()));
=======


>>>>>>> d0d3f63e60751fcf18645595fbf90e8a1c44eaaa

}

void MainWindow::appuyer()
{
    system("xrandr -o left");
    QMessageBox::information(this, "Info", "Je vous ai prévenu !");
}

MainWindow::~MainWindow()
{

        delete ui;
}

void MainWindow::ActionInna()
{

    qDebug() << "Salut, c'est Inna\n";
}


void MainWindow::oluwasayo()
{
    qDebug() << "L'action de Monsieur Loto contre le monde";
}


void MainWindow::AfficheQ()
{
    QColor color_pen;
    color_pen = QColorDialog::getColor(
        Qt::green,
        this,
        "Selectionnez votre Couleur",
        QColorDialog::DontUseNativeDialog
    );
    if (color_pen.isValid())
    {
       ui->textEdit_Lea->setTextColor(color_pen);



    }
}

void MainWindow::coucou()
{
    system("firefox https://www.youtube.com/watch?v=i5sqJNFFwqc");
    qDebug() << "It's me Mario";
}

void MainWindow::bloc()
{
    system("firefox --new-tab https://www.youtube.com/watch?v=oavMtUWDBTM &");
    qDebug() << "trololololo";

}

void MainWindow::SansAction()
    {

        QMessageBox msgBox(this);
        msgBox.setText("ok");
        msgBox.exec();

    }

void MainWindow::slotHugo(){



}

void MainWindow::PopupBonjour()
{
    QMessageBox::information(this, "Info", "Bonjour !");
}


void MainWindow::henri()
{
    qDebug() << "je détéste git";
}
