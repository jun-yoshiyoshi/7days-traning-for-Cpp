#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char **argv)
{
    char s1[] = {'a', 'b', 'c', '\0'};
    char s2[] = "hello,world";
    printf("==printf�ŕ\��==\n"); //���������@�Ȃ�ŁH
    printf("s1=%s\n", s1);
    printf("s2=%s\n", s2);
    cout << "==cout�ŕ\��==" << endl;
    cout << "s1=" << s1 << endl;
    cout << "s2=" << s2 << endl;
    return 0;
}