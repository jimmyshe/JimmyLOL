#include "basic_info.h"

basic_info::basic_info()
{
    summonerid = new long;
    summonerLevel = new long;
    summonername = new QString;
    profileIconId = new int;
}

void basic_info::setid(const long &data)
{
    *summonerid = data;
}

long basic_info::id() const
{
    return *summonerid;
}

void basic_info::setname(const QString &data)
{
    *summonername = data;
}

QString basic_info::name()
{
    return *summonername;
}

void basic_info::setic(const long &data)
{
    *profileIconId = data;
}

long basic_info::ic() const
{
    return *profileIconId;
}

void basic_info::setilv(const long &data)
{
    *summonerLevel = data;
}

long basic_info::lv() const
{
    return *summonerLevel;
}


QDebug operator <<(QDebug dbg,basic_info &b)
{
    dbg.nospace() << "("
                  << "Name: " << b.name() << "; "
                  << "Id: " << b.id() << ";"
                  << ")";
    return dbg.space();
}
