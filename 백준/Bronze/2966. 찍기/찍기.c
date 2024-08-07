#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int N, ascore = 0, bscore = 0, gscore = 0;
    char answers[101];
    char adrian[4] = "ABC";
    char bruno[5] = "BABC";
    char goran[7] = "CCAABB";
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", &answers[i]);
    }
    for (int i = 0; i < N; i++) {
        if (answers[i] == adrian[i % 3]) {
            ascore++;
        }
        if (answers[i] == bruno[i % 4]) {
            bscore++;
        }
        if (answers[i] == goran[i % 6]) {
            gscore++;
        }
    }

    int max_score = ascore;
    if (bscore > max_score) {
        max_score = bscore;
    }
    if (gscore > max_score) {
        max_score = gscore;
    }

    printf("%d\n", max_score);
    if (ascore == max_score) {
        printf("Adrian\n");
    }
    if (bscore == max_score) {
        printf("Bruno\n");
    }
    if (gscore == max_score) {
        printf("Goran\n");
    }

    return 0;
}