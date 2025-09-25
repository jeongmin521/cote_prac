#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    
    unordered_set<int> del(delete_list.begin(), delete_list.end());

    vector<int> answer;
    answer.reserve(arr.size());
    for (int x : arr) {
        if (del.find(x) == del.end()) { 
            answer.push_back(x);
        }
    }
    return answer;
}
