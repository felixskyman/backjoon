#include <stdio.h>

int main()
{
    long a=0,x,y,num;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d %d", &x, &y);
        num = x + y;
        printf("%d\n", x + y);
    }
    return 0;
}