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
    double id();

    void setname(QString data);
    QString name();

    void setic(long &data);
    double ic();

    void setlv(long &data);
    double lv();

 private:
    double* summonerid;
    QString* summonername;
    double* profileIconId;
    double* summonerLevel;
};


QDebug operator << (QDebug dbg, basic_info b);




#endif // BASIC_INFO_H
