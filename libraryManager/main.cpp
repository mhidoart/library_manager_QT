#include "mainwindow.h"
#include "loginwindow.h"
#include <QApplication>
#include "authormanager.h"
int AuthorManager::nextID =0;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow* w=new LoginWindow();
    w->show();
    return a.exec();
}
