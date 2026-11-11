class Solution {
    boolean[] visited;

    public int solution(int n, int[][] computers) {
        int answer = 0;
        visited = new boolean[n];

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfs(i, computers);
                answer++;
            }
        }

        return answer;
    }

    private void dfs(int now, int[][] computers) {
        visited[now] = true;

        for (int i = 0; i < computers.length; i++) {
            if (computers[now][i] == 1 && !visited[i]) {
                dfs(i, computers);
            }
        }
    }
}