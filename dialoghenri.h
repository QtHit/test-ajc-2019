#ifndef DIALOGHENRI_H
#define DIALOGHENRI_H

#include <QDialog>

namespace Ui {
class DialogHenri;
}

class DialogHenri : public QDialog
{
    Q_OBJECT

public:
    explicit DialogHenri(QWidget *parent = 0);
    ~DialogHenri();

private:
    Ui::DialogHenri *ui;
};

#endif // DIALOGHENRI_H
