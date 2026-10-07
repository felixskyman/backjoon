import java.util.*;

class Solution {
    public int solution(int[] arr) {
        int answer = arr[0];

        for (int i = 1; i < arr.length; i++) {
            int a = answer;
            int b = arr[i];

            while (b != 0) {
                int temp = a % b;
                a = b;
                b = temp;
            }

            answer = answer / a * arr[i];
        }

        return answer;
    }
}