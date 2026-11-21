import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        for (int t = 0; t < T; t++) {
            int n = sc.nextInt();

            int[][] fibo = new int[n + 1][2];

            fibo[0][0] = 1;
            fibo[0][1] = 0;

            if (n >= 1) {
                fibo[1][0] = 0;
                fibo[1][1] = 1;
            }

            for (int i = 2; i <= n; i++) {
                fibo[i][0] = fibo[i - 1][0] + fibo[i - 2][0];
                fibo[i][1] = fibo[i - 1][1] + fibo[i - 2][1];
            }

            System.out.println(fibo[n][0] + " " + fibo[n][1]);
        }

        sc.close();
    }
}
