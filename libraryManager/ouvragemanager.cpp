#include "ouvragemanager.h"

OuvrageManager::OuvrageManager(QString s)
{
    source = s;
    nextID = 0;

}
int OuvrageManager::getNextId()
{
    for(std::vector<Ouvrage>::iterator it = ouvrages.begin(); it != ouvrages.end(); ++it) {
        if(  it->getId() >= nextID  ){
            nextID = it->getId();
        }
    }
    nextID ++;// the next free id
    return nextID;
}

void OuvrageManager::addOuvrage(Ouvrage o)
{
    if(!isOuvrageExist(o)){
        ouvrages.push_back(o);
    }
}

Ouvrage* OuvrageManager::getOuvrageByTitle(QString titles)
{
    for(std::vector<Ouvrage>::iterator it = ouvrages.begin(); it != ouvrages.end(); ++it) {
        if(  it->getTitle() == titles  ){
            //ouvrages.erase(it);
            return new Ouvrage(it->getId(), it->getIsbn(),it->getTitle(),it->getAbstract(),it->getDateRelease(),it->getNbrCopy(),it->getType());
        }
    }
    return nullptr;
}

void OuvrageManager::setNbrCopies(QString title,int copy)
{
    Ouvrage * ouv =  getOuvrageByTitle(title);
    if(ouv != nullptr){
        ouv->setNbrCopy(copy);
    }

}

void OuvrageManager::addCategoryToOuvrage(QString ouvrage, QString category)
{
    Ouvrage * ouv =  getOuvrageByTitle(ouvrage);
    if(ouv != nullptr){
        ouv->addCategory(category);
    }
}

void OuvrageManager::removeCategoryFromOuvrage(QString catego, QString titleOuvrage)
{
    Ouvrage * ouv =  getOuvrageByTitle(titleOuvrage);
    if(ouv != nullptr){
        ouv->deleteCategory(catego);
    }

}

bool OuvrageManager::isOuvrageExist(Ouvrage o)
{
    if(nullptr != getOuvrageByTitle(o.getTitle())){
        return true;
    }
    return false;
}

void OuvrageManager::load()
{

}

void OuvrageManager::save()
{

}


