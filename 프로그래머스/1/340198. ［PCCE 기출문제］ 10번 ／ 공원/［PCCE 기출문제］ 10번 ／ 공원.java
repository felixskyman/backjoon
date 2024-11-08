import java.util.*;

class Solution {
    static String[][] park;

    static boolean check(int x, int y, int size) {
        int n = park.length;
        int m = park[0].length;

        if (x + size > n || y + size > m) return false;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (!"-1".equals(park[x + i][y + j])) {
                    return false; 
                }
            }
        }
        return true; 
    }

    public int solution(int[] mats, String[][] inputPark) {
        park = inputPark; 
        Arrays.sort(mats); 
        int maxMat = -1; 

        
        for (int i = 0; i < park.length; i++) {
            for (int j = 0; j < park[0].length; j++) {
                if ("-1".equals(park[i][j])) { 
                    for (int matSize : mats) {
                        if (check(i, j, matSize)) {
                            maxMat = Math.max(maxMat, matSize); 
                        }
                    }
                }
            }
        }

        return maxMat;
    }
}
