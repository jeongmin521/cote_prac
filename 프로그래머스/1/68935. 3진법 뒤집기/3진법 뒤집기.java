class Solution {
    public int solution(int n) {
        String three = Integer.toString(n,3);
        
        StringBuffer sb = new StringBuffer(three);
        String reverse = sb.reverse().toString();
        
        int answer = Integer.parseInt(reverse,3);
        
        return answer;
    }
}


/*
3진법으로 변환
뒤집기
다시 십진법으로 변환

*/