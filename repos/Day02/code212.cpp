#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a = 100;
    cout << "aの値は" << a;
    cout << "大きさは" << sizeof(int) << "byte";
    cout << "アドレスは" << hex << &a << "です" << endl;
    return 0;
}
