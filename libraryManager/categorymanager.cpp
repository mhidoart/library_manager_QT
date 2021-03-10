#include "categorymanager.h"

categoryManager::categoryManager(QString value)
{
    source = value;
}

void categoryManager::addCategory(Category c)
{
if(!isCategoryExist(c)){
    categories.push_back(c);
}
}

void categoryManager::load()
{
    qInfo() << ">>>>start loading Categories";

    QStringList firstColumn;
    QFile f1(source);
    f1.open(QIODevice::ReadOnly);
    QTextStream s1(&f1);
    while (!s1.atEnd()){
      QString s=s1.readLine(); // reads line from file
      firstColumn.append(s.split(",").first()); // appends first column to list, ',' is separator
      qInfo() << "creating instance of Category";
      int id = s.split(",")[0].toInt();
      QString name = s.split(",")[1];
      addCategory(Category( id,name ));

    }
    f1.close();
    qInfo() << ">>>>fin load Categories";
    for(std::vector<Category>::iterator it = categories.begin(); it != categories.end(); ++it) {
      qInfo() <<  it->toString();
     }

}

void categoryManager::deleteCategory_by_id(int id)
{
    qInfo() << "deleting Category with id : " + QString::number(id);
    for(std::vector<Category>::iterator it = categories.begin(); it != categories.end(); ++it) {
      if(  it->getId() == id  ){
         categories.erase(it);
      }
     }
}

void categoryManager::deleteCategory(Category c)
{
deleteCategory_by_id(c.getId());
}

bool categoryManager::isCategoryExist(Category c)
{
    for(std::vector<Category>::iterator it = categories.begin(); it != categories.end(); ++it) {
      if(  it->getId() == c.getId()  ){
          return true;
      }
     }
    return false;
}

Category *categoryManager::getCategoryByName(QString value)
{
    for(std::vector<Category>::iterator it = categories.begin(); it != categories.end(); ++it) {
      if(  it->getCategory_name() == value  ){
          Category*  auth = new Category(it->getId(),it->getCategory_name()) ;
          return auth;
      }
     }
    return nullptr;
}

Category *categoryManager::getCategoryById(int value)
{
    for(std::vector<Category>::iterator it = categories.begin(); it != categories.end(); ++it) {
      if(  it->getId() == value  ){
          Category*  auth = new Category(it->getId(),it->getCategory_name()) ;
          return auth;
      }
     }
    return nullptr;
}
