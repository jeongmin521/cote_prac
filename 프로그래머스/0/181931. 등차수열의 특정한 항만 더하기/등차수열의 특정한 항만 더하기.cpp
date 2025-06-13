#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    for(int i = 0; i < included.size(); i++) {
        if(included[i]) {
            answer += a + i * d;
        }
    }
    return answer;
}
/*
배열 included
첫째항 a, 공차 d
include[i] = included[i + 1]
1항부터 n항까지 true인 값만 더함
*/