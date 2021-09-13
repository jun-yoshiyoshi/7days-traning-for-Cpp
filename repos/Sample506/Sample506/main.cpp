#include <iostream>
#include<string>
#include "Bird.h"
#include "Crow.h"
#include "Chickin.h"

using namespace std;

int main(int argc, char** argv) {
	Bird* pBird1, * pBird2;
	pBird1 = new Crow();
	pBird2 = new Chickin();

	pBird1->fly();
	pBird2->fly();

	pBird1->sing();
	pBird2->sing();

	delete pBird1, pBird2;

	return 0;
}
