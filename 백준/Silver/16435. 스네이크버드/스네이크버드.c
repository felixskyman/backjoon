#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
    int n, l, h[10000], tmp;
    scanf("%d %d", &n, &l);

    // 배열 h 입력 받기
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
    }

    // 버블 정렬
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (h[j] > h[j + 1])
            {
                tmp = h[j];
                h[j] = h[j + 1];
                h[j + 1] = tmp;
            }
        }
    }

    // 높이 측정
    for (int i = 0; i < n; i++)
    {
        if (l >= h[i]) {
            l++;
        }
    }

    printf("%d", l);
    return 0;
}