#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int n, m,rst;
    scanf("%d %d", &n, &m);
    if (n / 2 > 1 && m / 2 > 1) {
        rst = (n / 2) > (m / 2) ? (m / 2) : (n / 2);
        printf("%d", rst);
    }
    else {
        rst = 0;
        printf("%d", rst);
    }
    return 0;
}