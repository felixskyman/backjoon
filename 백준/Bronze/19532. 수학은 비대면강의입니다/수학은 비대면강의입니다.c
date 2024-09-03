#pragma warning(disable:4996)

#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    int x, y;

    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    int det = a * e - b * d;
    if (det == 0) {
        printf("No solution.\n");
    }
    else {
        x = (c * e - b * f) / det;
        y = (a * f - c * d) / det;
        printf("%d %d\n", x, y);
    }

    return 0;
}