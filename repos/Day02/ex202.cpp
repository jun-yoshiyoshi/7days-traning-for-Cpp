#include <iostream>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{

    string s;
    cout << "文字を入力してください" << endl;
    cin >> s;
    if (s == "hello")
    {
        cout << s << "helloが入力されました OK!!" << endl;
    }
    else
        cout << s << "入力がhelloではありません" << endl;

    return 0;
}