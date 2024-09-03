#include <stdio.h>
#include <string.h>

int main() {

	int N, X, count;
	scanf("%d %d", &N, &X);
	int T[101];
	for (int i = 0; i < N; i++) {
		scanf("%d", &T[i]);
	}
	count = 0;
	while (1) {
		if (T[count] < X) {
			break;
		}
		X += 1;
		count += 1;
		if (count >= N) {
			count = 0;
		}
	}

	printf("%d", count + 1);

	return 0;
}