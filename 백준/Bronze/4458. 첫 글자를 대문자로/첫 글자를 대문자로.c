#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int a;
    char str[1000001]; 
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf(" %[^\n]s", str);

        if (str[0] >= 'a' && str[0] <= 'z') {
            str[0] -= ('a' - 'A');
        }

        for (int i = 0; str[i] != '\0'; i++) {
            printf("%c", str[i]);
        }
        printf("\n");
    }


    return 0;
}