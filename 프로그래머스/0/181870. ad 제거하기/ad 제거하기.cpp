#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for (int i = 0; i < strArr.size(); i++) {
        if (strArr[i].find("ad") == string::npos) {
            answer.push_back(strArr[i]);
        }
    }
    return answer;
}

/*
부분문자열이 ad이면 지움
아니면 원본 반환
*/