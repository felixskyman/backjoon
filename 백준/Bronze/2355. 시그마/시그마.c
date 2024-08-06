#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    long long int a, b, result = 0,num;
    scanf("%lld %lld", &a, &b);
    if (a>b)
    {
        num = a;
        a = b;
        b = num;
    }
    result = (a + b) * (b - a + 1) / 2;
    printf("%lld", result);
    return 0;
}