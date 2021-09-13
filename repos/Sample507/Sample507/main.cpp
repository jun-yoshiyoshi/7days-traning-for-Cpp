#include <iostream>
#include<string>
#include "Bird.h"
#include "Crow.h"
#include "Chickin.h"

using namespace std;

int main(int argc, char** argv) {
	Bird* pBird1, * pBird2 ,*pBird3;
	pBird1 = new Crow();
	pBird2 = new Chickin();
	pBird3 = new Bird();

	pBird1->fly();
	pBird2->fly();
	pBird3->fly();

	pBird1->sing();
	pBird2->sing();
	pBird3->sing();

	delete pBird1, pBird2,pBird3;

	return 0;
}
