class Solution {
    int zero = 0;
    int one = 0;

    public int[] solution(int[][] arr) {
        dfs(arr, 0, 0, arr.length);

        return new int[]{zero, one};
    }

    public void dfs(int[][] arr, int row, int col, int size) {
        int value = arr[row][col];

        for(int i = row; i < row + size; i++) {
            for(int j = col; j < col + size; j++) {
                if(arr[i][j] != value) {

                    int half = size / 2;

                    dfs(arr, row, col, half);
                    dfs(arr, row, col + half, half);
                    dfs(arr, row + half, col, half);
                    dfs(arr, row + half, col + half, half);

                    return;
                }
            }
        }

        if(value == 0) {
            zero++;
        } else {
            one++;
        }
    }
}