#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int a;
    long long int n,k;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%lld", &n);
        if (a<200001 && a>0) {
            k = n * n;
        }
        printf("%lld\n", k);
    }
    return 0;
}