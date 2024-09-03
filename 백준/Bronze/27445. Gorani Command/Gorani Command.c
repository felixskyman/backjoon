#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int n, m, i, x = 0, y = 1, res = 100;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) {
		int t;
		scanf("%d", &t);
		if (t < res) {
			res = t;
			x = i;
		}
		if (i == n)res = t;
	}
	for (i = 2; i <= m; i++) {
		int t;
		scanf("%d", &t);
		if (t < res) {
			res = t;
			y = i;
		}
	}
	printf("%d %d", x, y);
}