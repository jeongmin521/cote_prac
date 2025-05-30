/*
벡터
 - 메모리 공간이 부족하면 자동으로 더 큰 공간으로 재할당
 - 순차적 삽입/삭제에 적합(끝에서)
 - 중간 삽입/삭제는 느림
 - 배열처럼 랜덤 엑세스 빠름(임의 접근 [], at())
 
C가 포인터로 배열의 값에 접근한다면, C++은 iterator을 이용할 수 있음

v.front() / v.back() = v의 첫,마지막 값
v.begin() / v.end() = v의 첫, 마지막 위치
v.size() = 원소의 개수
v.capacity() = 할당된 공간의 크기

공간은 10인데 원소는 1개일 수 있기 때문에 size와 capacity는 다를 수 있음


벡터를 사용하는 방법

*/
//1. 생성
  #include <vector>                    // vector가 들어있는 헤더파일
  vector<int> v;                       // int타입 벡터 생성
  vector<int> v = { 1, 2, 3};          // int형 백터 생성 후 1, 2, 3 으로 초기화
  vector<int> v[10];                   // int타입 벡터 배열(크기 : 10) 생성
  vector<int> v[] = {{ 1, 2}, {3, 4}}; // int형 백터 배열 생성(행은 가변이지만 열은 고정)
  vector<vector<int>> v;               // 2차원 백터 생성(행과 열 모두 가변)
  vector<int> v(5);                    // 5개의 원소를 0으로 초기화
  vector<int> v(5, 3);                 // 5개의 원소를 3으로 초기화
  vector<int> v2(v);                   // 벡터 v를 복사하여 벡터v2 생성

//2. 값 추가
 #include <iostream>
 #include <vector>
 using namespace std;
 
 int main() {
     vector<int> v;
     v.push_back(10);  // 마지막 위치에 숫자 10 추가
     vector<int>::iterator it = v.begin();
     it = v.insert(it, 3); //맨앞에 3 
     it = v.insert(it, 2, 1); // 맨앞에 1을 2개 
     it = v.insert(it+2, 2, 2); // 2번째부터 2를 2개 
 
     for (int i = 0; i < v.size(); i++){
       cout << v[i] << " ";
     } //결과 1 1 2 2 3 10 
 }


/*
Iterator
 - 컨테이너의 원소들을 가리키는 객체
 - 포인터처럼 *, ++, -- 등의 연산 가능
 - STL 컨테이너는 모두 iterator를 제공하며, vector는 랜덤 액세스 iterator를 지원
*/

//1. 출력
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // 일반 iterator
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
 //결과 10 20 30 40 50

//2. 삽입/삭제
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin();

    ++it; // 2를 가리킴
    v.insert(it, 99); // 2 자리에 99 삽입 -> 1 99 2 3 4 5

    it = v.begin() + 3; // 3을 가리킴
    v.erase(it); // 3 삭제 -> 1 99 2 4 5

    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
//결과 1 99 2 4 5

//3. 역순 출력
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    for (vector<int>::reverse_iterator rit = v.rbegin(); rit != v.rend(); ++rit)
        cout << *rit << " "; 
    cout << endl;

    return 0;
}
//결과 // 5 4 3 2 1


