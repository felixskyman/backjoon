#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int shi = 0, des = 0, tot = 0;
    
    // 사용자로부터 입력 받기
    scanf("%d %d", &shi, &des);

    // 제한 조건 적용
    if (0 <= shi && shi <= 500 && 0 <= des && des <= 100) {
        tot = shi - (shi * (des * 0.01));

        // 결과 출력
        if (tot < 100)
            printf("1");
        else
            printf("0");
    } else {
        // 입력값이 제한을 벗어날 경우 오류 메시지 출력
        printf("입력값이 범위를 벗어났습니다.\n");
    }

    return 0;
}
