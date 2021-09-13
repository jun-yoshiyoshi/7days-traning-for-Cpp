#ifndef _SPARROW_H_
#define _SPARROW_H_

#include "Bird.h"

class Sparrow :
    public Bird
{
public:
    Sparrow();
    virtual ~Sparrow();
    void sing();
    void fly();
};

#endif