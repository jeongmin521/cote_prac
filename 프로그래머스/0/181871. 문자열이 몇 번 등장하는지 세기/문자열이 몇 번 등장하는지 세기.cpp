#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for (int i = 0; i <= myString.size() - pat.size(); i++) {
        if (myString.substr(i, pat.size()) == pat) {
            answer++;
        }
    }
    
    return answer;
}

/*
myString안에서 pat이 몇 번 등장하는지
*/