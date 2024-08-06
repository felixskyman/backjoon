#pragma warning(disable:4996)
#include <stdio.h>
#include<math.h>

int main() {
    long long a, b,num=0;
    scanf("%lld %lld", &a, &b);
    num=llabs(a - b);
    printf("%lld", num);
    return 0;
}