#include <stdio.h>

int main() {
    int R, C, ZR, ZC;
    scanf("%d %d %d %d", &R, &C, &ZR, &ZC);

    char newspaper[50][50]; 
    for (int i = 0; i < R; i++) {
        scanf("%s", newspaper[i]);
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < ZR; j++) {
            for (int k = 0; k < C; k++) {
                for (int l = 0; l < ZC; l++) {
                    printf("%c", newspaper[i][k]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
