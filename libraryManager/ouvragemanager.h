#ifndef OUVRAGEMANAGER_H
#define OUVRAGEMANAGER_H
#include "ouvrage.h"
#include <QFile>
class OuvrageManager
{
public:
    OuvrageManager(QString);

    void addOuvrage(Ouvrage);
    Ouvrage* getOuvrageByTitle(QString);
    void setNbrCopies(QString,int);
    void addCategoryToOuvrage(QString ouvrage,QString category);
    void removeCategoryFromOuvrage(QString catego, QString titleOuvrage);
    bool isOuvrageExist(Ouvrage);
    void load();
    void save();

    int getNextId();

private:
    QString source;
    int nextID;
    QFile f1;
    std::vector<Ouvrage> ouvrages;

};

#endif // OUVRAGEMANAGER_H
