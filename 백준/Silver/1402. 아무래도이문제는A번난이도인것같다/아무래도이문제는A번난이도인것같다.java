/*
 * [1402] 아무래도이문제는A번 난이도 인 것 같다 (실버5)
 *
 * 1. 문제 요약 : n개의 테스트 케이스가 입력되면 두번째 줄에 A,B가 입력됨
 *               A=a1*...An B=a1+a2+...+an이 성립하면 yes를 출력
 * 2. 핵심 아이디어 : 정수범위내에서는 무조건 가능하다
 * 3. 주요 메서드 / 자료구조 : 
 * 4. 시간 복잡도 : O(n)
 * 5. 주의할 점 :  문제 잘읽기!
 */
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            int A = sc.nextInt();
            int B = sc.nextInt();

            System.out.println("yes");
        }
    }
}