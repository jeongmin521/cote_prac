import java.util.*;

class Solution {
    public long solution(long n) {
        long answer = 0;
        
        String[] str = Long.toString(n).split("");
        Arrays.sort(str, Collections.reverseOrder());
        
        String newStr = "";
        
        for(String s : str)
           newStr += s;
        
        answer = Long.parseLong(newStr);
        
        return answer;
    }
}