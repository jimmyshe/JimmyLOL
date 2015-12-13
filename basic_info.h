#ifndef BASIC_INFO_H
#define BASIC_INFO_H
#include <QString>
#include <QDebug>
class basic_info
{
public:
    basic_info();
    ~basic_info();



    void setid(const long &data);
    long id() const;

    void setname(const QString &data);
    QString name();

    void setic(const long &data);
    long ic() const;

    void setilv(const long &data);
    long lv() const;

 private:
    long* summonerid;
    QString* summonername;
    int* profileIconId;
    long* summonerLevel;
};


QDebug operator <<(QDebug dbg, const basic_info &w);




#endif // BASIC_INFO_H
