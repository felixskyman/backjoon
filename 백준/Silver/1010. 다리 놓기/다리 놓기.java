import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        for (int i = 0; i < T; i++) {
            long N = sc.nextLong();
            long M = sc.nextLong();

            long answer = 1;

            for (int j = 1; j <= N; j++) {
                answer = answer * (M - j + 1) / j;
            }

            System.out.println(answer);
        }

        sc.close();
    }
}