#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int a,x,n=1;
	scanf(" %d", &x);
	while (n)
	{
		scanf(" %d", &a);

		if (a == 0){
			n--;
		}
		else if (a%x == 0)
		{
			printf("%d is a multiple of %d.\n",a,x);
		}
		else if (a%x != 0)
		{
			printf("%d is NOT a multiple of %d.\n",a,x);
		}
	}
    return 0;
}