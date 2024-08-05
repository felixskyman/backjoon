#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* number_to_word(int num) {
    switch (num) {
    case 0: return "zero";
    case 1: return "one";
    case 2: return "two";
    case 3: return "three";
    case 4: return "four";
    case 5: return "five";
    case 6: return "six";
    case 7: return "seven";
    case 8: return "eight";
    case 9: return "nine";
    }
    return "";
}

void convert_to_words(int num, char* result) {
    if (num < 10) {
        snprintf(result, 20, "%s", number_to_word(num));
    }
    else {
        snprintf(result, 20, "%s %s", number_to_word(num / 10), number_to_word(num % 10));
    }
}

int compare(const void* a, const void* b) {
    char word1[20], word2[20];
    convert_to_words(*(int*)a, word1);
    convert_to_words(*(int*)b, word2);
    return strcmp(word1, word2);
}

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int numbers[100];
    int count = 0;

    for (int i = M; i <= N; ++i) {
        numbers[count++] = i;
    }

    qsort(numbers, count, sizeof(int), compare);

    for (int i = 0; i < count; ++i) {
        if (i%10==0 && i>=1)
        {
            printf("\n");
        }
        printf("%d ", numbers[i]);
    }

    return 0;
}