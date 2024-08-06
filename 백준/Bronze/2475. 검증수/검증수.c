#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int a, b, c, d, e,num=0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    num = ((a*a) + (b * b) + (c * c) + (d * d) + (e * e)) % 10;
    printf("%d", num);
    return 0;
}