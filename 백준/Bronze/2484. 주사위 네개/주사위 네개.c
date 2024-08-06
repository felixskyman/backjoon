#include<stdio.h>
int dice[7];

int main(void) {
	int i,j,N,a,b,c,d,prize,maxP,max=0,TT,T;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		TT = 0; T = 0; prize = 0; maxP = 0;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		dice[a]++; dice[b]++; dice[c]++; dice[d]++; 
		for (j = 1; j <= 6; j++) { 
			if (dice[j] == 4) { 
				prize = ( 50000 + (j) * 5000);
			}
			else if (dice[j] == 3) { 
				prize = (10000 + (j) * 1000);
			}
			else if (dice[j] == 2) { 
				if (TT == 0) { 
					prize = 1000 + (j * 100);
					TT++; 
					T = j; 
				}
				else if (TT == 1) { 
					prize = 2000 + (T * 500) + (j * 500);
				}
			}
			if ((dice[j] != 0)  && (j > maxP)) maxP = j; 
			dice[j] = 0; 
		}
		if (prize == 0)
			prize = maxP * 100;
		if (prize > max)
			max = prize;
	}
	printf("%d", max);
}