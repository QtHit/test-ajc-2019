#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void AfficheQ();
    void coucou();

private:
    Ui::MainWindow *ui;
private slots:
    void oluwasayo();


    void bloc();

    void ActionInna();
    void slotHugo();
    void henri();
    void PopupBonjour();
};
#endif // MAINWINDOW_H
