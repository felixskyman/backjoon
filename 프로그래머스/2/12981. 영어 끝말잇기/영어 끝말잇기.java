import java.util.*;

class Solution {
    public int[] solution(int n, String[] words) {
        int[] answer = new int[2];
        Set<String> set=new HashSet<String>();
        set.add(words[0]);
        char lastword=words[0].charAt(words[0].length()-1);
        for(int i=1;i<words.length;i++) {
        	char firstword=words[i].charAt(0);
        	if(lastword != firstword || set.contains(words[i])) {
        		answer[0]=(i%n)+1;
        		answer[1]=(i/n)+1;
        		break;
        	}
        	set.add(words[i]);
        	lastword=words[i].charAt(words[i].length()-1);
        }
        return answer;
    }
}