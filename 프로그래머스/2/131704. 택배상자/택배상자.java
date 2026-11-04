import java.util.*;

class Solution {
    public int solution(int[] order) {
        int answer = 0;
        Stack<Integer> sub = new Stack<>();
        int num = 1;
        int a = 0;

        while (num <= order.length) {
            sub.add(num++);

            while (!sub.isEmpty() && a < order.length
                    && sub.peek() == order[a]) {
                sub.pop();
                answer++;
                a++;
            }
        }

        return answer;
    }
}