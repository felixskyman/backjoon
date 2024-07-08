#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int vowels = 0;
    char arr[1000];
    while (1) {
        scanf(" %[^\n]s", arr);
        if (arr[0] == '#') {
            break;
        }
        for (int j = 0; arr[j]; j++) {
            if (arr[j] == 'A' || arr[j] == 'E' || arr[j] == 'I' || arr[j] == 'O' || arr[j] == 'U' || arr[j] == 'a' || arr[j] == 'e' || arr[j] == 'i' || arr[j] == 'o' || arr[j] == 'u') {
                vowels += 1;
            }

            else if (arr[j] == ' ') {
                continue;
            }
        }
        printf("%d\n", vowels);
        vowels = 0;
    }
    return 0;
}