#pragma warning(disable:4996)
#include <stdio.h>
#include<math.h>

int main() {
	int n,a,d,g,max=0,sum=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &a, &d, &g);
		sum = a * (d + g);
		if (a==(d+g)){
			sum = sum * 2;
		}
		if (max<sum)
		{
			max = sum;
		}
	}
	printf("%d", max);
    return 0;
}