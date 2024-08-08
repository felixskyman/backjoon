#include <stdio.h>

int main()
{
    int i, j, c, n;

    scanf("%d", &c);

    for (i = 0; i < c; i++)
    {
        scanf("%d", &n);
        printf("Pairs for %d: ", n);

        for (j = 1; j <= (n / 2); j++)
        {
            if (j != n - j)
            {
                if (j == 1)
                    printf("%d %d", j, n - j);
                else
                    printf(", %d %d", j, n - j);
            }
        }
        printf("\n");
    }
    return 0;
}
