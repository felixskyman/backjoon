class Solution {
    public int solution(int[] topping) {
        int answer = 0;
        int[] left=new int[10001],right=new int[10001];
        int rt=0,lt=0;
        for(int i : topping) {
        	right[i]++;
        }
        for(int i : right) {
        	rt+= i>0 ? 1:  0;
        }
        for(int i : topping) {
        	right[i]--;
        	if(right[i]==0) rt--;
        	if(left[i]==0) lt++;
        	left[i]++;
        	if(lt==rt) answer++;
        }
        return answer;
    }
}