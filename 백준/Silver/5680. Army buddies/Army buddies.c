#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SOLDIERS 100000

int left[MAX_SOLDIERS + 2]; 
int right[MAX_SOLDIERS + 2];

void updateNeighbors(int L, int R) {
    if (left[L] != 0) right[left[L]] = right[R];

    if (right[R] != 0) left[right[R]] = left[L];
}

int main() {
    int S, B, i, L, R;

    while (1) {
        scanf("%d %d", &S, &B);
        if (S == 0 && B == 0) break;

        
        for (i = 1; i <= S; i++) {
            left[i] = i - 1; 
            right[i] = i + 1; 
        }
        left[1] = 0;         right[S] = 0;

        while (B--) {
            scanf("%d %d", &L, &R);
            updateNeighbors(L, R);
            if (left[L] != 0) printf("%d ", left[L]);
            else printf("* ");
            if (right[R] != 0) printf("%d\n", right[R]);
            else printf("*\n");
        }

        printf("-\n");
    }

    return 0;
}
