#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int a = 0, n, x, max, min;

    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        scanf("%d", &n);
        max = -1;
        min = 100000000;

        for (int j = 0; j < n; j++) {
            scanf("%d", &x);

            if (x > max) {
                max = x;
            }

            if (x < min) {
                min = x;
            }
        }

        printf("%d\n", (max - min) * 2);
    }

    return 0;
}