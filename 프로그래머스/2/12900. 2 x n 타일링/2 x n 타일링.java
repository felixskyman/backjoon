class Solution {
    public int solution(int n) {

        if(n == 1) {
            return 1;
        }

        if(n == 2) {
            return 2;
        }

        long a1 = 1;
        long a2 = 2;
        long num = 0;

        for(int i = 2; i < n; i++) {

            num = (a2 + a1) % 1000000007;

            a1 = a2;
            a2 = num;

        }

        return (int) num;
    }
}