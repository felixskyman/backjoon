#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
    int n=0;
    double er = 1.0, sum = 2.5, e = 1.0;

    printf("n e\n");
    printf("- -----------\n");
    printf("0 1\n");
    printf("1 2\n");
    printf("2 2.5\n");
    for (int i = 3; i < 10; i++)
    {
        e = 1;
        for (int j = 1; j <= i; j++)
        {
            e *= j;
        }
        sum = sum + (1.0 / e);
        er = sum;
        printf("%d %.9f\n", i, er);
    }
    return 0;
}