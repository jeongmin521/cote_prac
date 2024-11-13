class Solution {
    public int solution(int[] bandage, int health, int[][] attacks) {
        int currunt = 0; //현재 시간
        int attackTime = 0;
        int maxHealth = health; //최대 체력
        int healSec = 0; //연속 시간

        while(currunt <= attacks[attacks.length - 1][0]){ //마지막 공격 시간까지
            if(currunt == attacks[attackTime][0]){ //공격을 받았을 때
                health -= attacks[attackTime][1];
                healSec = 0;
                attackTime++;
                if(health <= 0){ //죽음
                    return -1;
                }
            }
            else{
                health += bandage[1];
                healSec++;
                if(healSec == bandage[0]){ //연속 감기 성공
                    health += bandage[2];
                    healSec = 0;
                }
                if(health > maxHealth){
                    health = maxHealth;
                }                
            }
            currunt++;
        }
        
        //최종 남은 체력
        return health;
    }
}

/*
1초 마다 x만큼 체력 회복
t초 연속으로 붕대를 감는 데 성공하면 y만큼의 체력을 추가로 회복
최대 체력 존재

공격받으면 기술 취소

bandage = [시전 시간, 초당 회복량, 추가 회복량]
최대체력 health
attacks = [공격 시간, 피해량]
남은 체력 return
죽으면 -1 리턴

*/