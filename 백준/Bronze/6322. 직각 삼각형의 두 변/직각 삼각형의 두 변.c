#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	int ct = 1;
	while(scanf("%f %f %f",&a,&b,&c)){
		if(a == 0 && b == 0 && c == 0) break;
		float res = 0.000;
		if(a == -1){
			res = sqrt(c*c-b*b);
		}else if(b == -1){
			res = sqrt(c*c-a*a);
		}else{
			res = sqrt(a*a+b*b);
		}
		printf("Triangle #%d\n",ct++);
		if(c != -1 && (a >= c || b >= c)){
			printf("Impossible.\n\n");
		}else{
			if(a == -1) printf("a");
			else if(b == -1) printf("b");
			else printf("c");
			printf(" = %.3f\n\n",res);
		}
	}
}