#include <iostream>
#include "Student.h"

using namespace std;

int main(int argc, char** argv) {
	Student s;
	string name, cls;
	int age, grade;

	cout << "name" << endl;
	cin >>name;
	cout << "cls" << endl;
	cin >> cls;
	cout << "age" << endl;
	cin >> age;
	cout << "grade" << endl;
	cin >> grade;

	s.setName(name); s.setCls(cls); s.setAge(age); s.setGrade(grade);
	cout << "----INPUT CONFORMATION-----" << endl;
	cout << "name:" << s.getName();
	cout << " age:" << s.getAge();
	cout << " grade:" << s.getGrade();
	cout << " cls:" << s.getCls()<<endl;
	s.showInfo();
	return 0;
}