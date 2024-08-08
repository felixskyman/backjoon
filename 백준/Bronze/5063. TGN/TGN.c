#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int n,a, b, c;
    scanf(" %d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if (a < (b - c))
        {
            printf("advertise\n");
        }
        else if (a == (b - c))
        {
            printf("does not matter\n");
        }
        else if (a > (b - c))
        {
            printf("do not advertise\n");
        }
    }
    return 0;
}