#include "dialoghenri.h"
#include "ui_dialoghenri.h"

DialogHenri::DialogHenri(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogHenri)
{
    ui->setupUi(this);
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(close()));
}

DialogHenri::~DialogHenri()
{
    delete ui;
}
