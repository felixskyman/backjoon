#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    long n, m,tot;
    scanf("%ld %ld", &n, &m);
    tot = (n * m)/2;
    printf("%ld", tot);
    return 0;
}