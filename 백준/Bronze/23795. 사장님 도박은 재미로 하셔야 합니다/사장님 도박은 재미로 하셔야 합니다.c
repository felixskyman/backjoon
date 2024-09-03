#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int m=0,sum=0;
    while (1) {
        scanf("%d", &m);
        if (m == -1)
            break;
        sum += m;
    }
    printf("%d", sum);
    return 0;
}