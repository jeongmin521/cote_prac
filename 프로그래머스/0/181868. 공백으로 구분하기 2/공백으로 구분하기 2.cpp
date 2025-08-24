#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string str;
    for(int i = 0; i < my_string.size(); i++){
        if(my_string[i] == ' ' && str.size() > 0){
            answer.push_back(str);
            str = "";
        }
        else{
            if(my_string[i] != ' '){
                str += my_string[i];
            }
            if(i == my_string.size() - 1 && str.size() > 0){
                answer.push_back(str);
            }
        }
    }
    return answer;
}
