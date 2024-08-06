#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    char str[1000001];

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if ('a' <= str[i] && str[i] <= 'z') {
            str[i] -= ('a' - 'A');
        }
        else if ('A' <= str[i] && str[i] <= 'Z') {
            str[i] += ('a' - 'A');
        }
        printf("%c", str[i]);
    }

    return 0;
}