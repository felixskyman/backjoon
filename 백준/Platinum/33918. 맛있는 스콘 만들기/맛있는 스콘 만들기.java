
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();
        int C = sc.nextInt();
        int D = sc.nextInt();

        int[] dp = new int[M + 1];

        int b = sc.nextInt();

        for (int x = 1; x <= M; x++) {
            dp[x] = M - Math.abs(b - x);
        }

        int limit = D / C;

        for (int i = 1; i < N; i++) {
            b = sc.nextInt();

            int[] next = new int[M + 1];
            Arrays.fill(next, Integer.MIN_VALUE);

            for (int start = 1; start <= C && start <= M; start++) {
                int len = (M - start) / C + 1;

                Deque<Integer> deque = new ArrayDeque<>();
                int add = 0;

                for (int j = 0; j < len; j++) {

                    while (!deque.isEmpty() &&
                           deque.peekFirst() < j - limit) {
                        deque.pollFirst();
                    }

                    int end = Math.min(len - 1, j + limit);

                    while (add <= end) {
                        int temp = start + add * C;

                        while (!deque.isEmpty()) {
                            int last = start + deque.peekLast() * C;

                            if (dp[last] <= dp[temp]) {
                                deque.pollLast();
                            } else {
                                break;
                            }
                        }

                        deque.offerLast(add);
                        add++;
                    }

                    if (!deque.isEmpty()) {
                        int best = start + deque.peekFirst() * C;
                        int curr = start + j * C;

                        next[curr] = dp[best] + M - Math.abs(b - curr);
                    }
                }
            }

            dp = next;
        }

        int answer = 0;

        for (int x = 1; x <= M; x++) {
            answer = Math.max(answer, dp[x]);
        }

        System.out.println(answer);
        sc.close();
    }
}
