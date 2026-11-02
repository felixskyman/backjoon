class Solution {
    public String solution(int n, int t, int m, int p) {
        String total = "";
        String answer = "";
        int num = 0;

        while (total.length() < p + (t - 1) * m) {
            total += Integer.toString(num++, n);
        }

        for (int i = p - 1; answer.length() < t; i += m) {
            answer += total.charAt(i);
        }

        return answer.toUpperCase();
    }
}