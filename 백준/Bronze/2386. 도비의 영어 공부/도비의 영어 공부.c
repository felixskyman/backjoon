#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
    char arr[250], word;
    while (1) {
        int count = 0;
        scanf(" %c %[^\n]s", &word, arr);
        if (word == '#') {
            break;
        }
        for (int i = 0; i < strlen(arr); i++) {
            if (arr[i] == word) {
                count++;
            }
            if (arr[i] == word - 32){
                count++;
            }
        }
        printf("%c %d\n", word, count);
    }
    return 0;
}