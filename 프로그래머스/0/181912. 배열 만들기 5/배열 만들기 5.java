import java.util.ArrayList;

class Solution {
    public int[] solution(String[] intStrs, int k, int s, int l) {
        ArrayList<Integer> resultList = new ArrayList<>();
        
        for (String str : intStrs) {
            String substring = str.substring(s, s + l);
            int value = Integer.parseInt(substring); 
            
            if (value > k) {
                resultList.add(value);
            }
        }

        return resultList.stream().mapToInt(i -> i).toArray();
    }
}
