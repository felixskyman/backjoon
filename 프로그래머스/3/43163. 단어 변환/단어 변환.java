import java.util.*;

class Solution {
    boolean[] visited;

    public int solution(String begin, String target, String[] words) {
        visited = new boolean[words.length];

        return bfs(begin, target, words);
    }

    private int bfs(String begin, String target, String[] words) {
        Queue<String> queue = new LinkedList<>();
        Queue<Integer> count = new LinkedList<>();

        queue.offer(begin);
        count.offer(0);

        while (!queue.isEmpty()) {
            String current = queue.poll();
            int depth = count.poll();

            if (current.equals(target)) {
                return depth;
            }

            for (int j = 0; j < words.length; j++) {
                if (different(current, words[j]) && !visited[j]) {
                    visited[j] = true;

                    queue.offer(words[j]);
                    count.offer(depth + 1);
                }
            }
        }

        return 0;
    }

    private boolean different(String a, String b) {
        int count = 0;

        for (int i = 0; i < a.length(); i++) {
            if (a.charAt(i) != b.charAt(i)) {
                count++;
            }
        }

        return count == 1;
    }
}