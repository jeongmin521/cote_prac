class Solution {
    public long solution(int price, int money, int count) {
        long answer = 0;
        long total = 0;
		
        for(int i = 1; i < count + 1; i++){
            total += price*i;
        }
        if(money < total)
            answer = total-money;
        else
            answer = 0;
        
        return answer;
    }
}


/*
n번 이용 할 때마다 *n배의 금액
총 필요한 금액 : count++ 하면서 price에 곱해서 더하기
최종 부족한 금액 계산
*/