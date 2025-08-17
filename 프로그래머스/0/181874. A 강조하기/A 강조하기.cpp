#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
     for(int i = 0; i < myString.size(); i++){
        if(myString[i] == 'a' || myString[i] == 'A') {
            myString[i] = 'A'; 
        }
        else {
            myString[i] = tolower(myString[i]);
        }
    }
    return myString;
}

/*
A만 대문자고 나머지는 다 소문자로 변환
*/