#pragma warning(disable:4996)
#include <stdio.h>
#include<math.h>

int main() {
	int a1, a2, b1, b2;
	scanf("%d %d", &a1, &b1);
	scanf("%d %d", &b2, &a2);
	if (a1+a2 >b1+b2){
		printf("Persepolis");
	}
	else if (a1 + a2 < b1 + b2) {
		printf("Esteghlal");
	}
	else if (a1 + a2 == b1 + b2) {
		if (a1==b2){
			printf("Penalty");
		}
		else if (a1 > b2) {
			printf("Esteghlal");
		}
		else{
			printf("Persepolis");
		}
	}
    return 0;
}