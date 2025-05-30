/*
map
키-값 쌍을 저장하는 컨테이너로, 키를 기준으로 자동 정렬
 - 키는 유일해야 함
 - 자동 정렬 (기본: 오름차순)
 - 탐색, 삽입, 삭제: O(log N) (RB-Tree 기반)
 - 임의 접근 불가
 */

//1. 접근
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> score;

    score["Alice"] = 95;
    score["Bob"] = 80;
    score["Charlie"] = 85;

    for (auto p : score) {
        cout << p.first << ": " << p.second << endl;
    }

    // 특정 키 접근
    cout << "Bob의 점수: " << score["Bob"] << endl;

    return 0;
}

/* 출력결과
Alice: 95
Bob: 80
Charlie: 85
Bob의 점수: 80
 */


//2. 삽입/삭제
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;

    // 삽입 방법
    m["apple"] = 3;
    m["grape"] = 5;
    m.insert(make_pair("orange", 7));

    // 값 출력
    for (auto p : m) {
        cout << p.first << ": " << p.second << endl;
    }

    // 키로 접근
    cout << "grape 개수: " << m["grape"] << endl;

    m.erase("grape"); // grape 삭제

    // 존재 확인
    if (m.find("grape") != m.end()) {
        cout << "grape 있음" << endl;
    } else {
        cout << "grape 없음" << endl;
    }
    return 0;
}

/*출력결과
apple: 3
grape: 5
orange: 7
grape 개수: 5
grape 없음
*/

//3. iterator 사용
#include <iostream>
#include <map>
using namespace std;

int main() {
   map<string, int> m = {{"apple", 1}, {"banana", 2}};
    for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it){
        cout << it->first << ": " << it->second << endl;
    }
}

/*
apple: 1
banana: 2
*/


//iterator는 auto로 간단하게 쓸 수 있음
for (auto it = m.begin(); it != m.end(); ++it) {
    cout << it->first << ": " << it->second << endl;
}

