#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to reverse a string
void reverseStr(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

// Function to check if a Turing equation is True or False
int isTuringTrue(char* equation) {
    char a[8], b[8], c[8];
    sscanf(equation, "%[^+]+%[^=]=%s", a, b, c);

    // Reverse the strings
    reverseStr(a);
    reverseStr(b);
    reverseStr(c);

    // Convert reversed strings to integers
    int a_int = atoi(a);
    int b_int = atoi(b);
    int c_int = atoi(c);

    // Check if the sum of a and b equals c
    return (a_int + b_int == c_int);
}

int main() {
    char equation[25];

    while (1) {
        scanf("%s", equation);
        if (strcmp(equation, "0+0=0") == 0) {
            printf("True\n");
            break;
        }

        if (isTuringTrue(equation)) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    }

    return 0;
}
