#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int a, b, c,n=1;
    
	while (n)
	{
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0){
			n--;
		}
		else if (b-a==c-b)
		{
			printf("AP %d\n", (c - b) + c);
		}
		else if (b/a==c/b)
		{
			printf("GP %d\n", c*(c/b));
		}
	}
    return 0;
}