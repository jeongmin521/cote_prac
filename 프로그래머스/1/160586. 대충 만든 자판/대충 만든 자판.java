import java.util.*;

class Solution {
    public int[] solution(String[] keymap, String[] targets) {
        int[] answer = new int[targets.length];
        Map<Character, Integer> map = new HashMap<>();

        for (String s : keymap) {
            for (int i = 0; i < s.length(); i++) {
                char key = s.charAt(i);
                // key가 존재 : 저장된 값, 존재x : i + 1
                int value = map.getOrDefault(key, i + 1);

                // key에 작은 값으로 저장
                map.put(key, Math.min(value, i + 1));
            }
        }

        for (int i = 0; i < targets.length; i++) {
            for (int j = 0; j < targets[i].length(); j++) {
                char key = targets[i].charAt(j);

                if (map.containsKey(key)) {
                    answer[i] += map.get(key);
                } else {
                    answer[i] = -1;
                    break;
                }
            }
        }

        return answer;
    }
}