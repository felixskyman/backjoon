#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
    int big, small,total=0;
    scanf("%d", &big);
    scanf("%d", &small);
    total = 8 * big + 3 * small-28;
    if (total < 0){
        total=0;
    }
    printf("%d", total);
    return 0;
}