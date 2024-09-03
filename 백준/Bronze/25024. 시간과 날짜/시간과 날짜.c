#include <stdio.h>

int main() {
    int a, x, y;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        scanf("%d %d", &x, &y);

        // x시 y분에 관련된 출력
        if (x < 0 || y < 0 || x > 23 || y > 59) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }

        // x월 y일에 관련된 출력
        if (x < 1 || x > 12 || y < 1 || y > 31) {
            printf("No\n");
        } else if ((x == 4 || x == 6 || x == 9 || x == 11) && y > 30) {
            printf("No\n");
        } else if (x == 2 && y > 29) {
            printf("No\n");
        } else if ((x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12) && y > 31) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }
    return 0;
}
