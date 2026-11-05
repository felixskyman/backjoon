import java.util.*;

class Solution {
    public int[] solution(String msg) {
        HashMap<String, Integer> hashmap = new HashMap<>();
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < 26; i++) {
            hashmap.put(String.valueOf((char) ('A' + i)), i + 1);
        }
        int index = 0;
        int a = 27;
        while (index < msg.length()) {
            String w = msg.substring(index, index + 1);

            while (index + w.length() < msg.length()) {
                String next = w + msg.charAt(index + w.length());
                if (hashmap.containsKey(next)) {
                    w = next;
                } else {
                    hashmap.put(next, a++);
                    break;
                }
            }
            list.add(hashmap.get(w));
            index += w.length();
        }
        int[] answer = new int[list.size()];

        for (int i = 0; i < list.size(); i++) {
            answer[i] = list.get(i);
        }

        return answer;
    }
}