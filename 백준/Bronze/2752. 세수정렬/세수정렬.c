#include <stdio.h>

int main() {
	int a,b,c,d;
	scanf("%d %d %d", &a, &b, &c);
	for (int i = 0; i < 3; i++) {
		if (a > b) {
			d = a;
			a = b;
			b = d;
		}
		else if (b > c) {
			d = b;
			b = c;
			c = d;
		}
	}
	printf("%d %d %d", a, b, c);
	return 0;
}