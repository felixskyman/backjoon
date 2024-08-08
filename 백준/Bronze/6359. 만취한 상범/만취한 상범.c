#pragma warning(disable:4996)
#include <stdio.h>

int main() { 
	int i, t, n;
	scanf("%d", &t); 
	while (t--) { 
		scanf("%d", &n); 
		for (i = 1; i * i <= n; i++); 
		printf("%d\n", i - 1); 
	} 
}