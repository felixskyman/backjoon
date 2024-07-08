#pragma warning(disable:4996)
#include <stdio.h>
#include<math.h>

int main() {
    int S = 64,N,count = 0;
    scanf("%d", &N);
    while (N > 0)
    {
        if (S > N)
            S /= 2;
        else
        {
            count++;
            N -= S;
        }
    }
	printf("%d", count);
    return 0;
}