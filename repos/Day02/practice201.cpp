#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout << "数字を入力してください" << endl;
    int n;
    cin >> n;
    if (n > 0)
        cout << "入力値は０より大きいです" << endl;
    else
        cout << "入力値は０以下です" << endl;
    return 0;
}