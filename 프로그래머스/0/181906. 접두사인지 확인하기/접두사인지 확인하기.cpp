#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    for(int i = 1; i < my_string.size(); i++){
        string prefix = my_string.substr(0, i);
        if(is_prefix == prefix){
            return 1;
        }
    }
    return answer;
}

/*
for문으로 길이 하나씩 늘려가면서 is_prefix와 일치하는게 있나 확인
*/