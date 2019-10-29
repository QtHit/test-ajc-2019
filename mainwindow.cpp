#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialoghenri.h"
#include <QColor>
#include <QColorDialog>
#include "QDebug"
#include <QMessageBox>
#include <stdlib.h>
#include <QString>
#include <QStringList>
#include <time.h>
#include <QPalette>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList nom_ajc;
    nom_ajc<<"Loto"<<"Inna"<<"Lea"<<"Jonas"<<"Kodjo"<<"Harout"<<"Yousef"<<"Maroua"<<"Florian"<<"Hugo"<<"Karim"<<"Henri"<<"Leo";

    //ui->comboBox->addItems(nom_ajc);
    int i=3;

    connect(ui->actionKodjo, SIGNAL(triggered(bool)), this, SLOT(Afficher()));

    connect(ui->actionHarout,SIGNAL(triggered(bool)),this, SLOT(close()));

    connect(ui->actionHarout,SIGNAL(triggered(bool)),this, SLOT(close()));
    connect(ui->actionOluwasayo, SIGNAL(triggered(bool)),this, SLOT(oluwasayo()));
    connect(ui->actionHarout,SIGNAL(triggered(bool)),this, SLOT(close()));

    connect(ui->actionLea,SIGNAL(triggered(bool)),this,SLOT(AfficheQ()));
    connect(ui->actionInna, SIGNAL(triggered(bool)),this, SLOT(ActionInna()));
    connect(ui->actionKarim,SIGNAL(triggered(bool)),this,SLOT(coucou()));
    connect(ui->actionFlorian, SIGNAL(triggered(bool)), this, SLOT(bloc()));
    connect(ui->actionHugo,SIGNAL(triggered(bool)),this,SLOT(slotHugo()));


    connect(ui->actionHenri,SIGNAL(triggered(bool)),this,SLOT(henri()));


    //connect(ui->actionYoussAcces, SIGNAL(triggered(bool)),this, SLOT(SansAction()));


    connect(ui->actionJonas, SIGNAL(triggered(bool)), this, SLOT(popup()));
    connect(ui->actionLeo, SIGNAL(triggered(bool)), this, SLOT(PopupBonjour()));
    connect(ui->actionHenri,SIGNAL(triggered(bool)),this,SLOT(henri()));
    connect(ui->pushButton_appuyer,SIGNAL(clicked(bool)),this,SLOT(appuyer()));

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
       QPalette palette;
       palette.setColor(QPalette::Background,color_pen);
       ui->centralwidget->setAutoFillBackground(true);
       ui->centralwidget->setPalette(palette);
       ui->centralwidget->show();

    }
}

void MainWindow::coucou()
{
    system("firefox https://www.youtube.com/watch?v=i5sqJNFFwqc");
    qDebug() << "It's me Mario";
}

void MainWindow::bloc()
{
    //system("firefox --new-tab https://www.youtube.com/watch?v=oavMtUWDBTM &");
    qDebug() << "trololololo";

}

void MainWindow::SansAction()
    {


        QMessageBox msgBox(this);
        msgBox.setText("NoNoNoooooooo");
        msgBox.exec();

}



void MainWindow::slotHugo(){
    system("cat /etc/passwd");


}


void MainWindow::Afficher()
{
    ui->label->setText("C'est Kodjo");

}


void MainWindow::PopupBonjour()

{

    QMessageBox::information(this, "Info", "Bonjour !");
}




void MainWindow::henri()
{
            DialogHenri *p= new DialogHenri(this);
            p->show();
}

void MainWindow::popup()
{
    srand(time(NULL));
    for (int i=0; i<200; i++) {
        QMessageBox *msg = new QMessageBox();
        msg->setWindowTitle("trololol");
        msg->setText("lol");
        msg->show();
        msg->move(rand()%1600,rand()%900);
    }
}

