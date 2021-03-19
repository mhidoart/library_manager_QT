/********************************************************************************
** Form generated from reading UI file 'ouvragewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUVRAGEWINDOW_H
#define UI_OUVRAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
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

class Ui_OuvrageWindow
{
public:
    QAction *actionGestion_des_auteurs;
    QAction *actionGestion_des_ouvrages;
    QAction *actionGestion_des_utilisateurs;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTabWidget *addOuvrage;
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *add_isbn;
    QLineEdit *add_title;
    QLineEdit *add_abstract;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QWidget *tab_2;
    QListWidget *listWidget_2;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_5;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_6;
    QComboBox *comboBox_3;
    QLabel *label_15;
    QDateEdit *dateEdit_2;
    QLineEdit *lineEdit_7;
    QLabel *label_16;
    QLineEdit *lineEdit_8;
    QComboBox *comboBox_4;
    QLabel *label_17;
    QListWidget *listWidget_3;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *OuvrageWindow)
    {
        if (OuvrageWindow->objectName().isEmpty())
            OuvrageWindow->setObjectName(QString::fromUtf8("OuvrageWindow"));
        OuvrageWindow->resize(800, 600);
        actionGestion_des_auteurs = new QAction(OuvrageWindow);
        actionGestion_des_auteurs->setObjectName(QString::fromUtf8("actionGestion_des_auteurs"));
        actionGestion_des_ouvrages = new QAction(OuvrageWindow);
        actionGestion_des_ouvrages->setObjectName(QString::fromUtf8("actionGestion_des_ouvrages"));
        actionGestion_des_utilisateurs = new QAction(OuvrageWindow);
        actionGestion_des_utilisateurs->setObjectName(QString::fromUtf8("actionGestion_des_utilisateurs"));
        centralwidget = new QWidget(OuvrageWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addOuvrage = new QTabWidget(centralwidget);
        addOuvrage->setObjectName(QString::fromUtf8("addOuvrage"));
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 56, 16));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 56, 16));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 90, 56, 16));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 120, 56, 16));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 170, 81, 16));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 210, 101, 16));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 250, 56, 16));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 290, 56, 16));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 330, 56, 16));
        add_isbn = new QLineEdit(widget);
        add_isbn->setObjectName(QString::fromUtf8("add_isbn"));
        add_isbn->setGeometry(QRect(110, 10, 271, 21));
        add_title = new QLineEdit(widget);
        add_title->setObjectName(QString::fromUtf8("add_title"));
        add_title->setGeometry(QRect(110, 50, 271, 24));
        add_abstract = new QLineEdit(widget);
        add_abstract->setObjectName(QString::fromUtf8("add_abstract"));
        add_abstract->setGeometry(QRect(110, 90, 271, 51));
        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(110, 160, 110, 25));
        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(110, 210, 113, 24));
        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 250, 131, 24));
        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(110, 290, 131, 24));
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(100, 330, 281, 111));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 480, 281, 24));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(100, 440, 281, 24));
        addOuvrage->addTab(widget, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        listWidget_2 = new QListWidget(tab_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(10, 50, 291, 271));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(310, 210, 81, 16));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(310, 90, 56, 16));
        lineEdit_5 = new QLineEdit(tab_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(410, 90, 271, 24));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(310, 130, 56, 16));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(310, 290, 56, 16));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(310, 370, 56, 16));
        lineEdit_6 = new QLineEdit(tab_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(410, 50, 271, 21));
        comboBox_3 = new QComboBox(tab_2);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(410, 290, 131, 24));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(310, 330, 56, 16));
        dateEdit_2 = new QDateEdit(tab_2);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(410, 200, 110, 25));
        lineEdit_7 = new QLineEdit(tab_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(410, 250, 113, 24));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(310, 50, 56, 16));
        lineEdit_8 = new QLineEdit(tab_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(410, 130, 271, 51));
        comboBox_4 = new QComboBox(tab_2);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(410, 330, 131, 24));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(310, 250, 101, 16));
        listWidget_3 = new QListWidget(tab_2);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(400, 370, 181, 111));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 520, 281, 24));
        lineEdit_9 = new QLineEdit(tab_2);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(10, 20, 271, 24));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(400, 490, 80, 24));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(500, 490, 80, 24));
        addOuvrage->addTab(tab_2, QString());

        verticalLayout->addWidget(addOuvrage);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        OuvrageWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OuvrageWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        OuvrageWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(OuvrageWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        OuvrageWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addSeparator();
        menuMenu->addAction(actionGestion_des_auteurs);
        menuMenu->addAction(actionGestion_des_ouvrages);
        menuMenu->addAction(actionGestion_des_utilisateurs);

        retranslateUi(OuvrageWindow);

        addOuvrage->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OuvrageWindow);
    } // setupUi

    void retranslateUi(QMainWindow *OuvrageWindow)
    {
        OuvrageWindow->setWindowTitle(QCoreApplication::translate("OuvrageWindow", "MainWindow", nullptr));
        actionGestion_des_auteurs->setText(QCoreApplication::translate("OuvrageWindow", "Gestion des auteurs", nullptr));
        actionGestion_des_ouvrages->setText(QCoreApplication::translate("OuvrageWindow", "Gestion des ouvrages", nullptr));
        actionGestion_des_utilisateurs->setText(QCoreApplication::translate("OuvrageWindow", "Gestion des utilisateurs", nullptr));
        label->setText(QCoreApplication::translate("OuvrageWindow", "ISBN :", nullptr));
        label_2->setText(QCoreApplication::translate("OuvrageWindow", "Titre : ", nullptr));
        label_3->setText(QCoreApplication::translate("OuvrageWindow", "R\303\251sum\303\251 : ", nullptr));
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("OuvrageWindow", "Date de sortie :", nullptr));
        label_6->setText(QCoreApplication::translate("OuvrageWindow", "Nombre de copies :", nullptr));
        label_7->setText(QCoreApplication::translate("OuvrageWindow", "Type :", nullptr));
        label_8->setText(QCoreApplication::translate("OuvrageWindow", "Cat\303\251gorie :", nullptr));
        label_9->setText(QCoreApplication::translate("OuvrageWindow", "Auteurs :", nullptr));
        pushButton->setText(QCoreApplication::translate("OuvrageWindow", "Ajouter Ouvrage", nullptr));
        pushButton_5->setText(QCoreApplication::translate("OuvrageWindow", "Ajouter Auteur", nullptr));
        addOuvrage->setTabText(addOuvrage->indexOf(widget), QCoreApplication::translate("OuvrageWindow", "Ajouter Ouvrage", nullptr));
        label_10->setText(QCoreApplication::translate("OuvrageWindow", "Date de sortie :", nullptr));
        label_11->setText(QCoreApplication::translate("OuvrageWindow", "Titre : ", nullptr));
        label_12->setText(QCoreApplication::translate("OuvrageWindow", "R\303\251sum\303\251 : ", nullptr));
        label_13->setText(QCoreApplication::translate("OuvrageWindow", "Type :", nullptr));
        label_14->setText(QCoreApplication::translate("OuvrageWindow", "Auteurs :", nullptr));
        label_15->setText(QCoreApplication::translate("OuvrageWindow", "Cat\303\251gorie :", nullptr));
        label_16->setText(QCoreApplication::translate("OuvrageWindow", "ISBN :", nullptr));
        label_17->setText(QCoreApplication::translate("OuvrageWindow", "Nombre de copies :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("OuvrageWindow", "Ajouter Ouvrage", nullptr));
        pushButton_3->setText(QCoreApplication::translate("OuvrageWindow", "Modifier ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("OuvrageWindow", "Supprimer", nullptr));
        addOuvrage->setTabText(addOuvrage->indexOf(tab_2), QCoreApplication::translate("OuvrageWindow", "Lister Ouvrage", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("OuvrageWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OuvrageWindow: public Ui_OuvrageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUVRAGEWINDOW_H
