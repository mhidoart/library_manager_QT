#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "author.h"
#include "authormanager.h"
#include "ouvragewindow.h"
#include<QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Author auth =  Author(0,"choubida" ,"28/10/1997");

    auth.toString();

    am = new AuthorManager("D:/library_manager/authors.csv");
    om = new OuvrageManager("D:/library_manager/ouvrages.csv");
    Ouvrage o = Ouvrage(-1 ,"23131232131","java8","this is abstract","25/10/1995",30, 0  );
    o.addAuthor(auth);
    om->addOuvrage(o);
     Ouvrage o1 = Ouvrage(-1 ,"99999","phpo","this is abstract","25/10/2000",55, 1  );
    // om->addOuvrage(o1);

    om->save();
    am->load();

    /*am.deleteAuthor_by_id(0);
    qInfo() << am.getAuthorByName("AMMY DRISS Soufian").toString();
    qInfo() << am.getAuthorById(2).toString();
    */
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    // sauvgarder
    delete ui;
}


void MainWindow::on_btn_add_auth_clicked()
{
    QString s = ui->add_auth_last_name->text() + "  " + ui->add_auth_first_name->text();
      Author auth =  Author(-1,s ,ui->add_auth_year_born->date().toString("dd/MM/yyyy"));
      am->addAuthor(auth);
}

void MainWindow::on_tabWidget_currentChanged(int index)
{

}

void MainWindow::on_actionGestion_des_ouvrages_triggered()
{

    OuvrageWindow* ow = new OuvrageWindow();
    ow->show();
    this->setHidden(true);
}
