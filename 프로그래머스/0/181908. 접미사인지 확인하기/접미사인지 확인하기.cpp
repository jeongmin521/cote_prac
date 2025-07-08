#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    for(int i = 0; i < my_string.size(); i++){
        string newStr = my_string.substr(i, my_string.size());
        if(newStr == is_suffix){
            return 1;
        }
        else if(i == my_string.size() - 1){
            return 0;
        }
    }
}

/*
접미사 중 my_suffix와 일치하는게 
있으면 1
아니면 0
*/