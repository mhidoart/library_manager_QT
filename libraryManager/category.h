#ifndef CATEGORY_H
#define CATEGORY_H
#include <QString>

#include<QDebug>
/**
 * @file category.h
 *@author ASSABBANE Mehdi et CHOUBBY Ibtissam
 * Interface de la classe Category
 */
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
