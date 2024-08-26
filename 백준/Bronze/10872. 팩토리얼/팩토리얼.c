#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int a,num=1;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        num *=i;
    }
    printf("%d", num);
    return 0;
}