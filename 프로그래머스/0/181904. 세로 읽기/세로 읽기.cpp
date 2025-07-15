#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c)
{
    string answer = "";
    for(int i = 0; i < my_string.size(); i++){
        if(i % m + 1 == c) {
            answer.push_back(my_string[i]);
        }
    }
    return answer;
}

/*
my_string을 한 줄에 m글자씩 잘라서 저장
그 각 문자열의 c번째 열의 글자를 문자열로 저장

m글자 중 c번째 -> i % m + 1 == c
*/