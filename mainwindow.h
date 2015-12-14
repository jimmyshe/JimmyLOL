#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "networker.h"
#include "basic_info.h"
#include <QJsonDocument>
#include <QComboBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>

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
       QString url(QString("https://")+
                   server+QString(".api.pvp.net/api/lol/na/v1.4/summoner/by-name/")+
                   summonername+QString("?api_key=")+
                   key);
       //qDebug()<<url;
       netWorker->get(url);
    }

    NetWorker *netWorker;
};




#endif // MAINWINDOW_H
