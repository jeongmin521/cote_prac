import java.util.*;

class Solution {
    public int solution(int []A, int []B) {
        int answer = 0;
        Arrays.sort(A);
        Arrays.sort(B);
        
        for (int i = 0; i < A.length; i++) {
            answer += A[i] * B[B.length - i - 1];
        }
        
        return answer;
    }
}
/*
최소가 되는 방법
A배열에서 제일 작은 값
B배열에서 제일 큰 값을 곱함
누적해서 더하기


*/