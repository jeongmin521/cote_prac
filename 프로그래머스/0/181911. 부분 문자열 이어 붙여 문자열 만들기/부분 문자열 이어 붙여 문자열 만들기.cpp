#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    string subStr = "";
    for(int i = 0; i < parts.size(); i++){
        int start = parts[i][0];
        int end = parts[i][1];
        answer += my_strings[i].substr(start, end - start + 1);
    }
    return answer;
}


//start, end 인덱스위치만큼 부분문자열 만들어 이어붙이기
