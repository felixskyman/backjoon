import java.util.*;

class Solution
{
    public int solution(String s)
    {
        int a = 0;
        Character[] ter = new Character[s.length()];

        for (int i = 0; i < s.length(); i++) {

            ter[a++] = s.charAt(i);

            if (a >= 2 && ter[a - 1] == ter[a - 2]) {
                a -= 2;
            }
        }

        return a == 0 ? 1 : 0;
    }
}