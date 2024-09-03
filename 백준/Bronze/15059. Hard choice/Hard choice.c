#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int main() {
    int a1, b1, c1, a2, b2, c2, total = 0;
    scanf("%d %d %d", &a1, &b1, &c1);
    scanf("%d %d %d", &a2, &b2, &c2);

    if (a1 - a2 < 0) {
        total += a2 - a1;
    }
    if (b1 - b2 < 0) {
        total += b2 - b1;
    }
    if (c1 - c2 < 0) {
        total += c2 - c1;
    }

    printf("%d", total);

    return 0;
}
