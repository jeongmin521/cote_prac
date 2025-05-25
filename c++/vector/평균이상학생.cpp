#include <iostream>
#include <vector>
#include <map>
#include <numeric>  // accumulate

using namespace std;

int main() {
    map<string, int> student_scores; //학생 이름:점수 

    // 데이터 입력
    student_scores["Alice"] = 85;
    student_scores["Bob"] = 72;
    student_scores["Charlie"] = 90;
    student_scores["Diana"] = 68;
    student_scores["Eve"] = 95;

    // 점수만 따로 벡터로 저장
    vector<int> scores;
    for (const auto& pair : student_scores) {
        scores.push_back(pair.second);
    }
  /*
 const auto&
 이 값은 바꾸지 않겠고, 복사하지 말고 참조만 한다는 의미 (효율적이고 안전)
  
  변수 paiir안에는 student_scores와 같이 학생이름:점수 의 자료가 저장됨
  pair.first  → "Alice", "Bob", ...
  pair.second → 85, 72, ...
  */

    // 평균 계산
    double avg = accumulate(scores.begin(), scores.end(), 0.0) / scores.size();
    cout << "Average score: " << avg << endl;

    // 평균 이상 학생 출력
    cout << "Students with average or above score:" << endl;
    for (const auto& pair : student_scores) {
        if (pair.second >= avg) {
            cout << pair.first << " (" << pair.second << ")" << endl;
        }
    }

    return 0;
}


/*
accumulate()
<numeric> 헤더에 포함된 누적 합 계산 함수
accumulate(시작, 끝, 초기값) 형태로 사용


*/
