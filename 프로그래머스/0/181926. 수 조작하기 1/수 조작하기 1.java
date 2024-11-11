class Solution {
    public int solution(int n, String control) {
        int answer = n; 
        for (int i = 0; i < control.length(); i++) {
            char command = control.charAt(i); 
            if (command == 'w') {
                answer++;
            } else if (command == 's') {
                answer--;
            } else if (command == 'd') {
                answer += 10;
            } else if (command == 'a') {
                answer -= 10;
            }
        }
        return answer;
    }
}
