#ifndef _AMBULANCE_H_
#define _AMBURANCE_H_

#include "Car.h"

class Ambulance :
    public Car
{
public:
    Ambulance();
    virtual ~Ambulance();

    void savepeople();

private:
    int m_number;
};

#endif

