#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int sna[3], happy;
    for(int i=0;i<3;i++)
        scanf("%d", &sna[i]);
    happy = (1 * sna[0]) + (2 * sna[1]) + (3 * sna[2]);
    if (happy>=10) {
        printf("happy");
    }
    else {
        printf("sad");
    }
    return 0;
}