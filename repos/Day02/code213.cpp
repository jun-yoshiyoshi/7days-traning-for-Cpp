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
    cout << "*pの値を200に変更" << endl;
    cout << "a=" << a << endl;
    return 0;
}