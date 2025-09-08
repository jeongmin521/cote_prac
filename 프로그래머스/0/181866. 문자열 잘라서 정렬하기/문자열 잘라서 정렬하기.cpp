#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string str;
    //벡터에 각각 x를 기준으로 자르기
    for(int i = 0; i < myString.size(); i++){
        if(myString[i] == 'x'){
             if (!str.empty()){
                answer.push_back(str);
                str = "";
             }
        }
        else{
            str += myString[i];
            if(i == myString.size() - 1){
                answer.push_back(str);
            } 
        }
    }
    //정렬
    sort(answer.begin(), answer.end());
    return answer;
}

/*
x를 기준으로 자르고 abc순으로 배열

*/