
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        long[] arr = new long[N];

        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextLong();
        }

        long curr = arr[N - 1];
        long answer = curr;

        for (int i = N - 2; i >= 0; i--) {
            curr = Math.min(curr, arr[i]);
            answer += curr;
        }

        System.out.println(answer);
        sc.close();
    }
}
