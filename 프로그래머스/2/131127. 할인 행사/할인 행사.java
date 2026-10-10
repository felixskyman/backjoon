
import java.util.*;

class Solution {
    public int solution(String[] want, int[] number, String[] discount) {
        int answer = 0;

        HashMap<String, Integer> hashmap = new HashMap<>();

        for (int i = 0; i < number.length; i++) {
            hashmap.put(want[i], number[i]);
        }

        for (int j = 0; j <= discount.length - 10; j++) {
            HashMap<String, Integer> copy = new HashMap<>(hashmap);

            for (int k = j; k < j + 10; k++) {
                if (copy.containsKey(discount[k])) {
                    copy.put(discount[k], copy.get(discount[k]) - 1);
                }
            }

            boolean correct = true;

            for (int value : copy.values()) {
                if (value > 0) {
                    correct = false;
                    break;
                }
            }

            if (correct) {
                answer++;
            }
        }

        return answer;
    }
}
