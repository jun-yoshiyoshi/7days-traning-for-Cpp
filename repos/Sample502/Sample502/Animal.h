#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
	string m_name;
	string m_voice;

public:
	Animal();
	virtual ~Animal();

	string getname();
	void cry();


protected:
	void init(string name, string voice);
};
#endif

