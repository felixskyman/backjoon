import java.util.*;

class Solution {
	public int[] solution(String str) {
        HashSet<String> set=new HashSet<String>();
        String[] arr=str.replaceAll("[{]", " ").replaceAll("[}]", " ").trim().split(" , ");
        Arrays.sort(arr,(a,b)->{return a.length() - b.length();});
        int[] answer=new int[arr.length];
        int idx=0;
        for(String s1 : arr) {
        	for(String s2 : s1.split(",")) {
        		if(set.add(s2)) answer[idx++]=Integer.parseInt(s2);
        	}
        }
        return answer;
    }
}