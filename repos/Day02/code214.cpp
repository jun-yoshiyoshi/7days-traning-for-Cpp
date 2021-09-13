#include <iostream>
using namespace std;

void swap(int *, int *);

int main(int argc, char **argv)
{
    int a = 1, b = 2;
    cout << "a=" << a << "b=" << b << endl;
    swap(&a, &b);
    cout << "a=" << a << "b=" << b << endl;
    return 0;
}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}