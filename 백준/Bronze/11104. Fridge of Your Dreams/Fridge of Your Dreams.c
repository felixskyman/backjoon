#include <stdio.h>

int main()
{
	int num,i,j,k;
	int decimal = 0;
	int position = 0;
	int binary[24];
	scanf("%d",&num);
	for (k = 0; k < num; k++) {
		for (i = 0; i < 24; i++) {
			scanf("%1d", &binary[i]); // %1d로 받으면 숫자 하나씩 받을 수 있다.
		} 
		for (j = 23; j >= 0; j--) {
			if (binary[j] == 1) {
				decimal = decimal + (1 << position); //10진수 + 2의 position승
			}
			position++; // position은 2진수의 자릿수를 나타낸다.
		}
		printf("%d\n", decimal);
		position = 0;
		decimal = 0;
	}
}