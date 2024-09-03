#include<stdio.h>
#include<string.h>

int main() {
	int a, b;
	char str[100001], sel[100000];
	scanf("%s", str);
	scanf(" %[^\n]s", sel);
	a = strlen(str);
	b = strlen(sel);
	for (int i = 0; i <a; i++) {
		for (int j = 0; j<b; j++) {
			if (str[i] == sel[j]) {
				if (str[i] >= 'A' && str[i] <= 'Z') {
					str[i] -= ('A' - 'a');
				}
			}
		}
	}
	printf("%s", str);
	return 0;
}