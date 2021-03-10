#include "category.h"

Category::Category(int identificateur,QString category)
{
    id= identificateur;
    category_name = category;
}

QString Category::toString()
{
    return " ID : " +  QString::number(id) + " CategoryName: " + category_name;
}

QString Category::getCategory_name() const
{
    return category_name;
}

void Category::setCategory_name(const QString &value)
{
    category_name = value;
}

int Category::getId() const
{
    return id;
}

void Category::setId(int value)
{
    id = value;
}
