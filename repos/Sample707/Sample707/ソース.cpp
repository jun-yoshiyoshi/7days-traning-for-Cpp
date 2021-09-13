#include <iostream>
#include "Component1.h"
#include "Component2.h"

using namespace std;

Icomponent* getComponent(int version) {
	if (version == 1) {
		return (Icomponent*)(new Component1());
	}
	return (Icomponent*)(new Component2());
}

int main(int argc, char** argv) {

	Icomponent* pComp = NULL;
	cout << "----component1.0-----" << endl;
	pComp = getComponent(1);
	pComp->func();
	delete pComp;

	cout << "----component2.0-----" << endl;
	pComp = getComponent(2);
	pComp->func();
	delete pComp;
	return 0;
}