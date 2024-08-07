#pragma warning(disable:4996)
#include <stdio.h>
#include<string.h>

int main() {
    int a,g_count=0,b_count=0;
    char arr[100001];
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        g_count = 0;
        b_count = 0;
        scanf(" %[^\n]s", arr);
        for (int k = 0; k< strlen(arr); k++)
        {
            if (arr[k]== 'G' || arr[k] == 'g')
            {
                g_count++;
            }
            else if (arr[k] == 'B' || arr[k] == 'b')
            {
                b_count++;
            }
        }
        if (g_count > b_count)
        {
            printf("%s is GOOD\n", arr);
        }
        else if (g_count < b_count)
        {
            printf("%s is A BADDY\n", arr);
        }
        else
        {
            printf("%s is NEUTRAL\n", arr);
        }
    }
    return 0;
}