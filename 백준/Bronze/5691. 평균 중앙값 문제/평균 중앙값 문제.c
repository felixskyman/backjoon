#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int a = 0, b = 0,c=0;
    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a==0 && b==0)
        {
            break;
        }
        c = a - (b - a);
        printf("%d\n", c);
    }
    return 0;
}