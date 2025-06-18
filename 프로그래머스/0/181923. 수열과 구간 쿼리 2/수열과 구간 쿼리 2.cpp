#include <string>
#include <vector>
#include <algorithm>
#include <climits> 

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    for (int i = 0; i < queries.size(); i++) {
        int start = queries[i][0];
        int end = queries[i][1];
        int num = queries[i][2];
        
        int minVal = INT_MAX;
        bool found = false;

        for (int j = start; j <= end; j++) {
            if (arr[j] > num) {
                minVal = min(minVal, arr[j]);
                found = true;
            }
        }

        if (found) {
            answer.push_back(minVal);
        } else {
            answer.push_back(-1); 
        }
    }

    return answer;
}

/*
queries[i][0] : 시작인덱스 -> start
queries[i][1] : 끝 인덱스 -> end
queries[i][2] : 수 비교 기준 -> num

num 보다 큰 수 중 가장 작은 값 찾기
*/
