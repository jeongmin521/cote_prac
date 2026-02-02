#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string str = to_string(num);
    
    for(int i = 0; i < str.size(); i++){
        if(str[i] - '0' == k){ //-'0' 문자->숫자로 변환
            answer = i + 1;
            break;
        }
    }
    
    return answer;
}