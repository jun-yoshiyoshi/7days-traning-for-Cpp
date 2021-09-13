#include <iostream>
#include <string>

using namespace std;

namespace A
{
    int power;
}
namespace B
{
    int power;
}

void func_A();
void func_B();

int main(int argc, char **argv)
{
    A::power = 20;
    B::power = 30;
    cout << "main_A::power=" << A::power << endl;
    cout << "main_B::power=" << B::power << endl;
    func_A();
    func_B();
    return 0;
}

void func_A()
{
    using namespace A;
    cout << "func_A:A::power=" << power << endl;
    cout << "func_A:B::power=" << B::power << endl;
    power = 100;
}

void func_B()
{
    using namespace B;
    cout << "func_A:A::power=" << A::power << endl;
    cout << "func_A:B::power=" << power << endl;
    power = 40;
}
