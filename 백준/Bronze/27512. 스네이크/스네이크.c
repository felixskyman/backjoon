#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	if ((n * m)%2==0){
		printf("%d", n * m);
	}
	else if ((n * m) % 2 != 0) {
		printf("%d", n * m-1);
	}
	return 0;
}