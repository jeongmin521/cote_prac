class Solution {
    public int solution(int n) {
        int answer = 0;       
        for (int i = 1; i <= n; i++) {
            int sum = 0;          
            for (int j = i; j <= n; j++) {
                sum += j;
                if (sum == n) {
                    answer++;
                    break;
                }
                if (sum > n) {
                    break;
                }
            }
        }
        return answer;
    }
}

/*
경우의 수 구하기
작은수부터 더해서 n이 되면 cnt++
*/