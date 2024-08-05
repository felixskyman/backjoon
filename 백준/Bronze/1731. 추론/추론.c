#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int n,a[10000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if (a[1]-a[0]==a[2]-a[1])
    {
        printf("%d\n", a[n-1]+(a[1] - a[0]));
    }
    else if (a[1]/a[0]==a[2]/a[1])
    {
        printf("%d\n", a[n - 1] * (a[1] / a[0]));
    }
    return 0;
}