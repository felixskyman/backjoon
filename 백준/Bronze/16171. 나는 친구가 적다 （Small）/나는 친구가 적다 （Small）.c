#include <stdio.h>
#include <string.h>
int main() {
	char input[101];
	char word[101];
	char realWord[101];
	int i,cnt=0;
	scanf("%s", input);
	scanf("%s", word);
	for (i = 0; i < strlen(input); i++) {
		if (input[i] < 48 || input[i] >57) //숫자가 아니면
			realWord[cnt++] = input[i]; // 그문자를 저장 
	}
	realWord[cnt] = NULL; //문자열의 마지막은 NULL
	if (strstr(realWord,word) != NULL) printf("1"); //문자열안에 word가 숨어있으면 1
	else printf("0"); //아니면 0출력
} 