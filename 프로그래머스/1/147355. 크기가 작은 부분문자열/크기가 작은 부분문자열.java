class Solution {
    public int solution(String t, String p) {
        int sublength = t.length() - p.length() + 1;
        long pNum = Long.parseLong(p);
        int answer = 0;
        
        for (int i = 0; i < sublength; i++) {
            String temp = t.substring(i, i + p.length());   
            
            if (Long.parseLong(temp) <= pNum) {
            	answer++;
            }
        }
        return answer;
    }
}