#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
    int n1,n2,money;
    scanf("%d", &money);
    n1 = money - money * 0.22;
    n2 = money - ((money * 0.2) * 0.22);
    printf("%d %d", n1, n2);
    return 0;
}