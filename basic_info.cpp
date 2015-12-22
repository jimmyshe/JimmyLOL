#include "basic_info.h"

basic_info::basic_info()
{
    summonerid = new long;
    summonerLevel = new long;
    summonername = new QString;
    profileIconId = new int;
}

basic_info::~basic_info()
{
    delete summonerid;
    delete summonerLevel;
    delete profileIconId;
    delete summonername;
}

void basic_info::setid(long &data)
{
    *summonerid = data;
}

double basic_info::id()
{
    return *summonerid;
}

void basic_info::setname(QString data)
{
    *summonername = data;
}

QString basic_info::name()
{
    return *summonername;
}

void basic_info::setic(long &data)
{
    *profileIconId = data;
}

double basic_info::ic()
{
    return *profileIconId;
}

void basic_info::setlv( long &data)
{
    *summonerLevel = data;
}

double basic_info::lv()
{
    return *summonerLevel;
}


QDebug operator <<(QDebug dbg,basic_info b)
{
    dbg.nospace() << "("
                  << "Name: " << b.name() << "; "
                  << "Id: " << b.id() << ";"
                  << ")";
    return dbg.space();
}
