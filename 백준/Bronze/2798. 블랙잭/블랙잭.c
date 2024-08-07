#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int n, m,a[100],max=0,sum=0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                sum = a[i] + a[j] + a[k];
                if (sum>max && sum<=m)
                {
                    max = sum;
                }
            }
        }
    }
    printf("%d", max);
    return 0;
}