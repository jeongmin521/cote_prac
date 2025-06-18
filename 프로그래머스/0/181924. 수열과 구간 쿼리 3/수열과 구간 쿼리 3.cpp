#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(int i = 0; i < queries.size(); i++){
        int one = queries[i][0];
        int two = queries[i][1];
        
        int tmp = arr[one];
        arr[one] = arr[two];
        arr[two] = tmp;
        
    }
    return arr;
}

/*
queries[i][0] -> i
queries[i]][1] -> j

두 값 바꾸기
tmp = arr[i]
arr[i] = arr[j]
arr[j] = tmp

*/