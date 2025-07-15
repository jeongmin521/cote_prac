#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52);
    
    for(int i = 0; i < my_string.size(); ++i) {
        if('A' <= my_string[i] && my_string[i] <= 'Z') {
            answer[my_string[i] - 65]++;
        }
        else if('a' <= my_string[i] && my_string[i] <= 'z') {
            answer[my_string[i] - 71]++;
        }
    }
    return answer;
}

/*
각 알파벳 대소문자 별 개수 구하기
A-z 까지
26 * 2 = 52개
A = 65
a = 97
A-Z -> 0~25
a-z -> 26~51
*/