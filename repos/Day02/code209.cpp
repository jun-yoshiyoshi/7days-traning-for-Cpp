#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    while (true)
    {
        int n;
        cout << "正の整数を入力" << endl;
        cin >> n;
        if (n > 0)
        {
            break;
        }
        cout << n << "は正の整数ではありません" << endl;
    }
    return 0;
}