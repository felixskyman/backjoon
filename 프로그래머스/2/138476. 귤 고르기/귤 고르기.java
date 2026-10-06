import java.util.*;
	
class Solution {
    public int solution(int k, int[] tangerine) {
        HashMap<Integer, Integer> map = new HashMap<>();

        for (int n : tangerine) {
            map.put(n, map.getOrDefault(n, 0) + 1);
        }

        int[] count = new int[map.size()];

        int i = 0;
        for (int value : map.values()) {
            count[i++] = value;
        }

        Arrays.sort(count);

        int answer = 0;

        for (i = count.length - 1; i >= 0; i--) {
            k -= count[i];
            answer++;

            if (k <= 0) {
                break;
            }
        }

        return answer;
    }
}