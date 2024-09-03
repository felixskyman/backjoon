#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
    int n[6],num=0;

    for (int i = 0; i < 6; i++)
        scanf("%d", &n[i]);
    for (int j = 0; j < 6; j++)
        num += n[j] * 5;

    printf("%d",num);

    return 0;
}