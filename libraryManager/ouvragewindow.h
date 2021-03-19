#ifndef OUVRAGEWINDOW_H
#define OUVRAGEWINDOW_H

#include <QMainWindow>

namespace Ui {
class OuvrageWindow;
}

class OuvrageWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit OuvrageWindow(QWidget *parent = nullptr);
    ~OuvrageWindow();

private slots:
    void on_actionGestion_des_ouvrages_triggered();

    void on_actionGestion_des_auteurs_triggered();

private:
    Ui::OuvrageWindow *ui;
};

#endif // OUVRAGEWINDOW_H
