#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    while (true)
    {
        int n;
        cout << "���̐��������" << endl;
        cin >> n;
        if (n > 0)
        {
            break;
        }
        cout << n << "�͐��̐����ł͂���܂���" << endl;
    }
    return 0;
}