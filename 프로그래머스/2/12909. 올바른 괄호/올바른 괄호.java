class Solution {
    boolean solution(String s) {
        int a=0;
        int b=0;
        for(int i=0;i<s.length();i++) {
        	if(s.charAt(i)=='(') {
        		a++;
        	}
            if(s.charAt(i)==')') {
        		a--;
        	}
            if(a<0){
                break;
            }
        }

        return a==0 ? true : false;
    }
}