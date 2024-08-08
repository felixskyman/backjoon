#include <stdio.h>

int main()
{
    int total=0, num;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);
        total += num;
    }
    printf("%d", total);
    return 0;
}