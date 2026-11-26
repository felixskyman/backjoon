
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int n = Integer.parseInt(st.nextToken());

        int num = a;

        while(num >= b) {
            num %= b;
        }

        int count = 0;

        for(int i = 0; i < n; i++) {
            num *= 10;
            count = num / b;
            num %= b;
        }

        System.out.println(count);
    }
}
