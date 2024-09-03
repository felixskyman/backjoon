#pragma warning(disable:4996)
#include <stdio.h>

// 주어진 n 이하의 a의 배수의 합을 계산하는 함수
int sum_of_multiples(int n, int a) {
    int m = n / a;
    return a * m * (m + 1) / 2;
}

int main() {
    int T;
    scanf("%d", &T);  // 첫 번째 입력은 테스트 케이스의 수

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);  // 각 테스트 케이스의 N 값을 입력 받음
        
        int sum3 = sum_of_multiples(N, 3);
        int sum7 = sum_of_multiples(N, 7);
        int sum21 = sum_of_multiples(N, 21);
        int result = sum3 + sum7 - sum21;
        
        printf("%d\n", result);  // 각 테스트 케이스의 결과를 출력
    }
    
    return 0;
}
