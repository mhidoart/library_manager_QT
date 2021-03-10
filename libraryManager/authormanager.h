#ifndef AUTHORMANAGER_H
#define AUTHORMANAGER_H
#include <string>
#include "author.h"
#include<QDebug>

class AuthorManager
{
public:
    AuthorManager(QString source);
    void addAuthor(Author);
    void load();
    void deleteAuthor_by_id(int);
    void deleteAuthor(Author);
    bool isAuthorExist(Author);
    Author* getAuthorByName(QString value);
    Author*  getAuthorById(int value);
private:
    QString source;
    std::vector<Author> authors;
};

#endif // AUTHORMANAGER_H
