class Solution {
    public String solution(String s) {
        String answer = "";
        
        s = s.toLowerCase();
        
        String[] str = s.split("");
        
        int key = 0;
        
        for(int i = 0; i < str.length; i++) {
            if(key % 2 == 0) {
                str[i] = str[i].toUpperCase();
            }

            if(str[i].isBlank()) {
                key = -1;
            }
            answer += str[i];
            key++;
        }
        
        return answer;
    }
}

/*
각 단어의
짝수 idx -> 대문자
홀수 idx -> 소문자

공백을 기준으로 잘라서 변경
*/