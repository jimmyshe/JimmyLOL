#ifndef NETWORKER_H
#define NETWORKER_H

#include <QObject>

class Networker : public QObject
{
    Q_OBJECT
public:
    explicit Networker(QObject *parent = 0);

signals:

public slots:
};

#endif // NETWORKER_H
