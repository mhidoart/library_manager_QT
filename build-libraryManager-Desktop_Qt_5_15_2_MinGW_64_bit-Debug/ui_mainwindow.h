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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionajouter_auteur;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *add_auth_last_name;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *add_auth_first_name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateEdit *add_auth_year_born;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_add_auth;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_8;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_4;
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
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMouseTracking(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayout = new QFormLayout(tab);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        add_auth_last_name = new QLineEdit(tab);
        add_auth_last_name->setObjectName(QString::fromUtf8("add_auth_last_name"));

        horizontalLayout_2->addWidget(add_auth_last_name);


        formLayout->setLayout(1, QFormLayout::SpanningRole, horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        add_auth_first_name = new QLineEdit(tab);
        add_auth_first_name->setObjectName(QString::fromUtf8("add_auth_first_name"));

        horizontalLayout->addWidget(add_auth_first_name);


        formLayout->setLayout(2, QFormLayout::SpanningRole, horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        add_auth_year_born = new QDateEdit(tab);
        add_auth_year_born->setObjectName(QString::fromUtf8("add_auth_year_born"));

        horizontalLayout_3->addWidget(add_auth_year_born);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));

        formLayout->setLayout(3, QFormLayout::LabelRole, horizontalLayout_4);

        btn_add_auth = new QPushButton(tab);
        btn_add_auth->setObjectName(QString::fromUtf8("btn_add_auth"));

        formLayout->setWidget(3, QFormLayout::FieldRole, btn_add_auth);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setMinimumSize(QSize(0, 510));
        tab_2->setMaximumSize(QSize(776, 510));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(5);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        listWidget = new QListWidget(tab_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setEnabled(true);

        verticalLayout_8->addWidget(listWidget);


        horizontalLayout_16->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_7->addWidget(label_4);


        horizontalLayout_16->addLayout(verticalLayout_7);


        gridLayout_3->addLayout(horizontalLayout_16, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabWidget);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
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

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionajouter_auteur->setText(QCoreApplication::translate("MainWindow", "ajouter auteur", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Prenom :", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nom:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "date de naissance", nullptr));
        btn_add_auth->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Ajouter Auteur", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "authors", nullptr));
        menufile->setTitle(QCoreApplication::translate("MainWindow", "file", nullptr));
        menuservices->setTitle(QCoreApplication::translate("MainWindow", "services", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
