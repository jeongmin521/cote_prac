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

벡터는 원래 크기를 설정해주는게 필수가 아닌데, 지금의 경우에는 특정 인덱스에 값을 저장해야하기 때문에(알파벳 위치에 맞는 인덱스)
처음에 다 0으로 만들어줘서 해당하는 인덱스의 값을 변경할 수 있도록 해야함
이 문제에서는 크기를 설정하지 않으면 에러
*/
