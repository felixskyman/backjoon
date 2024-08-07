#include <stdio.h>

int main() {
	int i,a,b;
	for (;;) {
			scanf("%d %d", &a, &b);
			if (a == 0 && b == 0)
				break;
			a > b ? printf("Yes\n") : printf("No\n");
		}
		return 0;
}