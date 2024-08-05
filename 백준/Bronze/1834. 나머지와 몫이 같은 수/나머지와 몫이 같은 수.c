#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    long long int n,sum=0;
    scanf("%lld", &n);
    for (int i = 1; i <= n-1; i++)
    {
        sum = sum + (i * (n + 1));
    }
    printf("%lld", sum);
    return 0;
}