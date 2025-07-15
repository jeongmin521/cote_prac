#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    for (int i = k; i <= n; i += k) {
        answer.push_back(i);
    }
    return answer;
}


/*
n이하의 정수 중 k의 배수 찾아서 오름차순 정렬
*/