#ifndef _ITELEPHONE_H_
#define _ITELEPHONE_H_

#include  <iostream>
using namespace std;

class Itelephone
{
public:
	virtual void call(string number) = 0;
	virtual void hung_up() = 0;
};
#endif
