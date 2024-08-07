#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int A, B, C, z[3], temp;
    char order[4];

    // Input three integers
    scanf("%d %d %d", &z[0], &z[1], &z[2]);

    // Input the order
    scanf("%s", order);

    // Bubble sort
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            if (z[j] > z[j + 1]) {
                temp = z[j];
                z[j] = z[j + 1];
                z[j + 1] = temp;
            }
        }
    }

    // Assign values to A, B, C based on the order
    A = z[0];
    B = z[1];
    C = z[2];

    // Output values according to the order
    for (int i = 0; i < 3; i++) {
        char current = order[i];
        if (current == 'A') {
            printf("%d ", A);
        }
        else if (current == 'B') {
            printf("%d ", B);
        }
        else if (current == 'C') {
            printf("%d ", C);
        }
    }

    return 0;
}