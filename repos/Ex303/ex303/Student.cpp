#include "Student.h"

void Student::setName(string name) {
	m_name = name;
}
string Student::getName() {
	return m_name;
}

void Student::setAge(int age) {
	m_age = age;
}
int Student::getAge() {
	return m_age;
}
void Student::setGrade(int grade) {
	m_grade = grade;
}
int Student::getGrade() {
	return m_grade;
}
void Student::setCls(string cls) {
	m_cls = cls;
}
string Student::getCls() {
	return m_cls;
}

void Student::showInfo() {
	cout << "---SHOW INFORMATION---" << endl;
	cout << "name:" << m_name << " old:" << m_age << " grade:" << m_grade << " cls:" << m_cls << endl;
}
