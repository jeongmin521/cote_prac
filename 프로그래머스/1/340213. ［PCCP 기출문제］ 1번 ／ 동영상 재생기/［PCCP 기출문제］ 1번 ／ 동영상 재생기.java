class Solution {
    //오프닝 건너뛰기
    public int op_skip(int posint, int opstartint, int opendint){
        if(posint >= opstartint && posint < opendint){
            posint = opendint;
            return posint;
        }
        return posint;
    }
    
    public String solution(String video_len, String pos, String op_start, String op_end, String[] commands) {
        String answer = "";
        String[] viedolen = video_len.split(":");
        String[] posstring = pos.split(":");
        String[] opstart = op_start.split(":");
        String[] opend = op_end.split(":");
        
        int videolenint =  Integer.parseInt(viedolen[0]) * 60 +  Integer.parseInt(viedolen[1]);
        int posint =  Integer.parseInt(posstring[0]) * 60 +  Integer.parseInt(posstring[1]);
        int opstartint =  Integer.parseInt(opstart[0]) * 60 +  Integer.parseInt(opstart[1]);
        int opendint =  Integer.parseInt(opend[0]) * 60 +  Integer.parseInt(opend[1]);
                           
        for(int i = 0; i < commands.length; i ++){
            switch(commands[i]){
                case "next":
                    posint = (op_skip(posint, opstartint, opendint));
                    posint += 10;
                    posint = op_skip(posint, opstartint, opendint);
                    if(posint > videolenint){
                        posint = videolenint;
                    }
                    break;
                case "prev":
                    posint = (op_skip(posint, opstartint, opendint));
                    if(posint <= 10){
                        posint = 0;
                        posint = (op_skip(posint, opstartint, opendint));
                    }
                    else{
                        posint -= 10;
                        posint = (op_skip(posint, opstartint, opendint));
                    }
                    break;
            }
        }
        
        int minute = posint / 60;
        int second = posint % 60;
        answer = String.format("%02d:%02d", minute, second);
        return answer;
    }
}


/*
시간은 문자열로 주어짐
싹다 초로 바꾸기

next고려사항
1. 현재 오프닝 구간이면 op_end로 이동 후 10초 뒤로 이동
2. 이동을 했는데 오프닝 구간이면 op_end로 이동
3. 둘다 해당되지 않으면 10초 추가

prev
1. 10초 전으로 이동했을 때 0분0초보다 적으면 0분0초로 이동
*/