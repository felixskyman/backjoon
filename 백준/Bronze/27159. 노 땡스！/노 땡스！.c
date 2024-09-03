#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int a,b[34],total=0;
    scanf("%d", &a);
    for (int i = 1; i <=a; i++){
        scanf("%d", &b[i]);
    }
    total += b[1];
    for (int i  = 2; i <= a; i++){
        if (b[i] != b[i-1]+1){
            total += b[i];
        }
    }
    printf("%d", total);
    return 0;
}