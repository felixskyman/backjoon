import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
long bs = sc.nextLong();
long bc = sc.nextLong();
long bo = sc.nextLong();
long bn = sc.nextLong();
        System.out.println(Math.min((bs+bn)/3,(bc+2*bo)/6));
        sc.close();
    }
}