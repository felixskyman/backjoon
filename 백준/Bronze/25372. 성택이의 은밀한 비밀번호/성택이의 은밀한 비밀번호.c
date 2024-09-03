#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
    int n;
    char pw[1001];

    scanf("%d", &n);
    for(n;n > 0;n--)
    {
        scanf("%s", pw);
        printf(strlen(pw) >= 6 && strlen(pw) <= 9 ? "yes\n" : "no\n");
    }

    return (0);
}