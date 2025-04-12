import java.util.*;

class Solution {
    public String solution(String s) {
        String answer = "";
        
        String[] str = s.split("");
        Arrays.sort(str, Collections.reverseOrder());
        
        for(String a : str)
           answer += a;
        
        return answer;
    }
}

/*
알파벳 순서가 뒤인게 먼저 오게
아스키코드 큰 숫자 -> 작은숫자

문자열을 문자로 쪼개서 거꾸로 정렬
*/