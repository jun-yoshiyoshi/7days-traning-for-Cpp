#include <iostream>
#include "Smartphone.h"

using namespace std;

void usePhone(Itelephone*);
void usePlayer(Imusicplayer*);


int main(int argc, char** argv) {
	Smartphone* pPhone = new Smartphone();

	usePhone((Itelephone*)pPhone);
	usePlayer((Imusicplayer*)pPhone);
	delete pPhone;
	return 0;
}

void usePhone(Itelephone* pPhone) {
	cout << "----usePhone-----" << endl;
	pPhone->call("000-000-0000");
	pPhone->hung_up();
	cout << "-----------------" << endl;

}

void usePlayer(Imusicplayer* pPlayer) {
	cout << "----usePlayer-----" << endl;
	pPlayer->play();
	pPlayer->stop();
	cout << "--------------------" << endl;

}