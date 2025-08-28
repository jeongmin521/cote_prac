#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string newString = "";
    
    for(int i = 0; i < rny_string.size(); i++){
        if(rny_string[i] == 'm'){
            newString += "rn";
        }
        else{
            newString += rny_string[i];
        }
    }
    return newString;
}

/*
m -> rn
글자수가 2개 이상이니까 'char'말고 "string"으로
*/