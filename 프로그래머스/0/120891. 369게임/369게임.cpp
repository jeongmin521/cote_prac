#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string temp = to_string(order);
    for(int i = 0; i < temp.length(); i++){
        if (temp[i] == '3' || temp[i] == '6' || temp[i] == '9'){
            answer += 1;
        }
    }
    return answer;
}
