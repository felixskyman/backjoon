#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
    long long int num=0,total=1;
    scanf("%lld", &num);
    if (num == 0)
        printf("%lld\n", 1);
    else if(num>0){
        for (int i = 1; i <= num; i++)
            total *= i;
            printf("%lld", total);

    }
    return 0;
}