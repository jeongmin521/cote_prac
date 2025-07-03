#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    int s = my_string.size() - n;
    answer = my_string.substr(s, n);
    return answer;
}

/*
my_string의 뒤의 n글자 찾기
my_string.size() - n 하면 시작인덱스
*/