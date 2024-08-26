#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int a,x,y;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        scanf("%d %d", &x, &y);
        printf("Case #%d: %d\n", i, x + y);
    }
    return 0;
}