#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a = 100;
    int *p = NULL;
    cout << "a=" << a << endl;
    p = &a;
    cout << "*p=" << *p << endl;
    *p = 200;
    cout << "*p�̒l��200�ɕύX" << endl;
    cout << "a=" << a << endl;
    return 0;
}