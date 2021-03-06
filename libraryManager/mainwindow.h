#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "authormanager.h"
#include "ouvragemanager.h"

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
    void on_btn_add_auth_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_actionGestion_des_ouvrages_triggered();

private:
    Ui::MainWindow *ui;
    AuthorManager* am ;
    OuvrageManager* om;
};
#endif // MAINWINDOW_H
