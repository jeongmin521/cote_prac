#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;
    for(int i = 0; i < names.size(); i += 5){
        answer.push_back(names[i]);
    }
    return answer;
}

/*
names를 5개씩 잘라서 맨 앞에 오는 원소 벡터에 넣기
0부터 5의배수번째 인덱스에 있는 원소 찾기
*/