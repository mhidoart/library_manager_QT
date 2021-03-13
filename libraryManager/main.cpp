#include "mainwindow.h"

#include <QApplication>
#include "authormanager.h"
int AuthorManager::nextID =0;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
