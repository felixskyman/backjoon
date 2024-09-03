#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int n, l, k, sub1[1001], sub2[1001], total = 0, sol = 0, count = 0;
    scanf("%d %d %d", &n, &l, &k);
    
    // 문제를 읽어들입니다.
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &sub1[i], &sub2[i]);
    }
    
    // l이 sub2보다 크거나 같고, sol이 k보다 작으면 sol 증가
    for (int i = 0; i < n; i++) {
        if (l >= sub2[i] && sol < k) {
            sol++;
            sub1[i] = 0;  // 이 문제를 나중에 다시 고려하지 않도록 0으로 설정
        }
    }
    
    // 현재까지 해결한 문제로 점수 계산
    total = 140 * sol;
    
    // sol이 k와 같지 않으면 추가 점수 계산
    if (sol < k) {
        for (int i = 0; i < n; i++) {
            if (l >= sub1[i] && sub1[i] != 0) {
                count++;
                total += 100;
                if (sol + count == k) {
                    break;  // 필요한 문제 수를 다 채우면 루프 종료
                }
            }
        }
    }
    
    printf("%d", total);
    return 0;
}
