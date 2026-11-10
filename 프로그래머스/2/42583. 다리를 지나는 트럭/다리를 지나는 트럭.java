import java.util.*;

class Solution {
    public int solution(int bridge_length, int weight, int[] truck_weights) {
        int answer = 0;
        int size = truck_weights.length, idx = 0;
        int current = 0;

        Queue<Integer> bridge = new LinkedList<>();

        while (idx < size || current != 0) {

            if (bridge.size() == bridge_length)
                current -= bridge.poll();

            if (idx < size && current + truck_weights[idx] <= weight) {
                bridge.add(truck_weights[idx]);
                current += truck_weights[idx++];
            }
            else
                bridge.add(0);

            answer++;
        }

        return answer;
    }
}