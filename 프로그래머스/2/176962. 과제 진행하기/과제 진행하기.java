import java.util.*;

class Solution {
    
    //시작시간을 정수로 변경
    public int TimeInt (String time){
        String[] t = time.split(":");
        int hour =Integer.parseInt(t[0])*60;
        int minute =Integer.parseInt(t[1]);

        return hour + minute;
    }
    
    public String[] solution(String[][] plans) {
        String[] answer = new String[plans.length];
        
        //중간에 멈춘 과제 
        Stack<String[]> stop = new Stack<>();
        
        //시간순으로 정렬
        Arrays.sort(plans,(a,b)->TimeInt(a[1])-(TimeInt(b[1])));
        
        int size = plans.length;
        
        int answerIdx = 0;
        int idx = 0;
        int current = 0;
        String type = "";
        int time = 0;
        int period = 0;
        int next = 0; 
        
        while(size!=idx){
            type = plans[idx][0]; //과목이름
            time = TimeInt(plans[idx][1]); // 시작시간
            period = Integer.parseInt(plans[idx][2]); //걸리는시간
            
            current = time + period;
            
            //과제 종료시간 > 다음 과제 시작시간 체크
            if(size - 1 != idx){
                next = TimeInt(plans[idx+1][1]); //다음 과제 시작 시간
                if(current > next){ //중간에 과제를 멈춰야하는 경우
                    stop.push(new String[]{type, current - next + ""});//과목명, 남은시간 저장
                    current = next;
                    idx++;
                    continue;
                }
            }
            
            //과제 완료
            answer[answerIdx++] = type;
            
            //남은 시간동안 멈춘 과제하기
            while(!stop.isEmpty()){
                int remain = next - current; //다음 과제 시작까지 남은 시간
                String[] work = stop.pop();
                int re_p =Integer.parseInt(work[1]); //과제의 남은 시간
                
                //멈춘과제 완료
                if(remain >= re_p){
                    answer[answerIdx++] = work[0];
                    current += re_p;
                }else{
                    //과제를 또 멈춰야할때            
                    stop.push(new String[]{work[0], re_p-remain + ""});
                    break;
                }
                  
            }
            idx++;
        }
        
        //다 끝내고 중간에 멈춘 과제 완료하기
        while(!stop.isEmpty()){
            answer[answerIdx++] = stop.pop()[0];
        }
        
        return answer;
    }
}

/*
가장 최근에 멈춘 과제부터 시작 -> LIFO -> Stack사용

1. 시간을 정수로 바꿔서 정렬하기
2. 과제를 진행하면서 현재시간 + 과제진행시간 > 다음 과제 시작시간이면 stop에 남은 과제 넣고 다음 과제 시작
3. 과제 완료 후 다음 과제까지 남는 시간동안 stop에 있는 과제 진행

마지막에 과제 다 시작하고 중간에 멈춘 과제들 수행
*/