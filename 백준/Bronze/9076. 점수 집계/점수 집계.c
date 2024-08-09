#include <stdio.h>
 
int main() {
 
    int n, a[5] = { 0, };
    int tmp;
    scanf("%d", &n);
 
 
    for (int i = 0; i < n; i++) {
        int sum = 0;
 
 
        for (int j = 0; j < 5; j++) {
            scanf("%d", &a[j]);
        }
 
 
        for (int k = 0; k < 5; k++) {
            for (int m = 0; m < 5; m++) {
                if (a[k] < a[m]) {
                    tmp = a[k];
                    a[k] = a[m];
                    a[m] = tmp;
 
 
                }
            }
        }
        if (a[3] - a[1] >= 4) printf("KIN\n");
        else printf("%d\n", a[3] + a[2] + a[1]);
    }
}
