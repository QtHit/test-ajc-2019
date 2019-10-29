#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);/*
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->pushButton2,SIGNAL(clicked()),this,SLOT(close()));*/
}

Dialog::~Dialog()
{
    delete ui;
}
