class Solution {
    public int solution(int storey) {
        int answer = 0;

        while (storey > 0) {
            int n = storey % 10;

            if (n > 5) {
                answer += 10 - n;
                storey = storey / 10 + 1;
            } 
            else if (n < 5) {
                answer += n;
                storey /= 10;
            } 
            else {
                if (storey / 10 % 10 >= 5) {
                    answer += 5;
                    storey = storey / 10 + 1;
                } 
                else {
                    answer += 5;
                    storey /= 10;
                }
            }
        }

        return answer;
    }
}