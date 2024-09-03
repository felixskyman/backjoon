#pragma warning(disable:4996)
#include <stdio.h>
#include<math.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if ((a / 2) == b) {
		printf("%d", b);
	}
	else if ((a / 2) < b) {
		printf("%d", a / 2);
	}
	else if ((a / 2) > b) {
		printf("%d", b);
	}
	else if ((a / 2) == 0 && b == 0)
	{
		printf("0");
	}
    return 0;
}