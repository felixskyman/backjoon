/*
 * [1343] 폴리오미노 (실버5)
 *
 * 1. 문제 요약 : 겹침없는 X를 모두 폴리오미노로 덮으려함
 * 2. 핵심 아이디어 : replaceall와 정규식을 통해 폴리오미노로 변환
 * 3. 주요 메서드 / 자료구조 : replaceall,정규식
 * 4. 시간 복잡도 : O(n)
 * 5. 주의할 점 :  정규식
 */
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String arr = br.readLine();
        arr = arr.replaceAll("X{4}", "AAAA");
        arr = arr.replaceAll("X{2}", "BB");
        if(arr.contains("X")) {
            System.out.println("-1");
        }else {
            System.out.println(arr);
        }
    }
}
