#include <iostream>
using namespace std;

bool judge(int);

int main(int argc, char **argv)
{
    int n;
    cout << "���͂��Ă�������" << endl;
    cin >> n;
    if (judge(n))
    {
        cout << "���̐��͂O�ȏ�ł�" << endl;
    }
    else
    {
        cout << "���̐��͂O�����ł�" << endl;
    }
    return 0;
}

bool judge(int n)
{
    if (n >= 0)
    {
        return true;
    }
    else
        return false;
}