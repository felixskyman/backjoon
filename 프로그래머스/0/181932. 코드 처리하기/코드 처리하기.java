class Solution {
    public String solution(String code) {
        String ret = "";
        int mode = 0;

        for (int i = 0; i < code.length(); i++) {
            char cha = code.charAt(i);

            if (cha == '1') {
                mode = 1 - mode; // mode 전환
            } else {
                // mode에 따라 짝수 또는 홀수 인덱스의 문자만 ret에 추가
                if ((mode == 0 && i % 2 == 0) || (mode == 1 && i % 2 != 0)) {
                    ret += cha;
                }
            }
        }

        // ret이 빈 문자열이면 "EMPTY" 반환
        return ret.isEmpty() ? "EMPTY" : ret;
    }
}
