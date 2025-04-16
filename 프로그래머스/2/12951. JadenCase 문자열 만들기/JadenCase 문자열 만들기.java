import java.util.*;

class Solution {
    public String solution(String s) {
        String answer = "";
    	
    	String[] arr = s.split(" ");
    	for(int i = 0; i < arr.length; i++) {
    		String splitString = arr[i];
    		if(arr[i].length() == 0) {
    			answer += " ";
    		} 
    		else {
    			answer += splitString.substring(0, 1).toUpperCase();
    			answer += splitString.substring(1, splitString.length()).toLowerCase();
    			answer += " ";
    		}
    		
    	}

    	if(s.substring(s.length()-1, s.length()).equals(" ")){
    		return answer;
    	}

        return answer.substring(0, answer.length()-1);
    }
}

/*
JadenCase
제일 앞에 오는 글자와 공백 다음에 오는 문자는 대문자
문자열을 잘라 배열에 넣고 
조건에 해당하는 문자는 대문자로 변경

*/