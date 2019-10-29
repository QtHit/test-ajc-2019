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
    void oluwasayo();
    void ActionInna();
    void slotHugo();
    void henri();
    void PopupBonjour();
    void bloc();
    void appuyer();
    void SansAction();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
