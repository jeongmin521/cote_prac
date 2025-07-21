#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    for (int i = 0; i < query.size(); i++) {
        if (i % 2 == 0) {
            //짝수
            arr.resize(query[i] + 1);
        } else {
            //홀수
            arr.erase(arr.begin(), arr.begin() + query[i]);
        }
    }
    return arr;
}

/*
짝수인덱스
arr[query[i]] 뒷부분 잘라서 버림
홀수인덱스
arr[query[i]] 앞부분 잘라서 버림
*/