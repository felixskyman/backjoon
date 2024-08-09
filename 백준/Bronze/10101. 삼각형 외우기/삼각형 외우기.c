#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int a[3];
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	if ((a[0] + a[1] + a[2]) > 180 || (a[0] + a[1] + a[2]) < 180) {
		printf("Error");
	}
	else if (a[0] ==60 && a[1] == 60 && a[2]==60) {
		printf("Equilateral");
	}
	else if (a[0] == a[1] || a[1] == a[2] || a[0] == a[2]) {
		printf("Isosceles");
	}
	else if (a[0] != a[1] != a[2]) {
		printf("Scalene");
	}

    return 0;
}