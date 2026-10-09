
import java.util.*;

class Solution {
    public int solution(int[] elements) {
        HashSet<Integer> hashset = new HashSet<Integer>();

        int[] circle = new int[elements.length * 2];

        for (int i = 0; i < elements.length; i++) {
            circle[i] = elements[i];
            circle[i + elements.length] = elements[i];
        }

        for (int i = 1; i <= elements.length; i++) {
            for (int k = 0; k < elements.length; k++) {
                int sum = 0;

                for (int j = k; j < k + i; j++) {
                    sum += circle[j];
                }

                hashset.add(sum);
            }
        }

        return hashset.size();
    }
}