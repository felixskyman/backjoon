#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	long long int r, c, n,n1,n2;
	scanf("%lld %lld %lld",&r,&c,&n);
	if (r%n==0)
	{
		n1 = r / n;
	}
	else if (r%n!=0){
		n1 = (r / n)+1;
	}
	if (c % n == 0)
	{
		n2 = c / n;
	}
	else if (c % n != 0) {
		n2 = (c / n) + 1;
	}
	printf("%lld\n", n1 * n2);
    return 0;
}