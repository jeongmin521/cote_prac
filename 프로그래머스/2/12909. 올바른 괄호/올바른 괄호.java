import java.util.*;

class Solution {
    boolean solution(String s) {
        boolean answer = true; 
        Stack<String> st = new Stack<>(); //s의 값을 넣어줄 스택
        String[] arr = s.split(""); //s를 쪼개서 배열에 넣어줌
        
        if (arr[0] == ")"){
            return false;
        } // )로 시작하면 false
        
        for(int i = 0; i < arr.length; i++){ //s의 값이 저장된 배열을 돌면서
            if(arr[i].equals("(")){
                st.add(arr[i]);
            } // (이면 스택에 추가
            else{
                if(st.isEmpty()){
                    return false;
                } //스택이 비어있는데 ) 가 나오면 false리턴
                else{ st.pop(); } //)가 나오면 스택에 먼저 있던( 를 지움
            }
        }
        
        if(!st.isEmpty()){
            answer = false;
        }//스택이 비어있지 않으면( (가 있는데 닫히지 않음) false
        return answer;
    }
}

/*
시작이 ) 이면 false
stack에 순서대로 넣으면서 (가 들어가고 그 후에 )가 들어오면 최근에 들어온 (를 빼냄
그래서 마지막에 (가 남아있으면 false
문자열s를 배열에 넣어서 스택에 넣기
*/