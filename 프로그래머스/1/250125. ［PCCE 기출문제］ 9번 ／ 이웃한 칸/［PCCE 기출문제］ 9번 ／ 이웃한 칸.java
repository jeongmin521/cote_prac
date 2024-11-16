class Solution {
    public int solution(String[][] board, int h, int w) {
        int cnt = 0; //동서남북 중 같은 색깔의 수
        int maxH = board.length - 1; //세로 최대 인덱스
        int maxW = board[0].length - 1; //가로 최대 인덱스
        
        // 위
        if (h > 0 && board[h-1][w].equals(board[h][w])) {
            cnt++;
        }
        // 아래
        if (h < maxH && board[h+1][w].equals(board[h][w])) {
            cnt++;
        }
        // 왼쪽
        if (w > 0 && board[h][w-1].equals(board[h][w])) {
            cnt++;
        }
        // 오른쪽
        if (w < maxW && board[h][w+1].equals(board[h][w])) {
            cnt++;
        }
        
        return cnt;
    }
}

/*
위 아래 왼 오 같은 색깔로 칠해진 칸의 개수 구하기
board[h][w] = "색 문자열"
위 = board[h-1][w]
아래 = board[h+1][w]
왼 = board[h][w-1]
오른 = board[h][w+1]
범위를 벗어나는 경우 제외
*/