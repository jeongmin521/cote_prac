#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    vector<pair<int,int>> stdidx; 
    for (int i = 0; i < attendance.size(); i++) {
        if (attendance[i]) stdidx.push_back({rank[i], i});
    }
    sort(stdidx.begin(), stdidx.end());

    int a = stdidx[0].second;
    int b = stdidx[1].second;
    int c = stdidx[2].second;

    return 10000 * a + 100 * b + c;
}

/*
attendance = true인 인덱스 찾아서
rank의 그 인덱스들만 따로 빼고 제일 큰 숫자 3개 찾기
10000 × a + 100 × b + c
*/