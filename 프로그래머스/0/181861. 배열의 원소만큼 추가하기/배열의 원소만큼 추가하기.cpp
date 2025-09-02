#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i]; j++){
            answer.push_back(arr[i]);
        }
    }
    return answer;
}

/*
원소만큼 n번 벡터에 추가하기
이중for문
*/