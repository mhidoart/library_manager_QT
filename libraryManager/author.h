#ifndef AUTHOR_H
#define AUTHOR_H
#include <QString>
#include <QObject>

#include<QDebug>

class Author
{
Q_OBJECT
public:
    Author(int,QString,QString);
    QString toString();
    int getId() const;
    void setId(int value);

    QString getFull_name() const;
    void setFull_name(const QString &value);

    QString getYear_born() const;
    void setYear_born(const QString &value);

private:

    int id;
    QString full_name;
    QString year_born; //Pas de using namespace std, il faut donc mettrestd:: devant string

};

#endif // AUTHOR_H
