#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    for(int i = 0; i < numLog.size() - 1; i++){
        int k = numLog[i] - numLog[i+1];
        if (k == -1){
            answer += "w";
        }
        else if(k == 1){
            answer += "s";
        }
        else if(k == 10){
            answer += "a";
        }
        else if(k == -10){
            answer += "d";
        }
    }
    return answer;
}

/*
numLog 를 보고 추적하기
numLog[i] 랑 numLog[i+1]비교해서 차이
*/