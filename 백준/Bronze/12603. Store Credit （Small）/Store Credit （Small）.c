#pragma warning(disable:4996)
#include<stdio.h>

int main(void) {
    int n, sum, item, pri[101];
    scanf("%d", &n);  

    for (int i = 0; i < n; i++) {
        int flag = 0;
        scanf("%d", &sum); 
        scanf("%d", &item);

        for (int j = 0; j < item; j++) {
            scanf("%d", &pri[j]);
        }

        for (int k = 0; k < item - 1; k++) {
            for (int z = k + 1; z < item; z++) {
                if (sum == pri[k] + pri[z]) {
                    printf("Case #%d: %d %d\n", i + 1, k + 1, z + 1);
                    flag = 1;
                    break;
                }
            }
            if (flag) {
                break;
            }
        }
    }
    return 0;
}