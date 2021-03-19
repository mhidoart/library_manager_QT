#ifndef AUTHORMANAGER_H
#define AUTHORMANAGER_H
#include <string>
#include "author.h"
#include<QDebug>
#include<QFile>


class AuthorManager
{
public:
    static     int nextID   ;

    AuthorManager(QString source);
    void addAuthor(Author);
    void load();
    void append_csv(Author auth);
    void saveAll();
    void deleteAuthor_by_id(int);
    void deleteAuthor(Author);
    bool isAuthorExist(Author);
    Author* getAuthorByName(QString value);
    Author*  getAuthorById(int value);
    int getNextId();
private:
    QString source;
    QFile f1;
    std::vector<Author> authors;

};

#endif // AUTHORMANAGER_H
