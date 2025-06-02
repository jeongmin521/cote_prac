#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    for(int i = 0; i < num_list.size(); i+= n){
        answer.push_back(num_list[i]);
    }
    return answer;
}

/*
정수 리스트 num_list 에서
n개 간격으로 저장되어 있는 원소들을 차례로 담기

*/