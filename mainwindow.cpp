#include "mainwindow.h"

#include <QComboBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>



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





MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{

    QComboBox *serverList = new QComboBox(this);
    serverList->addItem(tr("北美"), QLatin1String("na"));
    QLineEdit *summonerName = new QLineEdit(tr("输入召唤师名"), this);
    QPushButton *refreshButton = new QPushButton(tr("Refresh"), this);

    QHBoxLayout *summoner_layout = new QHBoxLayout;
    summoner_layout->setDirection(QBoxLayout::LeftToRight);
    summoner_layout->addWidget(summonerName);
    summoner_layout->addWidget(serverList);
    summoner_layout->addWidget(refreshButton);


    QWidget *mainWidget = new QWidget(this);
    QVBoxLayout *mainLayout = new QVBoxLayout(mainWidget);
    mainLayout->addLayout(summoner_layout);
    setCentralWidget(mainWidget);
    resize(320, 120);
    setWindowTitle(tr("JimmyLOL"));


    connect(d->netWorker, &NetWorker::finished, [=] (QNetworkReply *reply) {
        qDebug() << reply;
    });

    /*
    connect(refreshButton, &QPushButton::clicked, [=] () {
        d->fetchBasicinfo(summonerName->text(),serverList->itemData(serverList->currentIndex()).toString(),QString("3c58893b-0bb4-4e41-a32a-6089f0b0b315"));
    });*/
}


MainWindow::~MainWindow()
{

}
