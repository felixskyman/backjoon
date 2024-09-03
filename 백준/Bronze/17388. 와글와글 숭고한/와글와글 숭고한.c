#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int S, K, H, sum = 0;
    scanf("%d %d %d", &S, &K, &H);
    sum = S + K + H;
    if ((S + K + H) >= 100) {
        printf("OK");
    }
    else if ((S + K + H) < 100) {
        if (S < K && S <H)
            printf("Soongsil");
        else if (K < S && K < H)
            printf("Korea");
        else if (H < S && H < K)
            printf("Hanyang");
    }

    return 0;
}