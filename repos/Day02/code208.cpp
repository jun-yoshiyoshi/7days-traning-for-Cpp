#include <iostream>
using namespace std;

bool judge(int);

int main(int argc, char **argv)
{
    int n;
    cout << "“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;
    cin >> n;
    if (judge(n))
    {
        cout << "‚±‚Ì”‚Í‚OˆÈã‚Å‚·" << endl;
    }
    else
    {
        cout << "‚±‚Ì”‚Í‚O–¢–‚Å‚·" << endl;
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