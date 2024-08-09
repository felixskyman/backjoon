#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int n, m;
        scanf("%d %d", &n, &m);

        int count = 0;

        for (int a = 1; a < n; a++) {
            for (int b = a + 1; b < n; b++) {
                if ((a * a + b * b + m) % (a * b) == 0) {
                    count++;
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
