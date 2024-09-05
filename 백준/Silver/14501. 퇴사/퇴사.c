#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#include <stdio.h>

int time[16];
int pay[16];
int dp[16];

int MAX(int x, int y)
{
	return ((x > y) ? (x) : (y));
}

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		scanf("%d %d", &time[i], &pay[i]);
	}

	for (int i = N; i > 0; i--)
	{
		int dead_line = i + time[i];


		if (dead_line <= N + 1)
		{
			dp[i] = MAX(dp[i + 1], dp[dead_line] + pay[i]);
		}
		else
		{
			dp[i] = dp[i + 1];
		}
	}

	printf("%d", dp[1]);
	return 0;
}