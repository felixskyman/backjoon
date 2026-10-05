class Solution {
    public int solution(int n) {

        while (n % 2 == 0) {
            n /= 2;
        }

        int answer = 0;

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                answer++;

                if (i * i != n) {
                    answer++;
                }
            }
        }

        return answer;
    }
}