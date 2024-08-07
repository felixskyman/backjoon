#include <stdio.h>


int main() {
    int x, y, z;
    scanf("%d", &z);
    for (int i = 0; i < z; i++) {
        scanf("%d %d", &x, &y);
        x < y ? printf("NO BRAINS\n") : printf("MMM BRAINS\n");
    }
    return 0;
}