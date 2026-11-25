import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        HashSet<String> set = new HashSet<>();

        for (int i = 0; i < T; i++) {
            set.add(sc.next());
        }

        String[] words = set.toArray(new String[0]);

        Arrays.sort(words, (a, b) -> {
            if (a.length() == b.length()) {
                return a.compareTo(b);
            }
            return a.length() - b.length();
        });

        for (String word : words) {
            System.out.println(word);
        }

        sc.close();
    }
}