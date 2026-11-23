import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N=sc.nextInt();
        int[] cnt=new int[101];
        for(int i=0;i<3*N;i++) {
        	cnt[sc.nextInt()]++;
        }
        long answer=0;
        for (int m = 100; m >= 1; m--) {
            if (cnt[m] != 0) continue;     

            int k = 0;                     
            int z = 0;                     
            for (int v = m + 1; v <= 100; v++) {
                if (cnt[v] == 1) k++;
                else if (cnt[v] == 0) z++;
            }

            if (k > 2) continue;           

            long P = 99 - k - z;           
            int r = 2 - k;                 

            if (r == 0) answer += 1;
            else if (r == 1) answer += P;
            else answer += P * (P - 1) / 2;
        }
        System.out.println(answer);
        sc.close();
    }
}