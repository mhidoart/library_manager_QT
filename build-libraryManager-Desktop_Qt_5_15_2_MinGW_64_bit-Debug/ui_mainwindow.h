/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionajouter_auteur;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *add_auth_first_name;
    QLineEdit *add_auth_last_name;
    QDateEdit *add_auth_year_born;
    QPushButton *btn_add_auth;
    QWidget *tab_2;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuservices;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionajouter_auteur = new QAction(MainWindow);
        actionajouter_auteur->setObjectName(QString::fromUtf8("actionajouter_auteur"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 791, 561));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 60, 55, 16));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 90, 55, 16));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 120, 131, 16));
        add_auth_first_name = new QLineEdit(tab);
        add_auth_first_name->setObjectName(QString::fromUtf8("add_auth_first_name"));
        add_auth_first_name->setGeometry(QRect(300, 60, 231, 22));
        add_auth_last_name = new QLineEdit(tab);
        add_auth_last_name->setObjectName(QString::fromUtf8("add_auth_last_name"));
        add_auth_last_name->setGeometry(QRect(300, 90, 231, 22));
        add_auth_year_born = new QDateEdit(tab);
        add_auth_year_born->setObjectName(QString::fromUtf8("add_auth_year_born"));
        add_auth_year_born->setGeometry(QRect(370, 120, 91, 22));
        btn_add_auth = new QPushButton(tab);
        btn_add_auth->setObjectName(QString::fromUtf8("btn_add_auth"));
        btn_add_auth->setGeometry(QRect(310, 160, 93, 28));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menufile = new QMenu(menubar);
        menufile->setObjectName(QString::fromUtf8("menufile"));
        menuservices = new QMenu(menubar);
        menuservices->setObjectName(QString::fromUtf8("menuservices"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menufile->menuAction());
        menubar->addAction(menuservices->menuAction());
        menuservices->addAction(actionajouter_auteur);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionajouter_auteur->setText(QCoreApplication::translate("MainWindow", "ajouter auteur", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nom:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Prenom :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "date de naissance", nullptr));
        btn_add_auth->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Ajouter Auteur", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        menufile->setTitle(QCoreApplication::translate("MainWindow", "file", nullptr));
        menuservices->setTitle(QCoreApplication::translate("MainWindow", "services", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
