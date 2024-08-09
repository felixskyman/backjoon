#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int z,n=0;
    double d=0, a=0, b=0, f=0,mile;
    scanf("%d", &z);
    for (int i = 1; i <= z; i++)
    {
        scanf("%d %lf %lf %lf %lf", &n, &d, &a, &b, &f);
        mile = d / (a + b) * f;
        printf("%d %.6lf\n", n, mile);
    }
    return 0;
}