#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    long long K, N;
    scanf("%lld %lld", &K, &N);

    if (N == 1) {
        printf("-1");
    }
    else {
        long long x = (K * N) / (N - 1);
        if ((K * N) % (N - 1) != 0) {
            x++;
        }
        printf("%lld", x);
    }

    return 0;
}