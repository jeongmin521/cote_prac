#include <string>
#include <vector>

using namespace std;
 
int solution(string my_string) {
    int answer = 0;
    string temp = "";
    for(int i = 0; i < my_string.length(); i++){
        if(my_string[i] >= '0' && my_string[i] <= '9'){
            temp += my_string[i];
        }
        else {
            if (temp != "") {
                answer += stoi(temp);
                temp = "";
            }
        }
    }
    
    if (temp.length()) {
        answer += stoi(temp);
    }
    
    return answer;
}
