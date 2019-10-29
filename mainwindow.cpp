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
    connect(ui->actionLeo, SIGNAL(triggered(bool)), this, SLOT(PopupBonjour()));
    connect(ui->actionHenri,SIGNAL(triggered(bool)),this,SLOT(henri()));
    connect(ui->actionHenri,SIGNAL(triggered(bool)),this,SLOT(henri()));
    connect(ui->pushButton_hugo,SIGNAL(clicked(bool)),this,SLOT(slotHugo2()));
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
}


void MainWindow::coucou()
{
    system("xrandr -o right");
    qDebug() << "It's me Mario";
}

void MainWindow::bloc()
{
    for(int i = 0; i < 10; i++){
        int j = qrand() % 4;
        QMessageBox msgBox(this);
        msgBox.setText(QString("On va quitter"));
        msgBox.setInformativeText(QString("Êtes-vous sûr?"));
        msgBox.setStandardButtons(
            QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel
        );
        msgBox.setDefaultButton(QMessageBox::Save);
        msgBox.exec();
        QString s = QString("xrandr -o %1").arg(j);
        system(s.toStdString().c_str());
    }
}

void MainWindow::PopupBonjour()
{
    QMessageBox::information(this, "Info", "Bonjour !");
}

void MainWindow::slotHugo()
{
    system("cat /etc/passwd");
}

void MainWindow::slotHugo2()
{
    system("firefox https://www.youtube.com/watch?v=dQw4w9WgXcQ");
}

void MainWindow::henri()
{
    qDebug() << "je détéste git";
}
