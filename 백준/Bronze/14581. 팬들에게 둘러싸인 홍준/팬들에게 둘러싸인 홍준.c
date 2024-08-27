#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    char a[21];
    scanf("%20s", &a);
    for (int i = 1; i < 10; i++)
    {
        if (i == 3 || i == 6) {
            printf(":fan:");
            printf("\n");
        }
        else if(i==5)
        {
            printf(":%s:", a);
        }
        else {
            printf(":fan:");
        }
    }

    return 0;
}