#include <iostream>
using namespace std;

int main(int argc, char **argv)
{

    int n;
    cout << "��������͂��Ă�������" << endl;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n << "�����ł�" << endl;
    }
    else
        cout << n << "��ł�" << endl;

    return 0;
}