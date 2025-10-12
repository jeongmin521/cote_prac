#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    
    for(int i = 0; i < str_list.size(); ++i) {
        if(str_list[i].find(ex) == string::npos) answer += str_list[i];
    }
    return answer;
}

/*
특정 문자열을 포함한 원소를 제거하고
배열의 모든 원소들 이어붙인 문자열 만들기
*/