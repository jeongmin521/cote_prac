#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++){
        if(find(answer.begin(), answer.end(), arr[i]) != answer.end()){
            continue;
        }
        else{
            if(answer.size() < k){
                answer.push_back(arr[i]);
            }
        }
    }
    
    if(answer.size() < k){
        for(int i = answer.size(); i < k; i++){
            answer.push_back(-1);
        }
    }
    return answer;
}

/*
arr[i]가 이미 result에 있으면 넘어가고
없으면 추가하기
*/