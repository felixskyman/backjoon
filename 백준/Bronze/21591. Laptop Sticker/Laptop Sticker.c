#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int wc,hc,ws,hs;
    scanf("%d %d %d %d", &wc, &hc, &ws, &hs);
    if ((wc - ws >=2) && (hc - hs >=2)) {
        printf("%d", 1);
    }
    else {
        printf("%d", 0);
    }
    return 0;
}