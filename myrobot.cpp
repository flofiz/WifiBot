// myrobot.cpp

#include "myrobot.h"

MyRobot::MyRobot(QObject *parent) : QObject(parent) {
    DataToSend.resize(9);
    DataToSend[0] = 0xFF;
    DataToSend[1] = 0x07;
    DataToSend[2] = 0x0;
    DataToSend[3] = 0x0;
    DataToSend[4] = 0x0;
    DataToSend[5] = 0x0;
    DataToSend[6] = 0x0;
    DataToSend[7] = 0x0;
    DataToSend[8] = 0x0;
    DataReceived.resize(21);
    TimerEnvoi = new QTimer();
    // setup signal and slot
    connect(TimerEnvoi, SIGNAL(timeout()), this, SLOT(MyTimerSlot())); //Send data to wifibot timer
}


void MyRobot::doConnect() {
    socket = new QTcpSocket(this); // socket creation
    connect(socket, SIGNAL(connected()),this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()),this, SLOT(disconnected()));
    connect(socket, SIGNAL(bytesWritten(qint64)),this, SLOT(bytesWritten(qint64)));
    connect(socket, SIGNAL(readyRead()),this, SLOT(readyRead()));
    qDebug() << "connecting..."; // this is not blocking call
    //socket->connectToHost("LOCALHOST", 15020);
    socket->connectToHost("192.168.1.106", 15020); // connection to wifibot
    // we need to wait...
    if(!socket->waitForConnected(5000)) {
        qDebug() << "Error: " << socket->errorString();
        return;
    }
    TimerEnvoi->start(75);

}

void MyRobot::disConnect() {
    TimerEnvoi->stop();
    socket->close();
}

void MyRobot::connected() {
    qDebug() << "connected..."; // Hey server, tell me about you.
}

void MyRobot::disconnected() {
    qDebug() << "disconnected...";
}

void MyRobot::bytesWritten(qint64 bytes) {
    qDebug() << bytes << " bytes written...";
}

void MyRobot::readyRead() {
    //qDebug() << "reading..."; // read the data from the socket
    DataReceived = socket->readAll();
    emit updateUI(DataReceived);
    qDebug() << DataReceived[0] << DataReceived[1] << DataReceived[2];
}

void MyRobot::MyTimerSlot() {
    //qDebug() << "Timer...";
    while(Mutex.tryLock());
    socket->write(DataToSend);
    Mutex.unlock();
}

void MyRobot::avancer()
{
    qDebug() << "avancer";
    DataToSend[2] = 0x78;
    DataToSend[4] = 0x78;
    DataToSend[6] = 0x50;
    short crc = Crc16(&DataToSend,6);
    DataToSend[7] = char(crc);
    DataToSend[8] = char(crc >> 8);
    qDebug() << crc;
}

short MyRobot::Crc16(QByteArray* Adresse_tab, unsigned char tailleMax){
    const unsigned char *data = ((const unsigned char*)Adresse_tab->constData())+1;
    unsigned int crc = 0xFFFF;
    unsigned int Polynome = 0xA001;
    unsigned int Parity = 0;
    crc = 0xFFFF;
    Polynome = 0xA001;

    for(int CptOctet = 0; CptOctet < tailleMax; CptOctet++)
    {
        crc ^= *(data+CptOctet);
        for (int CptBit = 0; CptBit <= 7 ; CptBit++){
            Parity= crc;
            crc >>= 1;
            if (Parity%2 == true) crc ^= Polynome;
        }
    }
    return crc;
}

void MyRobot::stop()
{
    DataToSend[2] = 0x0;
    DataToSend[4] = 0x0;
    DataToSend[6] = 0x0;
    short crc = Crc16(&DataToSend,6);
    DataToSend[7] = char(crc);
    DataToSend[8] = char(crc >> 8);
    qDebug() << crc;
}
