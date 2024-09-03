#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int n, x, k, c1, c2, a, arr[200000];

    // 배열 요소를 모두 0으로 초기화
    for (int i = 0; i < 200000; i++) {
        arr[i] = 0;
    }

    // n, x, k 값 입력
    scanf("%d %d %d", &n, &x, &k);

    // 초기 위치 x를 1로 표시
    arr[x] = 1;

    // 입력 조건에 따라 교환 수행
    for (int i = 0; i < k; i++) {
        if (x > n) {
            break;
        }
        scanf("%d %d", &c1, &c2);

        // c1 또는 c2가 이미 1로 표시되어 있으면 교환
        if (arr[c1] == 1 || arr[c2] == 1) {
            a = arr[c1];
            arr[c1] = arr[c2];
            arr[c2] = a;
        }
        else {
            a = arr[c1];
            arr[c1] = arr[c2];
            arr[c2] = a;
        }
    }

    // 특정 위치에 1이 있는지 확인하고 결과 출력
    for (int i = 0; i <= n; i++) {
        if (arr[i] == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}