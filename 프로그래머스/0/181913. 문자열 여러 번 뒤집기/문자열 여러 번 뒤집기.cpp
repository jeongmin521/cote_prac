#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    for(int i = 0; i < queries.size(); i++){
        reverse(my_string.begin() + queries[i][0], my_string.begin() + queries[i][1] + 1);
    }
    
    return my_string;
}
/*
my_string의 queries[0]부터 queries[1]까지 인덱스 뒤집기
reverse함수
reverse(str.begin(), str.end())
*/