import java.util.*;

class Solution {
    public int solution(String str1, String str2) {

        List<String> arr = new ArrayList<>();
        List<String> arr2 = new ArrayList<>();

        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();

        for (int i = 0; i < str1.length() - 1; i++) {
            String s = str1.substring(i, i + 2);

            if (s.matches("[a-z]{2}")) {
                arr.add(s);
            }
        }

        for (int i = 0; i < str2.length() - 1; i++) {
            String s = str2.substring(i, i + 2);

            if (s.matches("[a-z]{2}")) {
                arr2.add(s);
            }
        }

        int num = 0;
        List<String> temp = new ArrayList<>(arr2);

        for (String s : arr) {
            if (temp.remove(s)) {
                num++;
            }
        }

        int union = arr.size() + arr2.size() - num;

        if (union == 0) {
            return 65536;
        }

        return (int) ((double) num / union * 65536);
    }
}