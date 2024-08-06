#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int a, j = 0;
    scanf("%d", &a);
    int b = 1; 
    while (j != a) {
        for (int i = 0; i < b; i++) {
            printf("*");
        }
        b++; 
        printf("\n");
        j++;
    }
    return 0;
}