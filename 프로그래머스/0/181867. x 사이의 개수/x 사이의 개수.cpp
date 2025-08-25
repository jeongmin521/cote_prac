#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int cnt = 0;
    for(int i = 0; i < myString.size(); i++){
        if(myString[i] == 'x'){
            answer.push_back(cnt);
            cnt = 0;
            if(i == myString.size() - 1){
                answer.push_back(cnt);
            }
        }
        else{
            cnt++;
            if(i == myString.size() - 1){
                answer.push_back(cnt);
            }
        }
    }
    return answer;
}

/*
x를 기준으로
몇 글자인지
*/