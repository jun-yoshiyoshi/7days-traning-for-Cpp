#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a = 100;
    cout << "a�̒l��" << a;
    cout << "�傫����" << sizeof(int) << "byte";
    cout << "�A�h���X��" << hex << &a << "�ł�" << endl;
    return 0;
}
