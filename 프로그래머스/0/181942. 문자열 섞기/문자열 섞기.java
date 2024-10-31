class Solution {
    public String solution(String str1, String str2) {
        String answer = "";
        int i = 0;
        while (str1.length() > i || str2.length() > i) {
            if (i < str1.length()) {
                answer += str1.charAt(i);
            }
            if (i < str2.length()) {
                answer += str2.charAt(i);
            }
            i++;
        }
        return answer;
    }
}
