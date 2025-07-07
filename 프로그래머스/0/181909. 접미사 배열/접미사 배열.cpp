#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    for(int i = 0; i < my_string.size(); i++){
        string newStr = my_string.substr(i, my_string.size());
        answer.push_back(newStr);
    }
    sort(answer.begin(), answer.end());
    return answer;
}

/*
index하나씩 뒤로 보내면서 마지막자리까지 부분문자열 만들기
이후 알파벳순 정렬
*/