#include <stdio.h>

int main() {
    int n0, n1, n4, total = 0;
    while (1)
    {
        scanf("%d", &n0);
        total++;
        if (n0 == 0)
            break;
        n1 = n0 * 3;
        if (n1 % 2 == 0) {
            n4 = n0 / 2;
        }
        else if (n1 % 2 != 0) {
            n4 = (n0 - 1) / 2;
        }
        printf("%d. %s %d\n", total, n1 % 2 ? "odd" : "even", n4);
    }
    return 0;
}