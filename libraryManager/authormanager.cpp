#include "authormanager.h"
#include <qfile.h>

/**
 * @file authormanager.cpp
 *@author ASSABBANE Mehdi et CHOUBBY Ibtissam
 *@brief Classe manager de la classe auteur
 */

/**
 * Constructeur avec paramètres
 * @param value c'est le premier argument,c'est le chemin du fichier csv qu'on va utiliser pour stocker et charger  les données
 * **/
AuthorManager::AuthorManager(QString value ){
        source = value;
        f1.setFileName(source);
         nextID = 0;
}
/**
 * Fonction pour ajouter un auteur
 * @param auth de type autheur
 * @brief on fait un test sur l'id si c'est le premier auteur à ajouté , on lui incrémente
 * avec la fonction getNextId() et on fait un appel réccursive de la fonction
 * après on test si l'auteur n'existe pas on l'ajoute dans notre vecteur et au fichier csv
* **/
void AuthorManager::addAuthor(Author auth)
{
    // a new author
    if(auth.getId() == -1){
        // affect a new ID
        auth.setId(getNextId());
        addAuthor(auth);


    }else{
        // an author that already (imported from database)
        if(!isAuthorExist(auth)){
            authors.push_back(auth);
           append_csv(auth);
        }
    }

}
/**
 * Fonction pour charger les données du fichier csv
 * @brief on ouvre notre fichier f1 en mode readOnly ,on teste si on a atteint
 * la fin du fichier sinon on lis ligne par ligne on crée un autheur
 * et on l'ajoute en appelant la méthode addAuthor()
* **/
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

    }
    f1.close();

    qInfo() << ">>>>fin load authors";
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
        qInfo() <<  it->toString();
    }
}
/**
 * Fonction ajouter un auteur dans le fichier csv
 * @param auth , l'auteur qu'on va ajouter au fichier
 * @brief on ouvre le fichier on mode append et on ajouter l'auteur
* **/
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
/**
 * Fonction pour sauvegarder le vecteur complet dans le fichier csv
 * @brief on ouvre le fichier en mode ReadWrite , on écrase son contenu
 * on parcour le vecteur et on ajoute chaque auteur dans le fichier
* **/
void AuthorManager::saveAll()
{

    if(f1.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)){
        QTextStream out(&f1);
        for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
            out << it->getId() << "," <<  it->getFull_name() << "," << it->getYear_born() << '\n';

        }
    }

    else{
         qInfo() << "error opning :  "+ source;
    }

    f1.close();
}
/**
 * Fonction supprimer auteur par id
 * @param l'id de l'auteur à supprimé
 * @brief on parcours le vecteur , et on compare les ids des auteurs avec l'id
 * passé en paramètre
 * et on met à jour le fichier csv
* **/
void AuthorManager::deleteAuthor_by_id(int id)
{
    qInfo() << "deleting author with id : " + QString::number(id);
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
        if(  it->getId() == id  ){
            authors.erase(it);
        }
    }
    //export changes to database
    saveAll();

}
/**
 * Fonction supprimer auteur
 * @param l'auteur à supprimé
 * @brief on réccupère l'id de l'auteur passé en paramètre et on appelle
 * la fonction delete_author_by_id.
* **/
void AuthorManager::deleteAuthor(Author auth)
{
    deleteAuthor_by_id(auth.getId());
}
/**
 * Fonction vérifier l'existance d'un auteur
 * @param l'auteur à vérifié
 * @brief on réccupère l'id de l'auteur passé en paramètre et  on parcour le vecteur
 * et on compare l'id du paramètre avec les id des auteurs s'ils sont
 * égaux on retourne true , sinon false
 *@return booléan.
* **/
bool AuthorManager::isAuthorExist(Author auth)
{
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
        if(  it->getId() == auth.getId()  ){
            return true;
        }
    }
    return false;
}
/**
 * Fonction récupérer un auteur par son nom
 * @param value,le nom de l'auteur
 * @brief on parcour le vecteur et on compare la valeur passé en paramètre
 * avec la variable du vecteur , si ils sont égaux on crée un auteur
 * et on le retourne l'auteur sinon
 *@return Autheur .
* **/
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
/**
 * Fonction récupérer un auteur par son ID
 * @param value,l'id de l'auteur
 * @brief on parcour le vecteur et on compare la valeur passé en paramètre
 * avec la variable du vecteur , si ils sont égaux on crée un auteur
 * et on le retourne l'auteur sinon
 * on retourn un objet null
 *@return Auteur .
* **/
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
/**
 * Fonction incrémenter l'id
 * @brief on compare le dernier ID avec l'id du dernier auteur , si ce dernier est plus
 * grand on affecte à nextId sa valeur et on l'incrément puis on le retourne.
 *@return nextID .
* **/
int AuthorManager::getNextId()
{
    for(std::vector<Author>::iterator it = authors.begin(); it != authors.end(); ++it) {
        if(  it->getId() >= nextID  ){
            nextID = it->getId();
        }
    }
    nextID ++;// the next free id
    return nextID;
}

