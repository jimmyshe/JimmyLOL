#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "networker.h"
#include "basic_info.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    class Private;
    friend class Private;
    Private *d;
};


class MainWindow::Private
{
public:
    Private()
    {
        netWorker = NetWorker::instance();
    }

    void fetchBasicinfo(const QString &summonername,const QString &server,QString key) const
    {
        netWorker->get(QString("https://%2.api.pvp.net/api/lol/na/v1.4/summoner/by-name/%1?api_key=%3").arg(summonername).arg(server).arg(key));
    }

    NetWorker *netWorker;
};




#endif // MAINWINDOW_H
