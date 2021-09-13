#ifndef _SMARTPHONE_H_
#define _SMARTPHONE_H_

#include <iostream>
#include "Imusicplayer.h"
#include "Itelephone.h"

using namespace std;

class Smartphone : public Itelephone, public Imusicplayer
{
public:
	void call(string number);
	void hung_up();
	void play();
	void stop();
};

#endif