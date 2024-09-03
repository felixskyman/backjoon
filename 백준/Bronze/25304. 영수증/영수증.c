#pragma warning(disable:4996)
#include <stdio.h>
#include<math.h>

int main() {
	long long int total,sum=0;
	int n,a, b;
	scanf(" %lld", &total);
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		sum = sum + (a * b);
	}
	if (total==sum){
		printf("Yes");
	}
	else if (total != sum){
		printf("No");
	}
    return 0;
}