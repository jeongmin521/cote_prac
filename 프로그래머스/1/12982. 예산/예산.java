import java.util.*;

class Solution {
    public int solution(int[] d, int budget) {
        Arrays.sort(d);
        int answer = 0;
        for (int i = 0; i < d.length; i++) {
            if (budget - d[i] < 0) {
                break;
            }
            budget -= d[i];
            answer++;
        }
        return answer;
    }
}

/*
최대한 많은 부서의 물품 구매하기
싼 걸 먼저 구매
구매하면 cout++
돈 다쓰면 종료
*/