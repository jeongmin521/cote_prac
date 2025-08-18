#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    for (int i = myString.size() - pat.size(); i >= 0; i--) {
        if (myString.substr(i, pat.size()) == pat) {
            answer = myString.substr(0, i + pat.size());
            break;
        }
    }
    return answer;
}

/*
pat과 일치하는 부분을 뒤에서부터 찾아서
제일 앞글자 ~ 일치하는부분까지 return
*/