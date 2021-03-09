#include "authormanager.h"
#include <QFile.h>

AuthorManager::AuthorManager(QString value){

    source = value;

}
void AuthorManager::addAuthor(Author auth)
{
    if(!isAuthorExist(auth)){
        authors.push_back(auth);
    }
}

void AuthorManager::load()
{
    qInfo() << ">>>>start loading authors";

    QStringList firstColumn;
    QFile f1(source);
    f1.open(QIODevice::ReadOnly);
    QTextStream s1(&f1);
    while (!s1.atEnd()){
      QString s=s1.readLine(); // reads line from file
      firstColumn.append(s.split(",").first()); // appends first column to list, ',' is separator
      qInfo() << s.split(",")[0];qInfo() << s.split(",")[1];qInfo() << s.split(",")[2];
      addAuthor(Author(s.split(",")[0].toInt(),s.split(",")[1],s.split(",")[2]));
    }
    f1.close();
    qInfo() << ">>>>fin load authors";
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
      qInfo() <<  it->toString();
     }
}

void AuthorManager::deleteAuthor_by_id(int id)
{
    qInfo() << "deleting author with id : " + QString::number(id);
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
      if(  it->getId() == id  ){
         authors.erase(it);
      }
     }
}

void AuthorManager::deleteAuthor(Author auth)
{
   deleteAuthor_by_id(auth.getId());
}

bool AuthorManager::isAuthorExist(Author auth)
{
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
      if(  it->getId() == auth.getId()  ){
          return true;
      }
     }
    return false;
}

Author AuthorManager::getAuthorByName(QString value)
{
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
      if(  it->getFull_name() == value  ){
          return * it;
      }
     }
    return Author(-1,"","");

}

Author AuthorManager::getAuthorById(int value)
{
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
      if(  it->getId() == value  ){
          return * it;
      }
     }
    return Author(-1,"","");

}

