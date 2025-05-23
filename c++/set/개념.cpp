/*
set
 - 정렬된 집합
 - 중복X
 - 기본 오름차순 정렬
 - 내림차순 정렬 set<int, greater<int>> s; =? map이랑 똑같

vector랑 비슷
insert(x)	원소 x 삽입 (중복은 무시)
erase(x)	원소 x 삭제
find(x)	원소 x 탐색, iterator 반환
count(x)	존재 여부 반환 (0 또는 1)
clear()	모든 원소 삭제
size()	원소 개수
begin(), end()

*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(10); // 중복 무시

    for (int val : s) {
        cout << val << " "; // 10 20 30 (자동 오름차순 정렬)
    }
    cout << endl;

    s.erase(20);

    if (s.find(30) != s.end()) {
        cout << "30 있음" << endl;
    }

    cout << "크기: " << s.size() << endl;

    return 0;
}
/*
출력결과
10 20 30 
30 있음
크기: 2
*/
