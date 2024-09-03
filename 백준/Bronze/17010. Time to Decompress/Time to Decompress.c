#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int t=0,n=0,s;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %c", &n,&s);
        for (int j = 0; j < n; j++)
            printf("%c", s);
        printf("\n");
    }
    return 0;
}