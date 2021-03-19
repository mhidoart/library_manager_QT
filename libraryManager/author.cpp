#include "author.h"

Author:: Author(int id,QString fname,QString year_b)
{
    setId(id);
    setFull_name(fname);
    setYear_born(year_b);
}
QString Author::toString(){
    return "id: " + QString::number(id) + " Fullname: " + full_name + " Year_Born : " + year_born;
}

int Author::getId() const
{
    return  id;
}

void Author::setId(int value)
{
    id=value;
}

QString Author::getFull_name() const
{
    return full_name;
}

void Author::setFull_name(const QString &value)
{
    full_name = value;
}

QString Author::getYear_born() const
{
    return year_born;
}

void Author::setYear_born(const QString &value)
{
    year_born = value;
}
