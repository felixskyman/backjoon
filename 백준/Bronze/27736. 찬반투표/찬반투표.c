#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int z,x, a= 0, b = 0, c = 0;
    scanf("%d", &z);
	for (int i = 0; i < z; i++)
	{
		scanf("%d", &x);
		if (x == 1) ++a;
		else if (x == -1) ++b;
		else ++c;
	}
	int n = z / 2 + ((z & 1) ? 1 : 0);
	if (n <= c) printf("INVALID");
	else if (a > b) printf("APPROVED");
	else printf("REJECTED");
	return 0;
}