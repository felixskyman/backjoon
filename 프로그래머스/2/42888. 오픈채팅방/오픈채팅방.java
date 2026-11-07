
import java.util.*;

class Solution {
    public String[] solution(String[] record) {
        int index = 0;

        HashMap<String, String> hashmap = new HashMap<>();

        for (int i = 0; i < record.length; i++) {
            String[] records = record[i].split(" ");

            if (records[0].equals("Enter") || records[0].equals("Change")) {
                hashmap.put(records[1], records[2]);
            }

            if (records[0].equals("Enter") || records[0].equals("Leave")) {
                index++;
            }
        }

        String[] answer = new String[index];

        index = 0;

        for (int i = 0; i < record.length; i++) {
            String[] records = record[i].split(" ");

            if (records[0].equals("Enter")) {
                answer[index++] = hashmap.get(records[1]) + "님이 들어왔습니다.";
            }
            else if (records[0].equals("Leave")) {
                answer[index++] = hashmap.get(records[1]) + "님이 나갔습니다.";
            }
        }

        return answer;
    }
}
