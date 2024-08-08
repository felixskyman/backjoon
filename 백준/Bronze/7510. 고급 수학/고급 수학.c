#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        // 피타고라스의 정리를 이용하여 직각 삼각형인지 판단
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("Scenario #%d:\n", i);
            printf("yes\n\n");
        }
        else {
            printf("Scenario #%d:\n", i);
            printf("no\n\n");
        }
    }

    return 0;
}