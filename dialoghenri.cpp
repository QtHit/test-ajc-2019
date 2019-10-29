#include "dialoghenri.h"
#include "ui_dialoghenri.h"

DialogHenri::DialogHenri(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogHenri)
{
    ui->setupUi(this);
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(virus()));
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(virus()));
}

DialogHenri::~DialogHenri()
{
    delete ui;
}

void DialogHenri::vir(int i, int j)
{
    DialogHenri *p= new DialogHenri(this);
    p->move(i,j);
    p->show();
}



void DialogHenri::virus()
{
    for (int i=0;i<15;i++)
    {
        for (int j=0;j<8;j++)
            vir(i*100,j*100);
    }
}
