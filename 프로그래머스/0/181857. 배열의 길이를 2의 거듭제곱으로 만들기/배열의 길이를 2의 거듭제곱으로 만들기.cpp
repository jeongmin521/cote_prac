#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int k = 1; 
    while (k < arr.size()) {
        k *= 2;  
    }
    for(int i = arr.size(); i < k; i++){
        arr.push_back(0);
    }
    return arr;
}

/*
arr.size() = 2^n
2^n 배열을 만들어서 현재 배열 길이 다음으로 큰 2^n 구하기
*/