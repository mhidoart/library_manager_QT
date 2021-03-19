#include "ouvragemanager.h"

OuvrageManager::OuvrageManager(QString s)
{
    source = s;
    f1.setFileName(source);
    nextID = 0;
    getNextId();
    load();

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
    qInfo() << ">>>>start loading Ouvrages";
   //QFile f1(source);
    QStringList firstColumn;

    f1.open(QIODevice::ReadOnly);
    QTextStream s1(&f1);
    while (!s1.atEnd()){
        QString s=s1.readLine(); // reads line from file
        firstColumn.append(s.split(",").first()); // appends first column to list, ',' is separator
        qInfo() << s.split(",")[0];qInfo() << s.split(",")[1];qInfo() << s.split(",")[2];
        addOuvrage(Ouvrage(s.split(",")[0].toInt(),s.split(",")[1],s.split(",")[2],s.split(",")[3],s.split(",")[4],s.split(",")[5].toInt(),s.split(",")[6].toInt()));

    }
    f1.close();
}

void OuvrageManager::save()
{

    if(f1.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)){
        QTextStream out(&f1);
        for(std::vector<Ouvrage>::iterator it = ouvrages.begin(); it != ouvrages.end(); ++it) {
            std::vector<Author> auths = it->getAuthors();
            QString authIDS = "";
            for(std::vector<Author>::iterator itauth = auths.begin(); itauth != auths.end(); ++itauth){
                authIDS = authIDS +  "," + itauth->getId();
            }

            std::vector<QString> Categos = it->getCategories();
            QString s ="";

            for(std::vector<QString>::iterator catit = Categos.begin(); catit != Categos.end(); ++catit){
                s = s +  "," + *catit;
            }

            out << it->getId() << "," <<  it->getIsbn() << "," << it->getTitle() << "," << it->getAbstract()<< "," << it->getDateRelease()<< "," << it->getNbrCopy() << "," << it->getType() << "," << s << "," <<authIDS << '\n'  ;

        }
    }

    else{
         qInfo() << "error opning :  "+ source;
    }

    f1.close();
}


