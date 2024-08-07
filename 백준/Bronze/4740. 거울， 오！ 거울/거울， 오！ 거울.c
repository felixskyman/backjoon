#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	while(1){
	gets(str);
	if (str[0] == '*' && str[1] =='*' && str[2] =='*') break;
	int L = strlen(str);
	for (int i=L-1; i>=0; i--)
		printf("%c",str[i]);
	printf("\n");
	}
}