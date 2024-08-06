#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int n,max=0,a,cnt=1;
    for (int i = 1; i <= 9; i++)
    {
        scanf("%d", &n);
        if (n > max) {
            max = n;
            a = cnt;
        }
        cnt++;
    }
    printf("%d\n", max);
    printf("%d", a);
    return 0;
}