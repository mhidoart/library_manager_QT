#ifndef CATEGORYMANAGER_H
#define CATEGORYMANAGER_H
#include "category.h"
#include <QFile.h>

class CategoryManager
{
public:


    int CategoryNextID   ;

    CategoryManager(QString);
    void addCategory(Category);
    void load();
    void append_csv(Category c);
    void saveAll();

    void deleteCategory_by_id(int);
    void deleteCategory(Category);
    bool isCategoryExist(Category);
    Category* getCategoryByName(QString value);
    Category*  getCategoryById(int value);
    void printData();
    int getNextId();

private:
    QString source;
    std::vector<Category> categories;
    QFile f1;

};

#endif // CATEGORYMANAGER_H
