import java.util.*;

class Solution {
    public int[] solution(String str) {
        str = str.substring(2, str.length() - 2);

        String[] rows = str.split("\\},\\{");
        int[][] arr = new int[rows.length][];

        for (int i = 0; i < rows.length; i++) {
            String[] nums = rows[i].split(",");
            arr[i] = new int[nums.length];

            for (int j = 0; j < nums.length; j++) {
                arr[i][j] = Integer.parseInt(nums[j]);
            }
        }

        int[] answer = new int[arr.length];
        int count = 0;

        Arrays.sort(arr, (a, b) -> Integer.compare(a.length, b.length));

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                boolean exists = false;

                for (int k = 0; k < count; k++) {
                    if (answer[k] == arr[i][j]) {
                        exists = true;
                        break;
                    }
                }

                if (!exists) {
                    answer[count++] = arr[i][j];
                }
            }
        }

        return answer;
    }
}
