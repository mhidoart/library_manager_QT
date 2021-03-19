#include "ouvrage.h"

Ouvrage::Ouvrage(int identificateur ,QString isbn,QString title,QString abstract,QString dateRelease,int nbrCopy, int type  )
{
    if(identificateur == -1){
    id = getNextID();
    }else{
        id = identificateur;

    }
    setIsbn(isbn);
    setTitle(title);
    setAbstract(abstract);
    setDateRelease(dateRelease);
    setNbrCopy(nbrCopy);
    setType(type);

}

QString Ouvrage::toString()
{
    return "id: " + QString::number(id) + " isbn: " + isbn + " title : " + title + " abstract : " + abstract + "dateRelease : " + dateRelease + " nbr-copy : " + QString::number(nbrCopy) + "category" ;

}

void Ouvrage::addAuthor(Author auth)
{
        authors.push_back(auth);

}

void Ouvrage::addCategory(QString c)
{
    categories.push_back(c);
}


Author* Ouvrage::getAuthorbyName(QString c)
{
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
        if(  it->getFull_name() == c  ){
           // authors.erase(it);
            Author*  auth = new Author(it->getId(),it->getFull_name(),it->getYear_born()) ;
            return auth;
        }
    }
}
bool Ouvrage::isAuthorExist(Author auth)
{
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
        if(  it->getId() == auth.getId()  ){
            return true;
        }
    }
    return false;
}
void Ouvrage::deleteAuthorById(int)
{
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
        if(  it->getId() == id  ){
            authors.erase(it);
        }
    }

}

void Ouvrage::deleteAuthorByName(QString c)
{
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
        if(  it->getFull_name() == c  ){
            deleteAuthorById(it->getId());
        }
    }
}

void Ouvrage::deleteCategory(QString)
{
    qInfo() << "deleting author with id : " + QString::number(id);
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
        if(  it->getId() == id  ){
            authors.erase(it);
        }
    }
}


int Ouvrage::getType() const
{
    return type;
}

void Ouvrage::setType(int value)
{
    type = value;
}

int Ouvrage::getNextID() const
{
    return nextID;
}

void Ouvrage::setNextID(int value)
{
    nextID = value;
}

std::vector<QString> Ouvrage::getCategories() const
{
    return categories;
}

void Ouvrage::setCategories(const std::vector<QString> &value)
{
    categories = value;
}

std::vector<Author> Ouvrage::getAuthors() const
{
    return authors;
}

void Ouvrage::setAuthors(const std::vector<Author> &value)
{
    authors = value;
}




int Ouvrage::getNbrCopy() const
{
    return nbrCopy;
}

void Ouvrage::setNbrCopy(int value)
{
    nbrCopy = value;
}

QString Ouvrage::getDateRelease() const
{
    return dateRelease;
}

void Ouvrage::setDateRelease(const QString &value)
{
    dateRelease = value;
}

QString Ouvrage::getAbstract() const
{
    return abstract;
}

void Ouvrage::setAbstract(const QString &value)
{
    abstract = value;
}

QString Ouvrage::getTitle() const
{
    return title;
}

void Ouvrage::setTitle(const QString &value)
{
    title = value;
}

QString Ouvrage::getIsbn() const
{
    return isbn;
}

void Ouvrage::setIsbn(const QString &value)
{
    isbn = value;
}

int Ouvrage::getId() const
{
    return id;
}

void Ouvrage::setId(int value)
{
    id = value;
}
