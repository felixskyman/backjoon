#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
    int count = 0, current[26] = {}; // 배열 크기를 26으로 변경
    char key[1000000];

    scanf("%s", key);

    for (int i = 0; i <strlen(key)-1; i++) { // 반복 횟수 조건 수정
        if (key[0] == key[i + 1]) {
            count++;
        }
    }
    printf("%d", count+1);
    return 0;
}