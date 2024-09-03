#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int chi=0, a,b,num=0;
    scanf("%d",&chi);
    scanf("%d %d", &a,&b);
    num = (a / 2) + (b / 1);
    if (chi-num<=0) {
        printf("%d",chi);
    }
    else if (chi-num>=0) {
        printf("%d", num);
    }
    return 0;
}