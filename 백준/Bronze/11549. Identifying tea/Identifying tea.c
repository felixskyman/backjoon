#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int a, pa[5],count=0;
    scanf("%d", &a);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &pa[i]);
        if (a == pa[i])
            count++;
    }
    printf("%d", count);
    return 0;
}