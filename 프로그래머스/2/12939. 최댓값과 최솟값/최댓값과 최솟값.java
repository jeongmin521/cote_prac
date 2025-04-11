import java.util.*;

class Solution {
    public String solution(String s) {
        
        String[] tmp = s.split(" ");
        int min = Integer.parseInt(tmp[0]);
        int max = Integer.parseInt(tmp[0]);
        
        
        for (int i = 0; i < tmp.length; i++){
            int num = Integer.parseInt(tmp[i]);
            
            min = Math.min(min, num);
            max = Math.max(max, num);
        }
        
            
        String answer = "";
        answer = min+" "+max;
        return answer;
    }
}


/*
문자열에 있는 숫자 값 비교
String to int

*/