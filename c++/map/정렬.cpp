#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string, greater<int>> m; //greater<int>: key를 기준으로 내림차순 정렬하라는 의미.

    m[3] = "Three";
    m[1] = "One";
    m[2] = "Two";

    for (auto p : m) {
        cout << p.first << ": " << p.second << endl;
    }

    return 0;
}

/*
출력결과
3: Three  
2: Two  
1: One


map<int, string> m; // 기본: 오름차순 정렬 (less<int>)
map<int, string, greater<int>> m; // greater<int>: 내림차순 정렬


*/
