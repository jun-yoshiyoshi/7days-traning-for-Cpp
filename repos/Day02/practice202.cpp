#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    cout << "���������͂��Ă�������" << endl;
    string s;
    cin >> s;
    cout << "�񐔂���͂��Ă�������" << endl; //�u�\���v����������
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cout << s << endl;
    return 0;
}
