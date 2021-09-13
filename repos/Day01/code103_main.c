#include <stdio.h>

int main(int argc, char **argv)
{
    double water_temp = 10.0;
    printf("水の温度：%lf\n", water_temp);
    if (water_temp > 100.0)
    {
        printf("気体\n");
    }
    else if (water_temp > 0)
    {
        printf("液体\n");
    }
    else
    {
        printf("固体\n");
    }
}