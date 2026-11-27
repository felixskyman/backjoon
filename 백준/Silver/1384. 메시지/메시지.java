/*
 * [1384] 메시지 (실버5)
 *
 * 1. 문제 요약 : 문제아들을 위한 치료시간 종이에 이름을 적고 왼쪽으로 종이를 넘김
 * 			   이때 종이를 받은 아이들이 종이 맨위에 쓰인 아이에게 좋은 메세지를 적음
 * 			   종이에 나쁜 메세지를 적은 아이를 누가(A) 누구(B)에게 나쁜 말을 했는지 "A was nasty about B"로 한 줄씩 출력 
 * 2. 핵심 아이디어 : 
 * 3. 주요 메서드 / 자료구조 : 
 * 4. 시간 복잡도 : O(n^2)
 * 5. 주의할 점 :  A was nasty about B에서 B는 적힘을 당한 사람이므로 A만 찾으면 된다!
 */


import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int count = 1;

        while (true) {

            int n = Integer.parseInt(br.readLine());

            if (n == 0) {
                break;
            }

            ArrayList<String> names = new ArrayList<>();
            String[][] messages = new String[n][n];

            for (int i = 0; i < n; i++) {
                StringTokenizer st = new StringTokenizer(br.readLine());

                names.add(st.nextToken());

                for (int j = 0; j < n - 1; j++) {
                    messages[i][j] = st.nextToken();
                }
            }

            System.out.println("Group " + count);

            boolean found = false;

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n - 1; j++) {

                    if (messages[i][j].equals("N")) {

                        int writer = (i - j - 1 + n) % n;

                        System.out.println(
                            names.get(writer) + " was nasty about " + names.get(i)
                        );

                        found = true;
                    }
                }
            }

            if (!found) {
                System.out.println("Nobody was nasty");
            }

            count++;
            System.out.println();
        }
    }
}
