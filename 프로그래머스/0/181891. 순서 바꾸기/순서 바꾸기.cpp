#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;

    for (int i = n; i < num_list.size(); i++) {
        answer.push_back(num_list[i]);
    }

    for (int i = 0; i < n; i++) {
        answer.push_back(num_list[i]);
    }

    return answer;
}


/*
n번째 원소(numlist[index - 1])
n번째 이후의 원소 answer에 추가
나머지 원소들 뒤에 추가
*/