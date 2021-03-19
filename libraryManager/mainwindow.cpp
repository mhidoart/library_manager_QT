#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "author.h"
#include "authormanager.h"
#include<QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Author auth =  Author(0,"choubida" ,"28/10/1997");

    auth.toString();

    am = new AuthorManager("D:/library_manager/authors.csv");

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
