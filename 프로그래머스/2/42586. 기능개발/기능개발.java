import java.util.*;

class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        Queue<Integer> q=new LinkedList<>();
        ArrayList<Integer> al=new ArrayList<>();
        for(int i=0;i<speeds.length;i++) {
        	int remain = 100 - progresses[i];
            int date = (remain + speeds[i] - 1) / speeds[i];
        	if(!q.isEmpty() && q.peek()<date) {
        		al.add(q.size());
        		q.clear();
        	}
        	q.offer(date);
        }
        al.add(q.size());
        int[] answer = new int[al.size()];
        for(int j=0;j<answer.length;j++) {
        	answer[j]=al.get(j);
        }
        return answer;
    }
}