#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(3, 10); // 10 10 10
    vector<int>::iterator it;

    it = v.begin();

    // v의 시작 부분에 20 삽입
    it = v.insert(it, 20); // 20 10 10 10

    // v의 시작 부분에 30을 2번 삽입
    v.insert(it, 2, 30); // 30 30 20 10 10 10

    vector<int> v2(2, 40); // 40 40

    // v의 인덱스가 2인 위치에 v2의 전체 원소를 삽입
    v.insert(it + 2, v2.begin(), v2.end()); 
    // 30 30 '40 40' 20 10 10 10 

    int arr[] = { 51, 52, 53 };

    // v의 시작 부분에 arr의 전체 원소를 삽입
    v.insert(v.begin(), arr, arr + 3); // 51 52 53' 30 30 40 40 20 10 10 10 

    cout << "v contains: ";
    for (it = v.begin(); it < v.end(); it++)
        cout << *it << " ";
    cout << "\n";

    return 0;
}


/*
벡터에 값 삽입하는 함수 insert
벡터 v가 있다고 할 때
v.insert(위치(인덱스), 값) -> v의 특정위치에 값을 삽입
v.insert(위치, n, 값); -> v의 특정위치에 값을 n번 삽입
v.insert(위치, v1.begin(), v1.end()); -> v의 특정 위치에 v1의 값을 삽입
*/
