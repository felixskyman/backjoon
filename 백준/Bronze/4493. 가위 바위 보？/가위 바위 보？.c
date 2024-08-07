#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int a, b, count1 = 0, count2 = 0;
    char x, y;

    scanf(" %d", &a);

    for (int i = 0; i < a; i++) {
        scanf(" %d", &b);
        count1 = count2 = 0;  // 각 테스트 케이스마다 count1과 count2 초기화
        for (int j = 0; j < b; j++) {
            scanf(" %c %c", &x, &y);

            // 조건에 맞게 count1 또는 count2를 증가
            if ((x == 'P' && y == 'R') || (x == 'S' && y == 'P') || (x == 'R' && y == 'S')) {
                count1++;
            }
            else if ((y == 'P' && x == 'R') || (y == 'S' && x == 'P') || (y == 'R' && x == 'S')) {
                count2++;
            }
        }

        // 테스트 케이스별로 승자 출력
        if (count1 > count2) {
            printf("Player 1\n");
        }
        else if (count1 < count2) {
            printf("Player 2\n");
        }
        else {
            printf("TIE\n");
        }
    }

    return 0;
}