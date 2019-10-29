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

private slots:
    void coucou();

private:
    Ui::MainWindow *ui;
private slots:
    void bloc();
};
#endif // MAINWINDOW_H
