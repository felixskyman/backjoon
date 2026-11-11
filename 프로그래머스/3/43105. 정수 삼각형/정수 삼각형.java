class Solution {
    public int solution(int[][] triangle) {
        int answer = 0;
        int n=triangle.length;
        int[] dp = triangle[n - 1].clone();
        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                dp[j] = triangle[i][j] + Math.max(dp[j], dp[j + 1]);
            }
        }
        for(int j=0;j<dp.length;j++) {
        	answer=Math.max(answer, dp[j]);
        }
        return answer;
    }
}