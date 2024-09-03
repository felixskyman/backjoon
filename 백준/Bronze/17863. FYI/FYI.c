#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int a;
    scanf("%d", &a);
    if (a >= 5550000 && a <= 5559999){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}