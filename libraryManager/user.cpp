#include "user.h"

User::User(int identificateur,QString uname,QString pass, QString cin_val,bool admn  )
{
    id = identificateur;
username = uname;
password = pass;
cin = cin_val;
isAdmin = admn;
}

bool User::getIsAdmin() const
{
    return isAdmin;
}

void User::setIsAdmin(bool value)
{
    isAdmin = value;
}

QString User::getCin() const
{
    return cin;
}

void User::setCin(const QString &value)
{
    cin = value;
}

QString User::getPassword() const
{
    return password;
}

void User::setPassword(const QString &value)
{
    password = value;
}

QString User::getUsername() const
{
    return username;
}

void User::setUsername(const QString &value)
{
    username = value;
}

int User::getId() const
{
    return id;
}

void User::setId(int value)
{
    id = value;
}

QString User::toString()
{
    QString adm = "";
    if(isAdmin){
        adm = "Admin";
    }else{
        adm = " client";
    }
    return  "Username : " + username + " pass : " + password + " CIN : " + cin + " Role: " + adm;
}
