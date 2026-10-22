import java.util.*;

class Solution {
    public int solution(String dirs) {
        int answer = 0;
        int[] coor = {0, 0};
        HashSet<String> set = new HashSet<>();
        for (int i = 0; i < dirs.length(); i++) {
            int x = coor[0];
            int y = coor[1];
            if (dirs.charAt(i) == 'U') {
                coor[1] += 1;
            } else if (dirs.charAt(i) == 'D') {
                coor[1] -= 1;
            } else if (dirs.charAt(i) == 'R') {
                coor[0] += 1;
            } else {
                coor[0] -= 1;
            }
            if (coor[0] < -5 || coor[0] > 5 ||
                coor[1] < -5 || coor[1] > 5) {
                coor[0] = x;
                coor[1] = y;
                continue;
            }
            String key1 = x + "," + y + "," + coor[0] + "," + coor[1];
            String key2 = coor[0] + "," + coor[1] + "," + x + "," + y;
            if (!set.contains(key1) && !set.contains(key2)) {
                set.add(key1);
                answer++;
            }
        }
        return answer;
    }
}