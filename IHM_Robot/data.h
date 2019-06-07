#ifndef DATA_H
#define DATA_H

#include <QByteArray>

class Data
{
public:
    Data();
    int getSpeed();
    void setSpeed(int speed);
    unsigned char getBatLvl();
    void setBatLvl(unsigned char batLvl);
    unsigned char getIR();
    void setIR(unsigned char IR);
    unsigned char getIR2();
    void setIR2(unsigned char IR2);
    long getOdometry();
    void setOdometry(long odometry);
private:
    int speed;
    unsigned char batLvl,IR,IR2;
    long odometry;
};

#endif // DATA_H
