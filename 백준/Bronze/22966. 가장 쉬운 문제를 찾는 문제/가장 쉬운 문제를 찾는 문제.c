#pragma warning(disable:4996)
#include <stdio.h>

#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    char easiest_problem_title[101];  
    int easiest_problem_difficulty = 10001;  

    // N개의 문제 정보 입력 및 가장 쉬운 문제 찾기
    for (int i = 0; i < N; i++) {
        char title[101];  // 현재 문제의 제목을 저장할 배열
        int difficulty;

        // 문제 제목과 난이도 입력
        scanf("%s %d", title, &difficulty);

        // 현재 문제가 현재까지 가장 쉬운 문제보다 쉬우면 정보 업데이트
        if (difficulty < easiest_problem_difficulty) {
            // 문제 제목을 복사
            strcpy(easiest_problem_title, title);
            easiest_problem_difficulty = difficulty;
        }
    }

    // 결과 출력
    printf("%s\n", easiest_problem_title);

    return 0;
}