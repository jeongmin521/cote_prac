class Solution {
    public String solution(String[] seoul) {
        String answer = "";
        int idx = 0;
        for(int i = 0; i < seoul.length; i++){
            if(seoul[i].equals("Kim")){
                idx = i;
                break;
            }
        }
        answer = "김서방은 " + Integer.toString(idx) + "에 있다";
        return answer;
    }
}

/*
주어진 배열에서 "kim"이라는 element가 있는 인덱스 찾기

 == 는 비교하는 두 대상의 주소값을 비교 
 equals() 는 비교하는 두 대상의 값을 비교

 ==으로 계속 했을 때 0만 나왔던 이유
*/
