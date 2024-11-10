class Solution {
    public int solution(int a, int d, boolean[] included) {
        int length = included.length;
        int[] sequence = new int[length];
        int sum = 0;

        for (int i = 0; i < length; i++) {
            sequence[i] = a + (d * i); 
            if (included[i]) {
                sum += sequence[i];
            }
        }
        return sum;
    }
}
