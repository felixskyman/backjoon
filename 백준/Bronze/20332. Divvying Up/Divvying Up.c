#include <stdio.h>

int main() {
    int a,b,total=0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        total = total+b;
    }
        if (total % 3==0) {
            printf("yes");
        }
        else if (total % 3 != 0) {
            printf("no");
        }
    return 0;
}