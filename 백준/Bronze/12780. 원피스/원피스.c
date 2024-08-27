#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, hlen, nlen, cnt = 0;
	char h[100001], n[11];
	scanf("%s", h);
	scanf("%s", n);
	hlen = strlen(h);
	nlen = strlen(n);
	for (i = 0; i + nlen <= hlen; i++)
		if (strncmp(&h[i], n, nlen) == 0)
			cnt++;
	printf("%d\n", cnt);
	return 0;
}