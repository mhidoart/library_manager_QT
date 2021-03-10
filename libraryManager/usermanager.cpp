#include "usermanager.h"
#include <QFile.h>

UserManager::UserManager(QString value)
{
    source = value;
}

void UserManager::load()
{
    qInfo() << ">>>>start loading authors";

    QStringList firstColumn;
    QFile f1(source);
    f1.open(QIODevice::ReadOnly);
    QTextStream s1(&f1);
    while (!s1.atEnd()){
      QString s=s1.readLine(); // reads line from file
      firstColumn.append(s.split(",").first()); // appends first column to list, ',' is separator
      qInfo() << "creating instance of user";
      int id = s.split(",")[0].toInt();
      QString username = s.split(",")[1];
      QString pass = s.split(",")[2];
      QString cin_val = s.split(",")[3];
      bool admn = s.split(",")[4].toInt();
      addUser(User( id,username, pass,  cin_val, admn  ));

    }
    f1.close();
    qInfo() << ">>>>fin load authors";
    for(std::vector<User>::iterator it = users.begin(); it != users.end(); ++it) {
      qInfo() <<  it->toString();
     }
}

void UserManager::deleteUser_by_id(int id)
{
    qInfo() << "deleting author with id : " + QString::number(id);
    for(std::vector<User>::iterator it = users.begin(); it != users.end(); ++it) {
      if(  it->getId() == id  ){
         users.erase(it);
      }
     }
}

void UserManager::deleteUser(User u)
{
deleteUser_by_id(u.getId());
}

bool UserManager::isUserExist(User u)
{
    for(std::vector<User>::iterator it = users.begin(); it != users.end(); ++it) {
      if(  it->getId() == u.getId()  ){
          return true;
      }
     }
    return false;
}

void UserManager::addUser(User u)
{
    if(!isUserExist(u)){
        users.push_back(u);
    }
}

User* UserManager::getUserByUserName(QString value)
{
    for(std::vector<User>::iterator it = users.begin(); it != users.end(); ++it) {
      if(  it->getUsername() == value  ){
          User*  auth = new User(it->getId(),it->getUsername(),it->getPassword(),it->getCin(),it-> getIsAdmin()) ;
          return auth;
      }
     }
    return nullptr;
}

User* UserManager::getUserById(int value)
{
    for(std::vector<User>::iterator it = users.begin(); it != users.end(); ++it) {
      if(  it->getId() == value  ){
          User*  auth = new User(it->getId(),it->getUsername(),it->getPassword(),it->getCin(),it-> getIsAdmin()) ;
          return auth;
      }
     }
    return nullptr;
}
