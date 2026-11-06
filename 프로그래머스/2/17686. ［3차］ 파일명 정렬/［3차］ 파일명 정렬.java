 import java.util.Arrays;

class Solution {

    public String[] solution(String[] files) {

        String[] answer = new String[files.length];

        String[] head = new String[files.length];
        String[] number = new String[files.length];

        for(int i = 0; i < files.length; i++) {

            head[i] = "";
            number[i] = "";

            for(int j = 0; j < files[i].length(); j++) {

                char c = files[i].charAt(j);

                if(c >= '0' && c <= '9') {

                    number[i] = files[i].substring(j);

                    break;

                }

                head[i] += c;

            }

            for(int j = 0; j < number[i].length(); j++) {

                char c = number[i].charAt(j);

                if(c < '0' || c > '9') {

                    number[i] = number[i].substring(0, j);

                    break;

                }

            }

        }

        Integer[] index = new Integer[files.length];

        for(int i = 0; i < files.length; i++) {
            index[i] = i;
        }

        Arrays.sort(index, (a, b) -> {

            int result = head[a].compareToIgnoreCase(head[b]);

            if(result != 0) {
                return result;
            }

            int num1 = Integer.parseInt(number[a]);
            int num2 = Integer.parseInt(number[b]);

            return Integer.compare(num1, num2);

        });

        for(int i = 0; i < files.length; i++) {

            answer[i] = files[index[i]];

        }

        return answer;

    }

}