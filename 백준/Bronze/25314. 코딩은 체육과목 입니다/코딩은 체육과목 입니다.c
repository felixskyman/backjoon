#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a < 4) {
        printf(" int");
    }
    else if (a >= 4) {
        for (int i = 0; i < (a / 4); i++) {
            printf("long ");
        }
        printf("int");
    }
    else if (a < 0) {
        printf("다시 시도해주세요");
    }

    return 0;
}