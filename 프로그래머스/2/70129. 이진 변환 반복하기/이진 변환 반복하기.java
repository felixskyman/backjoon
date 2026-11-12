class Solution {
    public int[] solution(String s) {
        int[] answer = new int[2];
        int count=0;
        int e=0;
        while(!s.equals("1")) {
        	for (int i = 0; i < s.length(); i++) {
        	    if (s.charAt(i) == '0') {
        	        count++;
        	    }
        	}
        	s=s.replaceAll("0", "");
        	s=Integer.toBinaryString(s.length());
        	e++;
        }
        answer[0]=e;
        answer[1]=count;
        return answer;
    }
}