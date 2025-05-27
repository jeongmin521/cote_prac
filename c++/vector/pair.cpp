#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 학생 번호와 점수를 저장할 벡터
    vector<pair<int, int>> students;

    // 학생 5명의 (번호, 점수) 추가
    students.push_back(make_pair(1, 80));  // 1번 학생, 80점
    students.push_back(make_pair(2, 95));  // 2번 학생, 95점
    students.push_back(make_pair(3, 75));  // 3번 학생, 75점
    students.push_back(make_pair(4, 90));  // 4번 학생, 90점
    students.push_back(make_pair(5, 85));  // 5번 학생, 85점

    // 점수 기준으로 내림차순 정렬
    sort(students.begin(), students.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;  // 점수가 더 큰 순으로
    });

    // 정렬된 결과 출력
    cout << "학생 번호 : 점수" << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << students[i].first << " : " << students[i].second << endl;
    }

    return 0;
}


/*
pair
서로 다른 자료형을 한 쌍으로 묶은 자료구조

map은 key-value쌍이라면
pair은 value-value임

*/
