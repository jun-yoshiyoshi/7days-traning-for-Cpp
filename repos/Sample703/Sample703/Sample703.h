#ifndef _SAMPLE703_H_
#define _SAMPLE703_H_ 

#include <iostream>
#include <string>

using namespace std;

class Sample703
{
private:
	string m_str;


public:
	Sample703();
	void setStr(const string str);
	string getStr() const;

	static const int m_cst = 100;

};


#endif