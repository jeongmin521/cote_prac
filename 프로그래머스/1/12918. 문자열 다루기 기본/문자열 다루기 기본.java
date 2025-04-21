class Solution {
    public boolean solution(String s) {
        if (s.length() == 4 || s.length() == 6) {
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) < 48 || s.charAt(i) > 57) {
                    return false;
                }
            }
            return true;
        } else {
            return false;
        }
    }
}

/*
true의 조건
1. 문자열의 길이가 4 or 6
2. 모두 숫자로 구성
*/