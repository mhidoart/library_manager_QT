#ifndef USER_H
#define USER_H
#include <QString>
#include<QDebug>
/**
 * @file user.h
 *@author ASSABBANE Mehdi et CHOUBBY Ibtissam
 * Interface de la classe User
 */
class User
{
public:
    User(int identificateur,QString uname,QString pass, QString cin_val,bool admn  );

    int getId() const;
    void setId(int value);
    QString toString();
    QString getUsername() const;
    void setUsername(const QString &value);

    QString getPassword() const;
    void setPassword(const QString &value);

    QString getCin() const;
    void setCin(const QString &value);

    bool getIsAdmin() const;
    void setIsAdmin(bool value);

private:
    int id;
    QString username;
    QString password;
    QString cin;
    bool isAdmin;

};

#endif // USER_H
