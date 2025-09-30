#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    int answer = 0;
    answer = (my_string.find(target) != string::npos) ? 1 : 0;
    return answer;
}

/*
부분 문자열 찾기
str.find(target)
없으면 npos
있으면 index반환
*/