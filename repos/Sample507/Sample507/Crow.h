#ifndef _CROW_H_
#define _CROW_H_
#include "Bird.h"

class Crow :
    public Bird
{
public:
    Crow();
    virtual ~Crow();
    void sing();
    void fly();
};

#endif

