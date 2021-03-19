#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>

namespace Ui {
class userWindow;
}

class userWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit userWindow(QWidget *parent = nullptr);
    ~userWindow();

private:
    Ui::userWindow *ui;
};

#endif // USERWINDOW_H
