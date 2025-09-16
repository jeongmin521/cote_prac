#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    sort(num_list.begin(), num_list.end());
    num_list.erase(num_list.begin(), num_list.begin() + 5);
    return num_list;
}

/*
오름차순 정렬 후 앞에서부터 지우기
*/