#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> answer;
    for(int i = start_num; i > end_num - 1; i--){
        answer.push_back(i);
    }
    return answer;
}

/*
start_num에서 end_num까지 숫자 저장
*/