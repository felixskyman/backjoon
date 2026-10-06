class Solution {
    public int[] solution(int brown, int yellow) {
        int[] answer = new int[2];
        for (int i = 1; i <= yellow; i++) {
            if (yellow % i == 0) {
                int width = i + 2;
                int height = yellow / i + 2;

                if (width * height - yellow == brown) {
                    answer[0] = Math.max(width, height);
                    answer[1] = Math.min(width, height);
                    return answer;
                }
            }
        }
        return answer;
    }
}