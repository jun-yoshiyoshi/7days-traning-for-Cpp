#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b;
    a = 5;
    b = 2;
    printf("%d+%d=%d\n", a, b, a + b);
    printf("%d-%d=%d\n", a, b, a - b);
    printf("%d*%d=%d\n", a, b, a * b);
    printf("%d/%d=%d\n", a, b, a / b);
    return 0;
}