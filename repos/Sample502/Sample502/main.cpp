#include <iostream>
#include "Dog.h"
#include "Cat.h"

using namespace std;

int main(int argc, char** argv) {
	Cat* pCat = new Cat();
	cout << pCat->getname() << endl;
	pCat->cry();
	delete pCat;

	Dog* pDog = new Dog();
	cout << pDog->getname() << endl;
	pDog->cry();
	delete pDog;

	return 0;
}