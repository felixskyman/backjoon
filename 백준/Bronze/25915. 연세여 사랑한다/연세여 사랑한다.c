#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>

int main() {
    int total = 84;
    char alp;
    scanf("%c", &alp);
    total = total + abs(alp - 'I');
    printf("%d", total);
    return 0;
}