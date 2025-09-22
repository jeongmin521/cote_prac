#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
     while (!n_str.empty() && n_str.front() == '0') {
        n_str.erase(n_str.begin());
    }
    return n_str;
}

/*
글자 하나씩 돌면서 0이 아닌 수가 나오면 멈춤
0이면 삭제
*/