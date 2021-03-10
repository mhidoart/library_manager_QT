#ifndef CATEGORY_H
#define CATEGORY_H
#include <QString>

#include<QDebug>

class Category
{
public:
    Category(int identificateur,QString category);

    QString toString();
    int getId() const;
    void setId(int value);

    QString getCategory_name() const;
    void setCategory_name(const QString &value);

private:
    int id;
    QString category_name;
};

#endif // CATEGORY_H
