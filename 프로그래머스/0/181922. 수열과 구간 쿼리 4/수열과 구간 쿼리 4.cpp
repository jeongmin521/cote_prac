#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(int i = 0; i < queries.size(); i++) {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        
        for (int j = s; j <= e; j++) {
            if (j % k == 0) {
                arr[j] = arr[j] + 1;
            }
            else {
                continue;
            }
        }
    }
    return arr;
}


/*
int s = queries[i][0]
int e = queries[i][1]
int k = queries[i][2]

i % k == 0 이면
arr[i] += 1
*/