#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> idx;
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 2){
            idx.push_back(i);
        }
    }
    if(idx.size() == 0){
        answer.push_back(-1);
    }
    else if(idx.size() == 1){
        answer.push_back(2);
    }
    else {
        for(int i = idx[0]; i <= idx.back(); i++){
            answer.push_back(arr[i]);
        }
    }
    return answer;
}

/*
배열 안에서 2~2까지 가장 작은 배열 찾기
2가없으면 return -1;

2가 있는 인덱스를 찾아서 그 범위만큼 answer에 넣기
*/