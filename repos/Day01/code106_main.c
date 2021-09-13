#include <stdio.h>
int main(int argc, char **argv)
{
    int a[3];
    double b[] = {0.1, 0.2, 0.3};
    int i;
    a[0] = 1, a[1] = 2, a[2] = 3;
    for (i = 0; i < 3; ++i)
    {
        printf("a[%d]=%d ", i, a[i]);
        printf("b[%d]=%lf\n", i, b[i]);
    }
    return 0;
}