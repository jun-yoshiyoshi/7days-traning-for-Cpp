#include <iostream>
using namespace std;

int main(int argc, char **argv)
{

    int n;
    cout << "数字を入力してください" << endl;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n << "偶数です" << endl;
    }
    else
        cout << n << "奇数です" << endl;

    return 0;
}