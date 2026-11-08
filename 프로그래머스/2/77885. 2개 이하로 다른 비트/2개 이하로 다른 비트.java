import java.util.*;

class Solution {
    public long[] solution(long[] numbers) {
        long[] answer = new long[numbers.length];

        for(int i = 0; i < numbers.length; i++) {

            long x = numbers[i];

            if(x % 2 == 0) {
                answer[i] = x + 1;
            }
            else {
                String binary = Long.toBinaryString(x);

                if(binary.indexOf('0') == -1) {
                    binary = "0" + binary;
                }

                int index = binary.lastIndexOf('0');

                StringBuilder sb = new StringBuilder(binary);

                sb.setCharAt(index, '1');
                sb.setCharAt(index + 1, '0');

                answer[i] = Long.parseLong(sb.toString(), 2);
            }
        }

        return answer;
    }
}