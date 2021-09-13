#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string m_name;
	int m_grade;
	string m_cls;
	int m_age;
public:
	void setName(string name);
	string getName();
	int getGrade();
	void setGrade(int grade);
	void setCls(string cls);
	string getCls();
	int getAge();
	void setAge(int age);
	void showInfo();
};
#endif

