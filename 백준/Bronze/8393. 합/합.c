#include <stdio.h>

int main()
{
    int n,rst=0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
        rst += i;
        printf("%d", rst);
    return 0;
}