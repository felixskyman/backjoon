#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int a,x,y,n,m;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d %d", &x, &y);
        //멀쩡닭
        n = x - y;
        m = 2*y - x;
        printf("%d %d\n", m, n);
    }
    return 0;
}