#include <stdio.h>

int main()
{
    int a,b=0,num=0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        num = 0;
        for (int c = 0; c <= b; c++) {
            if (c % 2 != 0) {
                num += c;
            }
        }
        printf("%d\n", num);
    }
    return 0;
}