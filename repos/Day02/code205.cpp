#include <iostream>
#include <string>

using namespace std;

int power;
void func_a();
void func_b();

int main(int argc, char **argv)
{
    power = 20;
    cout << "main power=" << power << endl;
    func_a();
    func_b();
    return 0;
}

void func_a()
{
    cout << "func_a power" << power << endl;
    power = 30;
}
void func_b()
{
    cout << "func_b power" << power << endl;
}