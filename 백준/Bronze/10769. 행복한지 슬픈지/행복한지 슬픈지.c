#include <stdio.h>
#include <string.h>

int main() {
    char input[256];
    scanf(" %[^\n]", input);

    int happy_count = 0;
    int sad_count = 0;


    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == ':' && input[i + 1] == '-' && input[i + 2] == ')') {
            happy_count++;
        } else if (input[i] == ':' && input[i + 1] == '-' && input[i + 2] == '(') {
            sad_count++;
        }
    }

    if (happy_count == 0 && sad_count == 0) {
        printf("none\n");
    } else if (happy_count == sad_count) {
        printf("unsure\n");
    } else if (happy_count > sad_count) {
        printf("happy\n");
    } else {
        printf("sad\n");
    }

    return 0;
}
