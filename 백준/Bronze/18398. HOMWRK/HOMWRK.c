#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int a,b,x,y;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        for (int j= 0; j < b; j++)
        {
            scanf("%d %d", &x, &y);
            printf("%d %d\n", x + y, x * y);
        }
    }
    return 0;
}