#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int a,b;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b);
		for (int j = 0; j < b; j++) {
			printf("=");
		}
		printf("\n");
	}
    return 0;
}