#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private slots:
    void slotHugo();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
<<<<<<< HEAD

    void oluwasayo();

=======
    void bloc();
>>>>>>> c302e3bac3ab36b1d099471aeddf68f2c24f7be5
};
#endif // MAINWINDOW_H
