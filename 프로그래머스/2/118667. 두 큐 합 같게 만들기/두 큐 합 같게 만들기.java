import java.util.*;

class Solution {
    public int solution(int[] queue1, int[] queue2) {
        Queue<Integer> q1 = new LinkedList<>();
        Queue<Integer> q2 = new LinkedList<>();

        long sum1 = 0;
        long sum2 = 0;

        for (int num : queue1) {
            q1.offer(num);
            sum1 += num;
        }

        for (int num : queue2) {
            q2.offer(num);
            sum2 += num;
        }

        if ((sum1 + sum2) % 2 != 0) {
            return -1;
        }

        int answer = 0;
        int limit = queue1.length * 4;

        while (sum1 != sum2 && answer < limit) {

            if (sum1 > sum2) {
                int num = q1.poll();

                q2.offer(num);

                sum1 -= num;
                sum2 += num;

            } else {
                int num = q2.poll();

                q1.offer(num);

                sum2 -= num;
                sum1 += num;
            }

            answer++;
        }

        return sum1 == sum2 ? answer : -1;
    }
}