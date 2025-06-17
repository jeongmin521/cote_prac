#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int last = num_list[num_list.size() - 1];
    int last2 = num_list[num_list.size() - 2];
    
    for(int i = 0; i < num_list.size(); i++){
        answer.push_back(num_list[i]);
    }

    if(last > last2){
        answer.push_back(last - last2);
    }
    else {
        answer.push_back(last * 2);
    }
    
    return answer;
}

/*
마지막 원소와 그전원소 비교
마지막 원소 > 그 전 원소 -> 마지막 원소 - 그 전 원소
마지막 원소 < 그 전 원소 -> 마지막 원소 *2
*/