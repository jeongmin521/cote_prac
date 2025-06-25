#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i = 0;

    while(i < arr.size()) {
        if(stk.empty()) {
            stk.push_back(arr[i]);
            i++;
        } else if(stk.back() < arr[i]) {
            stk.push_back(arr[i]);
            i++;
        } else {
            stk.pop_back(); 
        }
    }
    return stk;
}

/*
arr[i] > arr의 길이
stk.push_back(arr[i])
stk의 마지막 원소 > arr[i] 이면 삭제

signal: segmentation fault (core dumped) -> 범위 초과 에러
*/