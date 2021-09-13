#ifndef	_BIRD_H_
#define	_BIRD_H_
#include<iostream>
#include<string>

using namespace std;

class Bird
{
public:
	Bird();
	virtual ~Bird();
	virtual void sing();

	virtual void fly();
};
#endif

