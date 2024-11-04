import java. util.*;

class Solution {
    public int solution(String[] friends, String[] gifts) {
        int answer = 0;
        List<String> giveList = new ArrayList();
        List<String> takeList = new ArrayList();
        int[] giftScore = new int[friends.length]; //지수 넣을 배열
        int[][] giftTime = new int[friends.length][friends.length]; //횟수 넣을 배열
        int[] nextMonth = new int[friends.length];//다음 달 받는 선물 수
        
        for (int i = 0; i < gifts.length; i++){
            String[] name = gifts[i].split(" ");
            giveList.add(name[name.length - 2]);
            takeList.add(name[name.length - 1]);
        }
        //배열로 변환
        String give[] = giveList.toArray(new String[gifts.length]); 
        String take[] = takeList.toArray(new String[gifts.length]); 
        
        //선물 지수
        int score = 0;
        for(int i = 0; i< friends.length; i++){
            int giveTime = 0;
            int takeTime = 0;
            for(int j = 0; j < gifts.length; j++){
                if(friends[i].equals(give[j])){
                    giveTime++;
                }
                else if(friends[i].equals(take[j])){
                    takeTime++;
                }
            }
            score = giveTime - takeTime;
            giftScore[i] = score;
            score = 0;
        }
        
        //선물 횟수
        for (int i = 0; i < gifts.length; i++) {
            int giverIdx = -1;
            int takerIdx = -1;
            
            for(int j = 0; j < friends.length; j++) {
                if (friends[j].equals(give[i])) {
                    giverIdx = j;
                    break;
                }
            }

            for (int k = 0; k < friends.length; k++) {
                if (friends[k].equals(take[i])) {
                    takerIdx = k;
                    break;
                }
            }

            if (giverIdx != -1 && takerIdx != -1) {
                giftTime[giverIdx][takerIdx]++;
            }
        }

        for(int i = 0; i < friends.length; i++) {
            System.out.println();
            for(int j = 0; j < friends.length; j++) {
                System.out.print(giftTime[i][j] + " ");
            }
        }
        
        
        //누가 선물을 받는지
        for(int i = 0; i < friends.length; i++){
            for(int j = i + 1; j < friends.length; j++){
                if(giftTime[i][j] > giftTime[j][i] && i != j){
                    nextMonth[i]++;
                }
                else if(giftTime[i][j] < giftTime[j][i] && i != j){
                    nextMonth[j]++;
                }
                //횟수가 같은 경우
                else if(giftTime[i][j] == giftTime[j][i] && i != j){
                    if(giftScore[i] > giftScore[j]) {
                        nextMonth[i]++;
                    } else if(giftScore[i] < giftScore[j]) {
                        nextMonth[j]++;
                    }
                }
            }
        }
        System.out.println();
        System.out.println();
        
        for(int i = 0; i < friends.length; i++) {
            System.out.print(nextMonth[i]+ " ");
        }
        
        for(int i = 0; i < friends.length; i++){
            if(answer < nextMonth[i]){
                answer = nextMonth[i];
            }
        }
        
        return answer;
    }
}

/*
더 많이 준 사람이 받음
동일 시 선물 지수가 작은 사람이 큰+ 사람에게 줌
선물지수(음수 가능) : 보낸 선물 수 - 받은 선물 수

구해야 하는 것 : 선물을 가장 많이 받을 사람의 받는선물 수

이름  friends
gifts = "준사람 받은사람" 공백으로 구분

풀이방법
각 한명 한명마다 비교를 해야 함(횟수, 지수)
1. 횟수 비교
    2차원 배열 생성
2. 횟수가 같을 경우 지수를 비교

*/