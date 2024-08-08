#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, len;
    char* arr = NULL;
    scanf("%d", &size);
    arr = malloc(sizeof(char) * size);

    for (int i = 0; i < size; i++) {
        scanf("%s", arr);
        len = strlen(arr);

        if (arr[len - 1] % 2 == 0) printf("even\n");
        else printf("odd\n");
    }

    return 0;
}