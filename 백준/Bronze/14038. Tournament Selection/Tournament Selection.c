#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    char a;
    int win=0;
    for (int i = 0; i < 12; i++)
    {
        scanf("%c",&a);
        if (a == 'W')
            win++;
    }
    if (win == 0) {
        printf("%d", -1);
    }
    else if (win == 1 || win == 2) {
        printf("%d", 3);
    }
    else if (win == 3 || win == 4) {
        printf("%d", 2);
    }
    else if (win == 5 || win == 6) {
        printf("%d", 1);
    }
    return 0;
}