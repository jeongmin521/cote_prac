class Solution {
    public int solution(int[] wallet, int[] bill) {
        int cnt = 0;
        int bigBill = 0;
        int smallBill = 0;
        int bigWallet = 0;
        int smallWallet = 0;
        if(wallet[0] > wallet[1]){
            bigWallet = wallet[0];
            smallWallet = wallet[1];
        }
        else {
            bigWallet = wallet[1];
            smallWallet = wallet[0];
        }
        if(bill[0] > bill[1]){
            bigBill = bill[0];
            smallBill = bill[1];
        }
        else{
            bigBill = bill[1];
            smallBill = bill[0];
        }
        
        boolean k = true;
        while(k){
            if (bigBill < smallBill){
                int tmp = bigBill;
                bigBill = smallBill;
                smallBill = tmp;
            }
            
            if(bigBill <= bigWallet && smallBill <= smallWallet){
                k = false;
                break;
            }
            else {
                bigBill = bigBill/2;
                cnt ++;
            }
        }
        return cnt;
    }
}

/*
길이가 긴 쪽을 반으로 접음
wallet[0] = 지갑의 가로 길이
wallet[1] = 지갑의 세로 길이
bill[0] = 지폐의 가로 길이
bill[1] = 지폐의 세로 길이

cnt = 지폐를 접은 횟수
*/