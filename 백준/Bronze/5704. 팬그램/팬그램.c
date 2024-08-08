#include <stdio.h>

int main() {
	char s[201], m[26];
	int i;
	while (gets(s) && !(s[0] == '*' && !s[1])) {
		for (i = 0 ; i < 26 ; i++) m[i] = 0;
		for (i = 0 ; s[i] ; i++) m[s[i] - 'a'] = 1;
		for (i = 0 ; i < 26 && m[i] ; i++);
		if (i == 26) printf("Y\n");
		else printf("N\n");
	}
}