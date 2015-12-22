#ifndef BASIC_INFO_H
#define BASIC_INFO_H
#include <QString>
#include <QDebug>
class basic_info
{
public:
    basic_info();
    ~basic_info();



    void setid(long &data);
    long id();

    void setname(QString data);
    QString name();

    void setic(long &data);
    long ic();

    void setlv(long &data);
    long lv();

 private:
    long* summonerid;
    QString* summonername;
    int* profileIconId;
    long* summonerLevel;
};


QDebug operator << (QDebug dbg, basic_info b);




#endif // BASIC_INFO_H
