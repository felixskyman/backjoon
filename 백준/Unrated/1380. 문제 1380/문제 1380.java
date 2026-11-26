/*
 * [1380] 귀걸이 (실버5)
 *
 * 1. 문제 요약 : 교감 선생님이 목걸이를 압수 
 * 			   압수당한 귀걸이에 숫자를 매겨 리스트를 작성
 * 			   압수된 귀걸이에 여학생 번호와 임의로 'A'또는 'B'를 선택함
 * 			   일과 후 귀걸이를 받으러 옴
 * 			   귀걸이를 받지 못한 여학생의 이름을 출력
 * 2. 핵심 아이디어 : 순서를 보장하는 arraylist를 이용한 순서를 저장 
 * 	              중복을 체크하여 arraylist내에 이름을 삭제하는 hashset
 * 				  남아있는 이름을 저장하는 arraylist를 하나 더 생성한후 기존에 사용하던 arraylist,hashet은 새 입력 전 초기화
 * 3. 주요 메서드 / 자료구조 : clear(),add(),remove(),addAll()
 * 4. 시간 복잡도 : O(n^2)
 * 5. 주의할 점 :  A와B는 상관없이 주어진 순서만으로도 압류 여부를 확인할 수 있음
 */

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        ArrayList<String> list = new ArrayList<>();
        HashSet<String> hashset = new HashSet<>();

        int count = 1;

        while (true) {
            int n = Integer.parseInt(br.readLine());

            if (n == 0) {
                break;
            }

            for (int i = 0; i < n; i++) {
                String name = br.readLine();
                list.add(name);
            }

            for (int j = 0; j < 2 * n - 1; j++) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                String a = st.nextToken();

                if (!hashset.add(a)) {
                    hashset.remove(a);
                }
            }

            String answer = hashset.iterator().next();

            System.out.println(count + " " + list.get(Integer.parseInt(answer) - 1));

            list.clear();
            hashset.clear();
            count++;
        }
    }
}