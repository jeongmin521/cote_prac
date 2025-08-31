#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string littleStr;
    for(int i = 0; i< myStr.size(); i++){
        if(myStr[i] == 'a' or myStr[i] == 'b' or myStr[i] == 'c'){
            if(littleStr != ""){
                answer.push_back(littleStr);
                littleStr = "";
            }
            if(i == myStr.size() - 1 and littleStr == ""){
                answer.push_back("EMPTY");
            }
                
        }
        else {
            littleStr += myStr[i];
            if(i == myStr.size() - 1){
                if(littleStr == ""){
                    answer.push_back("EMPTY");
                }
                else{
                    answer.push_back(littleStr);
                }
            }
        }
    }
    return answer;
}

/*
a, b, c 나오면 빼고 자르기

*/