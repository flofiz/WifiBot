#ifndef MYROBOT_H
#define MYROBOT_H

#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QDebug>
#include <QTimer>
#include <QMutex>
#include "data.h"

class MyRobot : public QObject {
    Q_OBJECT
public:
    explicit MyRobot(QObject *parent = nullptr);
    void doConnect();
    void disConnect();
    QByteArray DataToSend;
    QByteArray DataReceived;
    QMutex Mutex;
    Data* getData();
    void avancer();
    void stop();
    void droite();

signals:
    void updateUI(Data* data);
public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
    void MyTimerSlot();
    short Crc16(QByteArray* Adresse_tab, unsigned char tailleMax);
    void droite();
    void gauche();
    void reculer();

private:
    QTcpSocket *socket;
    QTimer *TimerEnvoi;
    Data* data;
};

#endif // MYROBOT_H
