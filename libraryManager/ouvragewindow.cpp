#include "ouvragewindow.h"
#include "ui_ouvragewindow.h"
#include "mainwindow.h"

OuvrageWindow::OuvrageWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OuvrageWindow)
{
    ui->setupUi(this);

}

OuvrageWindow::~OuvrageWindow()
{
    delete ui;
}

void OuvrageWindow::on_actionGestion_des_ouvrages_triggered()
{

}

void OuvrageWindow::on_actionGestion_des_auteurs_triggered()
{

    MainWindow* w=new MainWindow();
    w->show();
   this->setHidden(true);
}
