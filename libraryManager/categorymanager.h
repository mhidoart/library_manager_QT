#ifndef CATEGORYMANAGER_H
#define CATEGORYMANAGER_H
#include "category.h"
#include <QFile.h>

class categoryManager
{
public:
    categoryManager(QString);
    void addCategory(Category);
    void load();
    void deleteCategory_by_id(int);
    void deleteCategory(Category);
    bool isCategoryExist(Category);
    Category* getCategoryByName(QString value);
    Category*  getCategoryById(int value);
private:
    QString source;
    std::vector<Category> categories;
};

#endif // CATEGORYMANAGER_H
