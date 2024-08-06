#include <stdio.h>
 
 
 
int main() {
 
    int n, x, y, z, num[1000], max = 0, big = 0;
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &x, &y, &z);
        if (x == y && x == z && y == z)    
            num[i] = 10000 + x * 1000;
        else if (x == y || x == z)
            num[i] = 1000 + x * 100;
        else if (y == z)
            num[i] = 1000 + z * 100;    
        else {
            if (x > y && x > z)
                max = x;
            else if (y > x && y > z)
                max = y;
            else if (z > x && z > y)
                max = z;                          
            num[i] = max * 100;
        }
        if (num[i] > big)
            big = num[i];
    }
    printf("%d", big);
}