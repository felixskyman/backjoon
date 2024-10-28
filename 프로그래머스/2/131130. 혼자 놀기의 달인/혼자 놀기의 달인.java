import java.util.*;

class Solution {
    public int solution(int[] cards) {
        int n = cards.length;
        boolean[] visited = new boolean[n];
        int max1 = 0, max2 = 0;

        for (int i = 0; i < n; i++) {
            int now = i;
            int cnt = 0;
            while (!visited[now]) {
                cnt++;
                visited[now] = true;
                now = cards[now] - 1;
            }

            if (cnt > max1) {
                max2 = max1;
                max1 = cnt;
            } else if (cnt > max2) {
                max2 = cnt;
            }
        }
        return (max1 == 0 || max2 == 0) ? 0 : max1 * max2;
    }
}
