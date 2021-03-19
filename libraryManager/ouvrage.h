#ifndef OUVRAGE_H
#define OUVRAGE_H
#include <QString>
#include<QDebug>
#include "author.h"
/**
 * @file Ouvrage.h
 *@author ASSABBANE Mehdi et CHOUBBY Ibtissam
 * Interface de la classe Ouvrage
 */
class Ouvrage
{
public:
    Ouvrage(int id ,QString isbn,QString title,QString abstract,QString dateRelease,int nbrCopy, int type );

    QString toString();

    void addAuthor(Author auth);
    void addCategory(QString);

    Author* getAuthorbyName(QString);
    void deleteAuthorById(int);
    void deleteAuthorByName(QString);
    void deleteCategory(QString);
    bool isAuthorExist(Author auth);

    //getters and setters
    int getId() const;
    void setId(int value);

    QString getIsbn() const;
    void setIsbn(const QString &value);

    QString getTitle() const;
    void setTitle(const QString &value);

    QString getAbstract() const;
    void setAbstract(const QString &value);

    QString getDateRelease() const;
    void setDateRelease(const QString &value);

    int getNbrCopy() const;
    void setNbrCopy(int value);

    int getType() const;
    void setType(int value);



    std::vector<Author> getAuthors() const;
    void setAuthors(const std::vector<Author> &value);

    std::vector<QString> getCategories() const;
    void setCategories(const std::vector<QString> &value);

    int getNextID() const;
    void setNextID(int value);

private:

    int id;
    QString isbn;
    QString title;
    QString abstract;
    QString dateRelease;
   int nbrCopy;
   int type;
   std::vector<Author> authors;
   std::vector<QString> categories;
   int nextID;

};

#endif // OUVRAGE_H
