#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    long long x1, y1, r1, x2, y2, r2, d;
    scanf("%lld %lld %lld", &x1, &y1, &r1);
    scanf("%lld %lld %lld", &x2, &y2, &r2);
    d = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));

    // 두 원의 중심 간의 거리가 두 원의 반지름의 합보다 작거나 같으면 겹침
    if (d < ((r1 + r2) * (r1 + r2))) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}