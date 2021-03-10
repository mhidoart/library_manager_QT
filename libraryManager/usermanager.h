#ifndef USERMANAGER_H
#define USERMANAGER_H
#include<QDebug>
#include "user.h"

class UserManager
{
public:
    UserManager(QString);
    void load();
    void deleteUser_by_id(int);
    void deleteUser(User);
    bool isUserExist(User);
    void addUser(User);
    User* getUserByUserName(QString value);
    User* getUserById(int value);
private:
    QString source;
    std::vector<User> users;
};

#endif // USERMANAGER_H
