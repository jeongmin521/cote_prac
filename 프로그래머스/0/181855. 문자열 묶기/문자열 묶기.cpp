#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    vector<int> cnt(31, 0);
    int maxSize = 0;

    for (int i = 0; i < strArr.size(); i++) {
        int len = (int)strArr[i].size();
        maxSize = max(maxSize, ++cnt[len]); 
    }

    return maxSize;
}

/*
길이가 같은 문자열들끼리 묶기
가장 원소가 많은 그룹의 크기
*/


