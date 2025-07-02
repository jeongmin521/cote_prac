#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for(int i = 0; i < intStrs.size(); i++){
        string substring = intStrs[i].substr(s, l);
        if(stoi(substring) > k){
            answer.push_back(stoi(substring));
        }
    }
    return answer;
}

/*
s번 인덱스에서 시작하는 길이 l짜리 부분 문자열을 정수로 변환
이때 변환한 정수값이 k보다 크면 배열에 담기
*/