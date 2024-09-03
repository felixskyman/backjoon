#include <stdio.h>

int main() {
    int L, R, A;
    scanf("%d %d %d", &L, &R, &A);

    // 왼발잡이, 오른발잡이 선수의 수를 맞추기
    while (A > 0) {
        if (L <= R) {
            L++;
        } else {
            R++;
        }
        A--;
    }

    // 최대 잔류 인원 수 출력
    int min = L < R ? L : R;
    printf("%d\n", 2 * min);

    return 0;
}
