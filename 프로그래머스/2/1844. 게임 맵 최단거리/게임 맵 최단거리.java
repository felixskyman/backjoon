
import java.util.ArrayDeque;
import java.util.Queue;

class Solution {
    public int solution(int[][] maps) {
        int n = maps.length;
        int m = maps[0].length;

        int[] dr = {-1, 1, 0, 0};
        int[] dc = {0, 0, -1, 1};

        Queue<int[]> queue = new ArrayDeque<>();
        queue.offer(new int[]{0, 0, 1});

        maps[0][0] = 0;

        while (!queue.isEmpty()) {
            int[] current = queue.poll();

            int r = current[0];
            int c = current[1];
            int distance = current[2];

            if (r == n - 1 && c == m - 1) {
                return distance;
            }

            for (int i = 0; i < 4; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];


                if (nr < 0 || nr >= n || nc < 0 || nc >= m) {
                    continue;
                }


                if (maps[nr][nc] == 0) {
                    continue;
                }

                maps[nr][nc] = 0;

                queue.offer(new int[]{nr, nc, distance + 1});
            }
        }

        return -1;
    }
}
