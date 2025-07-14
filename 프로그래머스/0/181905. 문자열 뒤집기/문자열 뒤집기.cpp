#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e) {
    string subString = my_string.substr(s, e - s + 1);
    reverse(subString.begin(), subString.end());
    my_string.replace(s, e - s + 1, subString);
    return my_string;
}

/*
substr로 떼고 뒤집은다음에 다시 이어붙이기
*/