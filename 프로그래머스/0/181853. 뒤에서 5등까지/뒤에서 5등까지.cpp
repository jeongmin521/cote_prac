#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    sort(num_list.begin(), num_list.end());
    if (num_list.size() > 5) {
        num_list.erase(num_list.begin() + 5, num_list.end()); 
    }
    return num_list;
}

/*
오름차순으로 정렬하고 5개 자르기
*/