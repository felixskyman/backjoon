
class Solution {
    public int solution(String s) {
        int answer = 0;
        String par = s + s;

        for (int i = 0; i < s.length(); i++) {
            String string = "";
            boolean correct = true;

            for (int j = 0; j < s.length(); j++) {
                char c = par.charAt(i + j);

                if (c == ')' || c == '}' || c == ']') {
                    if (string.length() == 0) {
                        correct = false;
                        break;
                    }

                    char last = string.charAt(string.length() - 1);

                    if ((c == ')' && last == '(') ||
                        (c == '}' && last == '{') ||
                        (c == ']' && last == '[')) {
                        string = string.substring(0, string.length() - 1);
                    } else {
                        correct = false;
                        break;
                    }
                } else {
                    string += c;
                }
            }

            if (correct && string.length() == 0) {
                answer++;
            }
        }

        return answer;
    }
}
