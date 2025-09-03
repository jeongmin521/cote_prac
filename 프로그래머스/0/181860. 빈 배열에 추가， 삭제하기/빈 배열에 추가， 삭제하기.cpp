#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++){
        if(flag[i] == true){
            for(int j = 0; j < arr[i] * 2; j++){
                answer.push_back(arr[i]);
            }
        }
        else if(flag[i] == false) {
            for(int k = 0; k < arr[i]; k++){
                answer.erase(answer.end() - 1);
            }
        }
    }
    return answer;
}

/*
true -> arr[i]를 arr[i] * 2 번 추가
false -> 맨 뒤 원소를 arr[i] 번 삭제
*/