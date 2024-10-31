class Solution {
    public String solution(String my_string, String overwrite_string, int s) {
        String answer = "";
        
        // 첫 번째 부분: s 위치 이전의 my_string 부분을 추가
        for (int i = 0; i < s; i++) {
            answer += my_string.charAt(i);
        }
        
        // 두 번째 부분: overwrite_string 부분을 추가
        for (int i = 0; i < overwrite_string.length(); i++) {
            answer += overwrite_string.charAt(i);
        }
        
        // 세 번째 부분: 남은 my_string 부분을 추가
        if (my_string.length() > s + overwrite_string.length()) {
            for (int i = s + overwrite_string.length(); i < my_string.length(); i++) {
                answer += my_string.charAt(i);
            }
        }

        return answer;
    }
}
