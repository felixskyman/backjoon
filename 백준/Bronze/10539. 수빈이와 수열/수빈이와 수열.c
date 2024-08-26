#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
    long int a,n[101],b[101],sum=0;
    scanf("%ld", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%ld", &n[i]);
        b[i] = (i + 1) * n[i] - sum;
        sum = sum + b[i];
    }
    for (int i = 0; i < a; i++)
    {
        printf("%ld ", b[i]);
    }
    return 0;
}