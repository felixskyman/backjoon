import java.util.*;

class Solution {
    public int solution(int[] topping) {
        int answer = 0;

        HashMap<Integer, Integer> topp = new HashMap<>();

        for (int i = 0; i < topping.length; i++) {
            topp.put(topping[i], topp.getOrDefault(topping[i], 0) + 1);
        }

        HashMap<Integer, Integer> left = new HashMap<>();
        HashMap<Integer, Integer> right = new HashMap<>(topp);

        for (int j = 0; j < topping.length - 1; j++) {
            left.put(topping[j], left.getOrDefault(topping[j], 0) + 1);

            right.put(topping[j], right.get(topping[j]) - 1);

            if (right.get(topping[j]) == 0) {
                right.remove(topping[j]);
            }

            if (left.size() == right.size()) {
                answer++;
            }
        }

        return answer;
    }
}