#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int n, count = 0, count1 = 0;
    char tab[101][101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf(" %c", &tab[i][j]);

            // 가로 방향 체크
            if (j >= 1 && tab[i][j] == '.' && tab[i][j - 1] == '.') {
                // 연속된 두 번째 점에서만 카운트
                if (j == 1 || (j > 1 && tab[i][j - 2] != '.')) {
                    count++;
                }
            }

            // 세로 방향 체크
            if (i >= 1 && tab[i][j] == '.' && tab[i - 1][j] == '.') {
                // 연속된 두 번째 점에서만 카운트
                if (i == 1 || (i > 1 && tab[i - 2][j] != '.')) {
                    count1++;
                }
            }
        }
    }

    printf("%d %d", count, count1);
    return 0;
}