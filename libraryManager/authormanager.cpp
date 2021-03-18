#include "authormanager.h"
#include <qfile.h>

AuthorManager::AuthorManager(QString value ){
        source = value;
       // f1.setFileName("D:/ENSIIE/S4/LOA/PROJET/library_manager_QT/libraryManager/authors.csv");
        f1.setFileName(source);
}

void AuthorManager::addAuthor(Author auth)
{
    if(!isAuthorExist(auth)){
        authors.push_back(auth);
       // append_csv(auth);
        nextID ++;
    }
}

void AuthorManager::load()
{
    qInfo() << ">>>>start loading authors";
   //QFile f1(source);
    QStringList firstColumn;

    f1.open(QIODevice::ReadOnly);
    QTextStream s1(&f1);
    while (!s1.atEnd()){
        QString s=s1.readLine(); // reads line from file
        firstColumn.append(s.split(",").first()); // appends first column to list, ',' is separator
        qInfo() << s.split(",")[0];qInfo() << s.split(",")[1];qInfo() << s.split(",")[2];
        addAuthor(Author(s.split(",")[0].toInt(),s.split(",")[1],s.split(",")[2]));
        if(nextID <= s.split(",")[0].toInt()){
            nextID= s.split(",")[0].toInt() + 1;
        }
    }
    f1.close();
    qInfo() << ">>>>fin load authors";
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
        qInfo() <<  it->toString();
    }
}

void AuthorManager::append_csv(Author auth){

    //QFile data(source);

    if(f1.open(QIODevice::ReadWrite | QIODevice::Append)){
        QTextStream out(&f1);
        out << auth.getId() << "," << auth.getFull_name() << "," << auth.getYear_born() << '\n';
        qInfo() << ">>>>AUthor " +  auth.toString() + " Added succesfully";
    }

    else{
         qInfo() << "error opning :  "+ source;
    }

    f1.close();
    qInfo() << ">>>>AFTER ADDING";
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

Author* AuthorManager::getAuthorByName(QString value)
{
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
        if(  it->getFull_name() == value  ){
            Author*  auth = new Author(it->getId(),it->getFull_name(),it->getYear_born()) ;
            return auth;
        }
    }
    return nullptr;

}

Author* AuthorManager::getAuthorById(int value)
{
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
        if(  it->getId() == value  ){
            Author*  auth = new Author(it->getId(),it->getFull_name(),it->getYear_born()) ;
            return  auth;
        }
    }
    return nullptr;

}

