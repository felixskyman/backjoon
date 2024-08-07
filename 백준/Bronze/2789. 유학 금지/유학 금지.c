#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    int b[100] = { 0 };
    scanf("%s", arr);

    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] != 'C' && arr[i] != 'A' && arr[i] != 'M' && arr[i] != 'B' && arr[i] != 'R' && arr[i] != 'I' && arr[i] != 'D' && arr[i] != 'G' && arr[i] != 'E') {
            b[i]++;
        }
    }
    for (int i = 0; arr[i] != '\0'; i++) {
        if (b[i] != 0) {
            printf("%c", arr[i]);
        }
    }

    return 0;
}