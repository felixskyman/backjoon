#include <stdio.h>

int main() {
    int result;
    char operator;
    scanf("%d", &result);

    while (1) {
        scanf(" %c", &operator);

        if (operator == '=') {
            printf("%d\n", result);
            break;
        }

        int operand;
        scanf("%d", &operand);

        switch (operator) {
            case '+':
                result += operand;
                break;
            case '-':
                result -= operand;
                break;
            case '*':
                result *= operand;
                break;
            case '/':
                if (operand != 0) {
                    result /= operand;
                } else {
                    printf("Error: Division by zero\n");
                    return 1; // Exit with an error code
                }
                break;
            default:
                printf("Error: Unknown operator\n");
                return 1; // Exit with an error code
        }
    }

    return 0;
}
