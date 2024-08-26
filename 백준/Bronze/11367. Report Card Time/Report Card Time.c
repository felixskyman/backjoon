#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int loop, grade;
    char name[10];
    scanf("%d", &loop);

    for (int i = 0; i < loop; i++) {
        scanf("%9s %d", name, &grade);

        if (grade >= 97 && grade <= 100) {
            printf("%s A+\n", name);
        }
        else if (grade >= 90 && grade <= 96) {
            printf("%s A\n", name);
        }
        else if (grade >= 87 && grade <= 89) {
            printf("%s B+\n", name);
        }
        else if (grade >= 80 && grade <= 86) {
            printf("%s B\n", name);
        }
        else if (grade >= 77 && grade <= 79) {
            printf("%s C+\n", name);
        }
        else if (grade >= 70 && grade <= 76) {
            printf("%s C\n", name);
        }
        else if (grade >= 67 && grade <= 69) {
            printf("%s D+\n", name);
        }
        else if (grade >= 60 && grade <= 66) {
            printf("%s D\n", name);
        }
        else {
            printf("%s F\n", name);
        }
    }

    return 0;
}