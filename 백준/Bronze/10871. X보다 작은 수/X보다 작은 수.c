#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int a,b,c[100001],d[100001],j=0;
    scanf("%d %d", &a, &b);
    for (int i = 0; i <a; i++)
    {
        scanf("%d", &c[i]);
        if (c[i] < b) {
            d[j] = c[i];
            j++;
        }
    }
    for (int i = 0; i <j; i++)
    {
        printf("%d ", d[i]);
    }
    return 0;
}