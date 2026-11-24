
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();

        int[][] a = new int[N][M];
        int[][] b = new int[N][M];

        for (int i = 0; i < N; i++) {
            String s = sc.next();
            for (int j = 0; j < M; j++) {
                a[i][j] = s.charAt(j) - '0';
            }
        }

        for (int i = 0; i < N; i++) {
            String s = sc.next();
            for (int j = 0; j < M; j++) {
                b[i][j] = s.charAt(j) - '0';
            }
        }

        if (N < 3 || M < 3) {
            System.out.println(Arrays.deepEquals(a, b) ? 0 : -1);
            return;
        }

        int answer = 0;

        for (int i = 0; i < N - 2; i++) {
            for (int j = 0; j < M - 2; j++) {
                if (a[i][j] != b[i][j]) {
                    for (int x = i; x < i + 3; x++) {
                        for (int y = j; y < j + 3; y++) {
                            a[x][y] ^= 1;
                        }
                    }
                    answer++;
                }
            }
        }

        System.out.println(Arrays.deepEquals(a, b) ? answer : -1);
        sc.close();
    }
}
