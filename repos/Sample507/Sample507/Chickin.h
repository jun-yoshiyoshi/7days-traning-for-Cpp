#ifndef _CHICKIN_H_
#define _CHICKIN_H_
#include "Bird.h"
class Chickin :
    public Bird
{
public:
    Chickin();
    virtual ~Chickin();
    void sing();
    void fly();
};

#endif

