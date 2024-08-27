#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int a, b, c, n;
    int flag = 0; 
    scanf("%d %d %d %d", &a, &b, &c, &n);

    for (int i = 0; a * i <= n; i++) {
        for (int j = 0; a * i + b * j <= n; j++) {
            for (int k = 0; a * i + b * j + c * k <= n; k++) {
                if (n == a * i + b * j + c * k) {
                    flag = 1; 
                    break;
                }
            }
            if (flag) break; 
        }
        if (flag) break; 
    }

    if (flag) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}