#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int n,s1,s2,s3,s4,num=0,cnt=1,max=0,a;
	for (int i = 1; i <=5; i++)
	{
		scanf("%d %d %d %d", &s1, &s2, &s3, &s4);
		num = s1 + s2 + s3 + s4;
		if (num > max) {
			max = num;
			a = cnt;
		}
		cnt++;
	}
	printf("%d %d", a, max);
    return 0;
}