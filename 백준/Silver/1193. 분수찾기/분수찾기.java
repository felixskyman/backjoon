import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int k = 1;
        while (k * (k + 1) / 2 < N) {
            k++;
        }
        int pos = N - (k * (k - 1) / 2);

        int row, col;

        if (k % 2 == 0) {
            row = pos;
            col = k - pos + 1;
        } else {
            row = k - pos + 1;
            col = pos;
        }
        System.out.println(row + "/" + col);
        sc.close();
    }
}