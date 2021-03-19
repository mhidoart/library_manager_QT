#include "categorymanager.h"

CategoryManager::CategoryManager(QString value)
{
    source = value;
    f1.setFileName(source);
    CategoryNextID = 0;
}

void CategoryManager::addCategory(Category c)
{
if(!isCategoryExist(c)){
    categories.push_back(c);
}
}

void CategoryManager::load()
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

void CategoryManager::append_csv(Category c)
{
    //QFile data(source);

    if(f1.open(QIODevice::ReadWrite | QIODevice::Append)){
        QTextStream out(&f1);
        out << c.getId() << "," << c.getCategory_name() ;
        qInfo() << ">>>> category " +  c.toString() + " Added succesfully";
    }

    else{
         qInfo() << "error opning :  "+ source;
    }

    f1.close();

}

void CategoryManager::saveAll()
{

    if(f1.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)){
        QTextStream out(&f1);
        for(std::vector<Category>::iterator it = categories.begin(); it != categories.end(); ++it) {
            out << it->getId() << "," <<  it->getCategory_name() ;

        }
    }

    else{
         qInfo() << "error opning :  "+ source;
    }

    f1.close();
}

void CategoryManager::deleteCategory_by_id(int id)
{
    qInfo() << "deleting Category with id : " + QString::number(id);
    for(std::vector<Category>::iterator it = categories.begin(); it != categories.end(); ++it) {
      if(  it->getId() == id  ){
         categories.erase(it);
      }
     }
    saveAll();
}

void CategoryManager::deleteCategory(Category c)
{
deleteCategory_by_id(c.getId());
}

bool CategoryManager::isCategoryExist(Category c)
{
    for(std::vector<Category>::iterator it = categories.begin(); it != categories.end(); ++it) {
      if(  it->getId() == c.getId()  ){
          return true;
      }
     }
    return false;
}

Category *CategoryManager::getCategoryByName(QString value)
{
    for(std::vector<Category>::iterator it = categories.begin(); it != categories.end(); ++it) {
      if(  it->getCategory_name() == value  ){
          Category*  auth = new Category(it->getId(),it->getCategory_name()) ;
          return auth;
      }
     }
    return nullptr;
}

Category *CategoryManager::getCategoryById(int value)
{
    for(std::vector<Category>::iterator it = categories.begin(); it != categories.end(); ++it) {
      if(  it->getId() == value  ){
          Category*  auth = new Category(it->getId(),it->getCategory_name()) ;
          return auth;
      }
     }
    return nullptr;
}

void CategoryManager::printData()
{
    qInfo() << ">>>> Printing all Category manager data : ";
    for(std::vector<Category>::iterator it = categories.begin(); it != categories.end(); ++it) {
        qInfo() <<  it->toString();
    }
}

int CategoryManager::getNextId()
{
    for(std::vector<Category>::iterator it = categories.begin(); it != categories.end(); ++it) {
        if(  it->getId() >= CategoryNextID  ){
            CategoryNextID = it->getId();
        }
    }
    CategoryNextID ++;// the next free id
    return CategoryNextID;

}
