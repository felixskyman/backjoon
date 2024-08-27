#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int a, b,c;
    scanf("%d %d", &a, &b);
    if (a == b) {
        c = a;
        printf("%d", c);
    }
    else if(a>b){
        c = a;
        printf("%d",c);
    }
    else if (a < b) {
        c = b;
        printf("%d", b);
    }
    return 0;
}