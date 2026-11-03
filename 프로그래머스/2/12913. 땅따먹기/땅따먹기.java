class Solution {
    int solution(int[][] land) {

        for (int i = 1; i < land.length; i++) {

            int max = -1;
            int second = -1;
            int maxIndex = -1;

            for (int j = 0; j < 4; j++) {

                if (land[i - 1][j] > max) {
                    second = max;
                    max = land[i - 1][j];
                    maxIndex = j;
                } else if (land[i - 1][j] > second) {
                    second = land[i - 1][j];
                }
            }

            for (int j = 0; j < 4; j++) {

                if (j == maxIndex) {
                    land[i][j] += second;
                } else {
                    land[i][j] += max;
                }
            }
        }

        int answer = 0;

        for (int j = 0; j < 4; j++) {
            answer = Math.max(answer, land[land.length - 1][j]);
        }

        return answer;
    }
}