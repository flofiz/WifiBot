#include "data.h"

Data::Data()
{

}
int Data::getSpeed()
{
    return this->speed;
}
void Data::setSpeed(int speed)
{
    this->speed = speed;
}
unsigned char Data::getBatLvl()
{
    return this->batLvl;
}
void Data::setBatLvl(unsigned char batLvl)
{
    this->batLvl=batLvl;
}
unsigned char Data::getIR()
{
    return this->IR;
}
void Data::setIR(unsigned char IR)
{
    this->IR=IR;
}
unsigned char Data::getIR2()
{
    return this->IR2;
}
void Data::setIR2(unsigned char IR2)
{
    this->IR2=IR2;
}
long Data::getOdometry()
{
    return this->odometry;
}
void Data::setOdometry(long odometry)
{
    this->odometry = odometry;
}

