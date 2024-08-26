#pragma warning(disable:4996)
#include <stdio.h>

int main()
{

    int trial;
    int consonants = 0;
    int vowels = 0;
    int i = 0;
    char arr[1000];
    scanf("%d", &trial);

    while (i < trial) {
        scanf(" %[^\n]s", arr);
        for (int j = 0; arr[j]; j++) {
            if (arr[j] == 'A' || arr[j] == 'E' || arr[j] == 'I' || arr[j] == 'O' || arr[j] == 'U' || arr[j] == 'a' || arr[j] == 'e' || arr[j] == 'i' || arr[j] == 'o' || arr[j] == 'u') {
                vowels += 1;
            }

            else if (arr[j] == ' ') {
                continue;
            }

            else consonants += 1;





        }

        printf("%d %d\n", consonants, vowels);
        consonants = 0;
        vowels = 0;
        i++;

    }
    return 0;
}