class Solution {
    public int solution(int n) {
        int c = n & -n;
        int r = n + c;
        return (((r ^ n) >> 2) / c) | r;
    }
}