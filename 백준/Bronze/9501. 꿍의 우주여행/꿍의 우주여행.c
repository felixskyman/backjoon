#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    long int a, x, y, count1 = 0;
    double v1, f1, c1;

    scanf("%ld", &a);

    for (int i = 0; i < a; i++) {
        count1 = 0;
        scanf("%ld %ld", &x, &y);

        for (int j = 0; j < x; j++) {
            scanf("%lf %lf %lf", &v1, &f1, &c1);

            if (v1 * f1 / c1 >= y) {
                count1++;
            }
        }

        printf("%ld\n", count1);
    }

    return 0;
}