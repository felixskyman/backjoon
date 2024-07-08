#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void)
{
	int n;
	int t;
	char a[1001][101] = { 0 };
	int r = 1;
	int co = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)scanf("%s", a[i]);
	t = strlen(a[0]) - 1;
	for (int i = 0; i < n-1; ++i) {
		for (int j = i+1; j < n; ++j) {
			co = 0;
			for (int k = 0; k < r; ++k) {
				if (a[i][t - k] != a[j][t - k])break;
				++co;
				if (co >= r)++r;
			}
		}
	}
	printf("%d", r);
	return 0;
}