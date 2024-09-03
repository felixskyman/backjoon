#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    long long a = 0, count = 0;
    scanf("%lld", &a);

    while (a != 1) {
        if (a%2 == 0) {
            a = a *0.5;
            count += 1;
        }
        else {
            a = a + 1;
            count += 1;
        }
    }

    printf("%lld\n", count); 

    return 0;
}