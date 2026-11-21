import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        StringBuilder sb = new StringBuilder();

        for (int t = 0; t < T; t++) {
            int x1 = sc.nextInt();
            int y1 = sc.nextInt();
            int r1 = sc.nextInt();

            int x2 = sc.nextInt();
            int y2 = sc.nextInt();
            int r2 = sc.nextInt();

            long dx = (long) x2 - x1;
            long dy = (long) y2 - y1;

            long d2 = dx * dx + dy * dy;
            long sum = (long) r1 + r2;
            long diff = Math.abs((long) r1 - r2);

            int answer;

            if (d2 == 0 && r1 == r2) {
                answer = -1;
            } else if (d2 > sum * sum) {
                answer = 0;
            } else if (d2 == sum * sum) {
                answer = 1;
            } else if (d2 < diff * diff) {
                answer = 0;
            } else if (d2 == diff * diff) {
                answer = 1;
            } else {
                answer = 2;
            }

            sb.append(answer).append('\n');
        }

        System.out.print(sb);
        sc.close();
    }
}