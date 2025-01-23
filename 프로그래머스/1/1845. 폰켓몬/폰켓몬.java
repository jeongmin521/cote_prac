import java.util.*;

class Solution {
    public int solution(int[] nums) {
        int answer = 0;
        int getMon = nums.length / 2; //내가 가져갈 수 있는 폰켓몬의 수
        HashSet<Integer> set = new HashSet<>();

        for(int num : nums) {
            set.add(num);
        }

        //폰켓몬의 종류
        int type = set.size();

        if(type >= getMon) { //종류가 더 많은 경우 -> 선택한 전체 수
            answer = getMon;
        } else {
            answer = type; 
        }

        return answer;
    }
}

