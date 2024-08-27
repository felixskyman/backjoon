#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int a, t;
    scanf("%d", &a);
    char c[1000][1000];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            scanf(" %c", &c[i][j]);
        }
    }

    scanf("%d", &t);

    if (t == 1) {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                printf("%c", c[i][j]);
            }
            printf("\n");
        }
    }
    else if (t == 2) {
        for (int i = 0; i < a; i++) {
            for (int j = a - 1; j >= 0; j--) {
                printf("%c", c[i][j]);
            }
            printf("\n");
        }
    }
    else if (t == 3) {
        for (int i = a - 1; i >= 0; i--) {
            for (int j = 0; j < a; j++) {
                printf("%c", c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}