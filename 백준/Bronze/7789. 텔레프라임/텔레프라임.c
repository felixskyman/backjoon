#include <stdio.h>
#include <math.h>

// 소수 판별 함수
int is_prime(int num) {
    if (num <= 1) return 0; // 1 이하는 소수가 아님
    if (num == 2) return 1; // 2는 소수
    if (num % 2 == 0) return 0; // 짝수는 소수가 아님
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return 0; // 나누어 떨어지면 소수가 아님
    }
    return 1; // 나누어 떨어지지 않으면 소수
}

int main() {
    char old_number[7]; // 기존 전화번호를 저장할 문자열
    char new_digit[2];  // 추가될 한 자리 번호를 저장할 문자열
    int old_num, new_num;

    // 입력 받기
    scanf("%s %s", old_number, new_digit);

    // 기존 전화번호를 정수로 변환
    sscanf(old_number, "%d", &old_num);
    
    // 새로운 전화번호를 문자열로 결합
    char new_number[8];
    snprintf(new_number, sizeof(new_number), "%s%s", new_digit, old_number);

    // 새로운 전화번호를 정수로 변환
    sscanf(new_number, "%d", &new_num);

    // 소수 판별
    if (is_prime(old_num) && is_prime(new_num)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
