#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int N, Carlos, total = 0;
    scanf("%d", &N);

    int votes[100001];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &votes[i]);
        total += votes[i];
    }

    Carlos = votes[0];
    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N - i - 1; ++j) {
            if (votes[j] > votes[j + 1]) {
                int temp = votes[j];
                votes[j] = votes[j + 1];
                votes[j + 1] = temp;
            }
        }
    }
    if (Carlos == votes[N-1]) {
        printf("S\n");
    }
    else if (Carlos < votes[N-1]) {
        printf("N\n");
    }
    else if (total > 100000) {
        printf("Exceeded total votes limit\n");
    }

    return 0;
}