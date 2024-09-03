#include <stdio.h>
 
int main(void) {
    int phy[3] = { 0, }; //점수
    int n; //줄바꿈
    int a[3]; //기술사용횟수
    int s, sum = 0, max = 0;
 
    for (int i = 0; i < 3; i++) { //기술점수 입력
        scanf("%d", &phy[i]);
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++) { //동아리만큼 반복
        sum = 0;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) { 
                scanf("%d", &a[k]);//a0 a1 a2
 
                s = a[k] * phy[k];
                sum += s;
                if (max < sum) max = sum;
            }
        }
    }
    printf("%d", max);
}
