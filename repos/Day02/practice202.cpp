#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    cout << "文字列を入力してください" << endl;
    string s;
    cin >> s;
    cout << "回数を入力してください" << endl; //「表示」が文字化け
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cout << s << endl;
    return 0;
}
