#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool mode = false;
    for(int i = 0; i < code.length(); i++){
        if(code[i] == '1'){
            if(mode){
                mode = false;
            }
            else{
                mode = true;
            }
        }
        else {
            if(mode){
                if(i % 2 != 0) {
                    answer += code[i];
                }
                else {
                    continue;
                }
            }
            else{
                if(i % 2 == 0){
                    answer += code[i];
                }
                else {
                    continue;
                }
            }
        }
    }
    if(answer.length() == 0){
        return "EMPTY";
    }
    return answer;
}

/*
문자열 code
1이 나오면 모드를 변경
mode 0 : idx가 짝수일 때만 ret에 추가
mode 1 : idx가 홀수일 때만 ret에 추가
*/