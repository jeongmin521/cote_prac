class Solution {
    public String solution(String[] cards1, String[] cards2, String[] goal) {
        String answer = "Yes";

        int card1Idx = 0;
        int card2Idx = 0;

        for (int i = 0; i < goal.length; i++) {
            if(card1Idx < cards1.length && goal[i].equals(cards1[card1Idx])) {
                card1Idx++;
                continue;
            }

            if(card2Idx < cards2.length && goal[i].equals(cards2[card2Idx])) {
                card2Idx++;
                continue;
            }

            answer = "No";
            return answer;
        }

        return answer;
    }
}