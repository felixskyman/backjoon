#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
    int n, k, l, sum, num[500001][5] = { 0 }, count1 = 0;

    // 사용자로부터 입력 받기
    scanf("%d %d %d", &n, &k, &l);

    // 각 라인에 대한 처리
    for (int i = 1; i <= n; i++)
    {
        // 현재 라인에 대한 입력 받기
        scanf("%d %d %d", &num[i][1], &num[i][2], &num[i][3]);

        // 초기값 설정
        sum = 0;
        // 현재 라인의 합 계산
        sum = num[i][1] + num[i][2] + num[i][3];
        // 조건 체크 및 count1 업데이트
        if (sum >= k && num[i][1] >= l && num[i][2] >= l && num[i][3] >= l)
        {
            count1++;
            num[i][4] = 1;  // 3번째 열에 값을 할당 (인덱스가 4로 수정)
        }
    }

    printf("%d\n", count1);
    for (int i = 1; i <= n; i++)
    {
        if (num[i][4] == 1)  // 3번째 열을 체크 (인덱스가 4로 수정)
        {
            printf("%d %d %d ", num[i][1], num[i][2], num[i][3]);
        }
    }

    return 0;
}
