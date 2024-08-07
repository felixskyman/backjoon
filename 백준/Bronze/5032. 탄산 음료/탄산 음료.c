#pragma warning(disable:4996)
#include <stdio.h>

int main() { 
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int t = a + b;
	int n = 0;
	while (t>=c)
	{
		int e = t / c;
		n += e;
		t = e + t % c;
	}
	printf("%d\n", n);
	return 0;
}