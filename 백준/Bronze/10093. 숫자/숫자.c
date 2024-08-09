#include <stdio.h>

int main()
{
    long a, b,mid;
    scanf("%ld", &a);
    scanf("%ld", &b);
    if (a == b)
        printf("0");
    else if (a > b){
        mid = a - b - 1;
        printf("%ld\n", mid);
        for (long i = b + 1; i < a; i++)
            printf("%ld ", i);
    }
    else if (a < b) {
        mid = b - a - 1;
        printf("%ld\n", mid);
        for (long i = a + 1; i < b; i++)
            printf("%ld ", i);
    }
    return 0;
}