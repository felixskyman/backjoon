import java.util.*;

import java.util.*;

class Solution {
    public int solution(int k, int[] tangerine) {
        int answer = 0;
        HashMap<Integer,Integer> hashmap=new HashMap<>();
        for(int i=0;i<tangerine.length;i++) {
        	hashmap.put(tangerine[i], hashmap.getOrDefault(tangerine[i],0)+1);
        }
        int num=0;
        int counts[]=new int[hashmap.size()];
        for(int count : hashmap.values()) {
        	counts[num++]=count;
        }
        Arrays.sort(counts);
        for(int i=counts.length-1;i>=0;i--) {
        	k-=counts[i];
            answer++;
        	if(k<=0) {
        		break;
        	}
        }
        return answer;
    }
}