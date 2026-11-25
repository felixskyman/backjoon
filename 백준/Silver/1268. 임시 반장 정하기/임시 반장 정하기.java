
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        HashSet<Integer> hashset = new HashSet<>();
        HashMap<Integer, Integer> hashmap = new HashMap<Integer, Integer>();

        int max = -1;
        int num = 1;

        int n = Integer.parseInt(br.readLine());
        int[][] arr = new int[n][5];

        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());

            for (int j = 0; j < 5; j++) {
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        for (int k = 0; k < n; k++) {
            hashset.clear();

            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < n; j++) {
                    if (arr[j][i] == arr[k][i] && j != k) {
                        hashset.add(j);
                    }
                }
            }

            hashmap.put(k, hashset.size());
        }

        for (int i = 0; i < n; i++) {
            if (hashmap.get(i) > max) {
                max = hashmap.get(i);
                num = i + 1;
            }
        }

        System.out.println(num);
    }
}
