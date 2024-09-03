#pragma warning(disable:4996)
#include<stdio.h>

int main() {
    int yt, yj;
    scanf("%d %d", &yt, &yj);
    while (1){
        yj += yt;
        if (yj >= 5) {
            printf("yt");
            break;
        }
        yt += yj;
        if (yt >= 5) {
            printf("yj");
            break;
        }
    }
    return 0;
}