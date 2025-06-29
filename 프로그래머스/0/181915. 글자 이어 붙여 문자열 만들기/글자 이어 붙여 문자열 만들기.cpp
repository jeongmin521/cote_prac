#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    
    for(int i = 0; i < index_list.size(); i++) {
        answer += my_string[index_list[i]];
    }
    return answer;
}

/*
문자열 my_string의 n번째 인덱스에 있는 글자 이어붙이기
*/