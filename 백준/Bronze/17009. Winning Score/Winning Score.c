#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int a[3], b[3], sum1, sum2;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < 3; j++)
        scanf("%d", &b[j]);
    sum1 = 3*a[0] + 2*a[1] + 1*a[2];
    sum2 = 3 *b[0] + 2 * b[1] + 1 * b[2];
    if (sum1 > sum2) {
        printf("A");
    }
    else if (sum1 < sum2) {
        printf("B");
    }
    else if (sum1 == sum2) {
        printf("T");
    }
    return 0;
}