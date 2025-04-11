class Solution {
    boolean solution(String s) {
        boolean answer = true;
        int pnum = 0;
        int ynum = 0;

        s = s.toLowerCase();
        
        for(int i = 0; i < s.length(); i++) {
            if(s.charAt(i) == 'p') pnum++;
            else if(s.charAt(i) == 'y') ynum++;
        }
        
        if(pnum != ynum) {
            answer = false;
        }

        return answer;
    }
}
/*
p의 개수 pnum, y의 개수 ynum
문자열을 돌면서 p와 y의 개수 찾기
두 수비교해 같으면(0포함) T 다르면 F

*/