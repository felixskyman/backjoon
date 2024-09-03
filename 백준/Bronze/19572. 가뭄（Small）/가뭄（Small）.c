#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int d1, d2, d3;
    float a, b, c;
    scanf("%d %d %d", &d1, &d2, &d3);
    a = ((d1 - d3) + d2)/2.0;
    b = ((d3 - d2) + d1)/ 2.0;
    c = ((d2 - d1) + d3)/ 2.0;
    if (a<=0 || b<=0 || c<=0)
    {
        printf("-1");
    }
    else {
        printf("1\n");
        printf("%.1f %.1f %.1f", a, b, c);
    }
    return 0;
}