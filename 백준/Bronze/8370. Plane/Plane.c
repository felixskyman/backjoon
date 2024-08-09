#include <stdio.h>

int main()
{
    int n1,n2,k1,k2,rst;
    scanf("%d %d %d %d\n", &n1, &n2, &k1, &k2);
    rst = n1 * n2 + k1 * k2;
    printf("%d", rst);
    return 0;
}