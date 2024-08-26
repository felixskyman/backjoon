#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int vowels = 0;
    char arr[1000];
    scanf(" %[^\n]s", arr);

    for (int j = 0; arr[j]; j++) {
        if (arr[j] == 'a' || arr[j] == 'e' || arr[j] == 'i' || arr[j] == 'o' || arr[j] == 'u') {
                vowels += 1;
        }

        else if (arr[j] == ' ') {
                continue;
            }
        }
        printf("%d\n", vowels);
        vowels = 0;
    
    return 0;
}