#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int n, num=0,min=101;
	for (int i = 1; i <= 7; i++)
	{
		scanf("%d", &n);
		if (n%2==1)
		{
			num += n;
			if (min > n) {
				min = n;
			}
		}
	}
	if (num > 0) {
		printf("%d\n%d", num, min);
	}
	else if (num == 0) {
		printf("-1");
	}
    return 0;
}