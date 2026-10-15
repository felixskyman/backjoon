import java.util.*;

class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        int max = 0;
        int num = 0;
        int[] day = new int[progresses.length];
        ArrayList<Integer> list = new ArrayList<>();

        for (int i = 0; i < progresses.length; i++) {
            day[i] = (100 - progresses[i] + speeds[i] - 1) / speeds[i];
        }

        max = day[0];
        num = 1;

        for (int j = 1; j < day.length; j++) {
            if (day[j] > max) {
                list.add(num);
                max = day[j];
                num = 1;
            } else {
                num++;
            }
        }

        list.add(num);

        int[] answer = new int[list.size()];

        for (int i = 0; i < list.size(); i++) {
            answer[i] = list.get(i);
        }

        return answer;
    }
}