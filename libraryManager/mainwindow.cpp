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
    AuthorManager am = AuthorManager(":/data/authors.csv");
    am.load();
    am.deleteAuthor_by_id(0);
    qInfo() << am.getAuthorByName("AMMY DRISS Soufian").toString();
    qInfo() << am.getAuthorById(2).toString();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    // sauvgarder
    delete ui;
}

