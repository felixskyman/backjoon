class Solution {
    public int solution(String word) {
        int[] weight = {781, 156, 31, 6, 1};
        String vowel = "AEIOU";

        int answer = 0;

        for (int i = 0; i < word.length(); i++) {
            int index = vowel.indexOf(word.charAt(i));
            answer += index * weight[i] + 1;
        }

        return answer;
    }
}