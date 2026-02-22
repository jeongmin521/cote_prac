#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int str1 = my_str.length() / n;
    int strmini = my_str.length() % n;
    int count = 0;
    
    for(int i = 0; i < str1; i++) {
        answer.push_back(my_str.substr(count, n));
        count += n;
    }
    if(strmini > 0) {
        answer.push_back(my_str.substr(count));
    }
    return answer;
}