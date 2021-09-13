#include <iostream>
#include "Student.h"

using namespace std;

int main(int argc, char** argv) {
	Student s[2];

	for (int i = 0; i < 2; ++i) {
		cout << "--INPUT STUDENT " << (i + 1) << " INFORMATION---" << endl;
		string name, cls;
		int age, grade;
		cout << "name" << endl;
		cin >> name;
		cout << "cls" << endl;
		cin >> cls;
		cout << "age" << endl;
		cin >> age;
		cout << "grade" << endl;
		cin >> grade;

		s[i].setName(name); s[i].setCls(cls); s[i].setAge(age); s[i].setGrade(grade);
	}
	for (int i = 0; i < 2; ++i) {
		cout << "----INPUT" << (i + 1) << "CONFORMATION----- " << endl;
		cout << "name:" << s[i].getName();
		cout << " age:" << s[i].getAge();
		cout << " grade:" << s[i].getGrade();
		cout << " cls:" << s[i].getCls() << endl;
	}
	for(int i=0;i<2;++i){
	s[i].showInfo();
	}
	return 0;
}