#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    for(int i = 0; i < code.size(); i++){
        if(i % q == r){
            answer += code[i];
        }
    }
    return answer;
}

/*
code의 각 인덱스를q로 나눴을 때 나머지가 r인 위치의 문자를 이어붙이기

*/