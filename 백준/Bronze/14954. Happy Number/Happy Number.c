#include <stdio.h>
int f(x) {
	int y = 0, t;
	while(x) {
		t = x % 10;
		y += t * t;
		x /= 10;
	}
	return y;
}
int main() {
	int n;
	scanf("%d", &n);
	while(n != 1 && n != 4)
		n = f(n);
	printf(n == 1 ? "HAPPY" : "UNHAPPY");
	return 0;
}