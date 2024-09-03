#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int N=0, a[3];
    int count = 0;

    scanf("%d", &N);
    for(int j=0;j<3;j++)
    scanf("%d",&a[j]);

    for (int i = 0; i < 3; i++) {
        if (a[i] - N < 0)
            count += a[i];
        else
            count += N;
    }
    printf("%d", count);
}