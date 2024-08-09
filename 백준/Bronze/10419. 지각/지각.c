#include <stdio.h>

int main() {
    int n, a, cnt;

    // Visual Studio에서 scanf와 관련된 경고를 무시하는 부분
    #pragma warning(disable:4996)

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        
        // 루프 외부에서 j를 초기화하여 각 입력에 대한 최대 지각 시간을 계산
        int j = 0;

        // 최대 지각 시간 찾기
        while (j * j + j <= a) {
            cnt = j;
            j++;
        }

        // 결과를 루프 외부에서 출력
        printf("%d\n", cnt);
    }

    return 0;
}
