#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int n,count1=0, count2 = 0;
    char a;
    scanf(" %d", &n);

    for (int i = 1; i <= n; i++) {
        scanf(" %c", &a);
        if (a=='A')
        {
            count1++;
        }
        else if (a=='B')
        {
            count2++;
        }
    }
    if (count1==count2)
    {
        printf("Tie");
    }
    else if (count1 > count2)
    {
        printf("A");
    }
    else if (count1 < count2)
    {
        printf("B");
    }
    return 0;
}