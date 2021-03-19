#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "ouvragewindow.h"
LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_clicked()
{
    if((ui->loginUsername->text()=="Admin") and (ui->loginPwd->text()=="admin123")){
        OuvrageWindow* ow = new OuvrageWindow();
        ow->show();
        this->setHidden(true);
    }

}
