#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string s, t;
    cout << "文字を入力してください" << endl;
    t = "入力は";
    cin >> s;
    cout << t + s << endl;
    return 0;
}