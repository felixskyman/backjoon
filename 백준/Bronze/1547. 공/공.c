#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int k, c1, c2, a, arr[200];

    // 배열 초기화
    for (int i = 1; i < 200; i++) {
        arr[i] = 0;
    }

    // 정수 입력
    scanf("%d", &k);

    // 배열의 0번째 요소를 1로 설정
    arr[1] = 1;

    // 정수 쌍 교환
    for (int i = 1; i <= k; i++) {
        scanf("%d %d", &c1, &c2);
        a = arr[c1];
        arr[c1] = arr[c2];
        arr[c2] = a;
    }

    // 배열 출력
    for (int i = 1; i < 200; i++) {
        if (arr[i] == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}