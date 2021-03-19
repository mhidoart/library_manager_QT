#include "author.h"
/**
 * @file Author.cpp
 *@author ASSABBANE Mehdi et CHOUBBY Ibtissam
 *@brief Classe modèle d'auteur
 */

/**
 * Constructeur avec paramètres
 * @param id c'est le premier argument , c'est l id de chaque auteur et il s'incrémente automatiquement
 * @param fname c'est le deuxième argument ,le nom complet de l'auteur
 * @param year_b c'est le troixième argument ,l'année de naissance de l'auteur
 * **/
Author:: Author(int id,QString fname,QString year_b)
{
    setId(id);
    setFull_name(fname);
    setYear_born(year_b);
}
/**
 * Fonction toString
 *
* **/
QString Author::toString(){
    return "id: " + QString::number(id) + " Fullname: " + full_name + " Year_Born : " + year_born;
}
/**
 * Fonction pour récupérer l'id de l'auteur
 * @return l'id de l'auteur
* **/
int Author::getId() const
{
    return  id;
}
/**
 * Fonction qui affecte une valeur à l'id
 * @param value, qu'on va affecter à l'id
* **/
void Author::setId(int value)
{
    id=value;
}
/**
 * Fonction qui réccupére le nom de l'auteur
 * @return le nom de l'auteur de type Qstring
* **/
QString Author::getFull_name() const
{
    return full_name;
}
/**
 * Fonction qui affecte une valeur au nom complet de l'auteur
 * @param value, qu'on va affecter à la variable full_name
* **/
void Author::setFull_name(const QString &value)
{
    full_name = value;
}
/**
 * Fonction qui réccupére l'année de naissance
 * @return l'année de naissance de l'auteur
* **/
QString Author::getYear_born() const
{
    return year_born;
}
/**
 * Fonction qui affecte une valeur au à la variable year_born
 * @param value, qu'on va affecter à la variable year_born
* **/
void Author::setYear_born(const QString &value)
{
    year_born = value;
}
