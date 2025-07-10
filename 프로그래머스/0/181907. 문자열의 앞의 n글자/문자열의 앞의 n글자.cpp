#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int n) {
    string answer = my_string.substr(0, n);
    return answer;
}

/*
문자열 앞의 n글자만 리턴하기
*/