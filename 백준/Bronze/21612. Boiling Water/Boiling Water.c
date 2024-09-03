#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int Kpa=0,b;
    scanf("%d", &Kpa);
    b = (5 * Kpa) - 400;
    if (b > 100){
        printf("%d\n", b);
        printf("%d", -1);
    }
    else if (b < 100) {
        printf("%d\n", b);
        printf("%d", 1);
    }
    else if (b == 100) {
        printf("%d\n", b);
        printf("%d", 0);
    }
    return 0;
}